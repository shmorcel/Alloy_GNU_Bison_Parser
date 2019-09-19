sig Name {}
abstract sig Path {}
sig NonEmptyPath extends Path { first: Name, rest: Path }


abstract sig INode {}
sig DirNode extends INode { files: Name -> INode }
one sig RootNode extends DirNode {}

sig FileNode extends INode { data: dynamic Data }
sig Data {}

one sig MVar { path: dynamic Path,
  current: dynamic INode, mdata: dynamic Data }

action navigate {
MVar.path := MVar.path.rest;
MVar.current := (MVar.path.first).(MVar.current.files )}

action read {
loop {
navigate []
} && after MVar.current in FileNode; 
MVar.mdata := MVar.current.data }


action write {
loop {
navigate []
} && after MVar.current in FileNode;
let file = MVar.current | file.data := MVar.mdata }

one sig Temp {tdata:dynamic Data}

assert readMatchesPriorWrite {
always |
before (MVar.current = RootNode &&
no f: FileNode | f .data = MVar.mdata) &&
write [];
Temp.tdata := MVar.mdata;
read [] =>
after Temp.tdata = MVar.mdata }
