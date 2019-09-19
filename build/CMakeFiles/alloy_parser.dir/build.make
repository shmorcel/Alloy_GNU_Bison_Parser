# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sinan/repos/research/alloy_bison_parser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sinan/repos/research/alloy_bison_parser/build

# Include any dependencies generated for this target.
include CMakeFiles/alloy_parser.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/alloy_parser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/alloy_parser.dir/flags.make

mc_parser.tab.cc: ../mc_parser.yy
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sinan/repos/research/alloy_bison_parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[BISON][mc_parser] Building parser with bison 3.4"
	cd /home/sinan/repos/research/alloy_bison_parser && /usr/local/bin/bison -d -o /home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc mc_parser.yy

mc_parser.tab.hh: mc_parser.tab.cc
	@$(CMAKE_COMMAND) -E touch_nocreate mc_parser.tab.hh

mc_lexer.yy.cc: ../mc_lexer.l
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sinan/repos/research/alloy_bison_parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "[FLEX][mc_lexer] Building scanner with flex 2.6.4"
	cd /home/sinan/repos/research/alloy_bison_parser && /usr/bin/flex -o/home/sinan/repos/research/alloy_bison_parser/build/mc_lexer.yy.cc mc_lexer.l

CMakeFiles/alloy_parser.dir/main.cpp.o: CMakeFiles/alloy_parser.dir/flags.make
CMakeFiles/alloy_parser.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinan/repos/research/alloy_bison_parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/alloy_parser.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alloy_parser.dir/main.cpp.o -c /home/sinan/repos/research/alloy_bison_parser/main.cpp

CMakeFiles/alloy_parser.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alloy_parser.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinan/repos/research/alloy_bison_parser/main.cpp > CMakeFiles/alloy_parser.dir/main.cpp.i

CMakeFiles/alloy_parser.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alloy_parser.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinan/repos/research/alloy_bison_parser/main.cpp -o CMakeFiles/alloy_parser.dir/main.cpp.s

CMakeFiles/alloy_parser.dir/mc_driver.cpp.o: CMakeFiles/alloy_parser.dir/flags.make
CMakeFiles/alloy_parser.dir/mc_driver.cpp.o: ../mc_driver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinan/repos/research/alloy_bison_parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/alloy_parser.dir/mc_driver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alloy_parser.dir/mc_driver.cpp.o -c /home/sinan/repos/research/alloy_bison_parser/mc_driver.cpp

CMakeFiles/alloy_parser.dir/mc_driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alloy_parser.dir/mc_driver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinan/repos/research/alloy_bison_parser/mc_driver.cpp > CMakeFiles/alloy_parser.dir/mc_driver.cpp.i

CMakeFiles/alloy_parser.dir/mc_driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alloy_parser.dir/mc_driver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinan/repos/research/alloy_bison_parser/mc_driver.cpp -o CMakeFiles/alloy_parser.dir/mc_driver.cpp.s

CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.o: CMakeFiles/alloy_parser.dir/flags.make
CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.o: mc_lexer.yy.cc
CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.o: mc_parser.tab.hh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinan/repos/research/alloy_bison_parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.o -c /home/sinan/repos/research/alloy_bison_parser/build/mc_lexer.yy.cc

CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinan/repos/research/alloy_bison_parser/build/mc_lexer.yy.cc > CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.i

CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinan/repos/research/alloy_bison_parser/build/mc_lexer.yy.cc -o CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.s

CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.o: CMakeFiles/alloy_parser.dir/flags.make
CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.o: mc_parser.tab.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinan/repos/research/alloy_bison_parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.o -c /home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc

CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc > CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.i

CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinan/repos/research/alloy_bison_parser/build/mc_parser.tab.cc -o CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.s

# Object files for target alloy_parser
alloy_parser_OBJECTS = \
"CMakeFiles/alloy_parser.dir/main.cpp.o" \
"CMakeFiles/alloy_parser.dir/mc_driver.cpp.o" \
"CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.o" \
"CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.o"

# External object files for target alloy_parser
alloy_parser_EXTERNAL_OBJECTS =

alloy_parser: CMakeFiles/alloy_parser.dir/main.cpp.o
alloy_parser: CMakeFiles/alloy_parser.dir/mc_driver.cpp.o
alloy_parser: CMakeFiles/alloy_parser.dir/mc_lexer.yy.cc.o
alloy_parser: CMakeFiles/alloy_parser.dir/mc_parser.tab.cc.o
alloy_parser: CMakeFiles/alloy_parser.dir/build.make
alloy_parser: CMakeFiles/alloy_parser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sinan/repos/research/alloy_bison_parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable alloy_parser"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/alloy_parser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/alloy_parser.dir/build: alloy_parser

.PHONY : CMakeFiles/alloy_parser.dir/build

CMakeFiles/alloy_parser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/alloy_parser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/alloy_parser.dir/clean

CMakeFiles/alloy_parser.dir/depend: mc_parser.tab.cc
CMakeFiles/alloy_parser.dir/depend: mc_parser.tab.hh
CMakeFiles/alloy_parser.dir/depend: mc_lexer.yy.cc
	cd /home/sinan/repos/research/alloy_bison_parser/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sinan/repos/research/alloy_bison_parser /home/sinan/repos/research/alloy_bison_parser /home/sinan/repos/research/alloy_bison_parser/build /home/sinan/repos/research/alloy_bison_parser/build /home/sinan/repos/research/alloy_bison_parser/build/CMakeFiles/alloy_parser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/alloy_parser.dir/depend

