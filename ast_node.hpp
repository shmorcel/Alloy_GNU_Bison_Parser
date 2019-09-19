#ifndef __ASTNODE_HPP__
#define __ASTNODE_HPP__ 1

#include <string>
#include <list>
#include "location.hh"
#include "mc_parser.tab.hh"
#include <sstream>
#include <stack>
#include <unordered_map>

namespace MC{
  class AstNode {
    public:

    AstNode(){
      id_ = ++nextID;
    }

    void setup(const tokenType type, const location & text_location, const std::string & data){
      data_ = data;
      type_ = type;
      text_location_ = text_location;
    }

    void set_location(const location & text_location){
      text_location_ = text_location;
    }

    const location & get_location(){
      return text_location_;
    }

    void set_data(std::string data){
      data_ = data;
    }

    std::string get_data(){
      return data_;
    }

    void set_type (tokenType type) {
      type_ = type;
    }


    MC::tokenType get_type (){
      return type_;
    }

    void add_child(const AstNode child) {
      children_.push_back(child);
    }


    std::string pretty(const int level){
      if (children_.size() == 0){ // a leaf
        std::stringstream ss;
        for (int i = 0; i < level; i++){
          ss << std::string(" ");
        }
        ss << data_ << (type_ == EMPTY? "\033[1;36m EMPTY \033[1;31m" : "") << "\n";
        return ss.str();
      } else {
        std::stringstream ss;
        for (int i = 0; i < level; i++){
          ss <<  std::string(" ");
        }
        ss << data_ << ": " << text_location_  << (type_ == LIST? " LIST":"") << "\n";
        for (std::list<AstNode>::iterator it = children_.begin(); it != children_.end(); it++){
          ss << it->pretty(level + 1);
        }
        return ss.str();
      }
    }

    void flatten_tree() {
      std::list<AstNode> new_list;
      left_children(new_list);
      children_.clear();
      children_.splice(children_.end(), new_list);
    }

    void remove_empty(){
      std::stack<AstNode *> stack;
      std::unordered_map<int, bool> visited;
      stack.push(this);
      while (!stack.empty()) {
        AstNode * node = stack.top(); stack.pop();
        if (visited.find(node->id_) == visited.end()) { // if v is not discovered 
          std::pair<int, bool> entry(node->id_, true);
          visited.insert(entry); // label v as discovered
          // remove elements that are empty instead of pushing them onto the stack
          for (auto itr = node->children_.begin(); itr != node->children_.end();){
            if ((*itr).get_type() == EMPTY){
              itr = node->children_.erase(itr);
            } else {
              stack.push(&(*itr)); // schedule the children for a visit
              itr++;
            }
          }
        }
      }
    }

    private:
    void left_children(std::list<AstNode> & input){
      if (children_.size() > 0 && type_ == LIST){
        input.push_back(*(children_.begin())); // push the first guy in
        if (children_.size() > 1){
          for (auto itr = children_.begin(); itr != children_.end(); itr++) {
            itr->left_children(input);
          }
        }
      }
    }


    std::list<AstNode> children_;
    tokenType type_;
    std::string data_;
    location text_location_;
    int id_;
    static int nextID;
  };
}


#endif