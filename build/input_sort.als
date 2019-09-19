// A model that shows how to express a sorting task in Alloy.
// It makes the following assumptions:
// 1. The values cannot be duplicate in the array to be sorted
// 2. Initially the values are stored in an array, a sequence of array-cells
// 3. There is one temporary placeholder in memory to place references to a value
// 4. If nothing points to a value in memory, then this value is lost; in programming parlance, this is true.
// To visualize the sequences, project over State.
module sortSequence 
open util/ordering [Number] as numberOrdering
open util/ordering [ArrayCell] as cellsOrdering
open util/ordering [State] as stateOrdering


abstract sig Index {}
one sig Temp extends Index {}
some sig ArrayCell extends Index {}
some sig Number {}

sig State {
	memory: Index -> lone Number
  }

fact {#Number = #ArrayCell}

pred lessThan (n, n': Number) {lt [n, n']}

pred init (s: State) { // all the arraycells have a distinct number and vice versa
	(ArrayCell <: s.memory) in ArrayCell one -> one Number
	no s.memory[Temp]
	not sorted [s]
}

pred sorted (s: State) {
	(ArrayCell <: s.memory) in ArrayCell  one -> one Number
	let arr = (ArrayCell <: s.memory) { 
		all c: arr.univ - cellsOrdering/last | let c' = next [c] {
			lessThan [c.arr, c'.arr]
		}
	}
}

pred step (s, s': State) {
	one i: Index, n: Number | s'.memory = s.memory ++ i->n
}

pred step_equivalent (s, s': State) {
  one i: Index, n: Number {
    // post condition
    s'.memory [i] = n
    // frame condition
    all i': Index - i |
      s'.memory [i'] = s.memory [i]
  }
}

assert StepIsAsIntended {
  all s, s': State |
    step [s, s'] iff step_equivalent [s, s']
}
check StepIsAsIntended for 10

pred skip(s, s': State) {
	s'.memory = s.memory
}

pred numbersNeverLost(s: State) {
	all n: Number | some s.memory.n
}

// Old Trace:
//fact Traces1 {
//	init [first]
//	all s: State - stateOrdering/last | let s' = stateOrdering/next [s] {
//		(not sorted [s] =>step [s, s'] else skip[s,s']) and numbersNeverLost [s']
//	}
//}

pred eventuallySorted {
	some s: State | let futureAfterS = nexts [s] + s | all f: futureAfterS | sorted [f]
}

assert alwaysSorts { // of course not useful yet...
	eventuallySorted
}

pred showSorted {
	eventuallySorted
}

// simulate some runs
run showSorted for 3 Number, 3 ArrayCell, 10 State
check alwaysSorts for 3 Number, 3 ArrayCell, 10 State

// make sure no more than 1 assignment happens
pred oneStep (s, s': State) {
	lone i: Index | s'.memory[i] != s.memory[i]
}

assert neverMoreThan1Step {
	all s: State - last | let s' = next [s] | oneStep [s, s']
}

check neverMoreThan1Step for 4 Number, 4 ArrayCell, 20 State

// STEP 2: further constraining the system, a swap sequence always happens
// allowed sequence:
// step 1: assign a value to temp
// step 2: assign another value to whomever is pointing to where temp is pointing
// step 3: assign another value to whomever wasn't pointing to where temp is pointing to where temp is pointing
// step 4: repeat from step 1.

pred reassignTemp (s, s': State) {
	some n: Number | s'.memory = s.memory ++ Temp->n
}
pred leaveTempAlone (s, s': State) {
	 some i: s.memory.(s.memory[Temp]) - Temp, n: Number - s.memory[Temp] | s'.memory = s.memory ++ i->n
}
pred joinTemp (s, s': State) {
	some i: ArrayCell - prev[s].memory.(prev[s].memory[Temp]), n: s.memory[Temp] | s'.memory = s.memory ++ i->n
}
pred swap[s, s': State] {
	step [s, s'] // exactly one assignment happens
	// swap sequence:
	#s.memory[Temp] = 0 // temp is pointing to nothing: initial state (careful, always has to be initially true, so that prev[s] is never reached
	=> reassignTemp[s, s']
	else (
		#s.memory.(s.memory[Temp]) = 2 and #prev[s].memory.(prev[s].memory[Temp]) = 1 // some index joined temp, temp needs to move
		=> reassignTemp[s, s']
		else (
			#s.memory.(s.memory[Temp]) = 2 and #prev[s].memory.(prev[s].memory[Temp]) != 1 // now it's time for the index to move not temp
			=> leaveTempAlone[s, s']
			else (
				#s.memory.(s.memory[Temp]) = 1 // temp is now pointing to something alone
				=> joinTemp[s, s']
				)
			)
		)
}

fact Traces2 {
	init [first]
	all s: State - stateOrdering/last | let s' = stateOrdering/next [s] {
		(not sorted [s] =>swap [s, s'] else skip[s,s']) and numbersNeverLost [s']
	}
}

pred show {}
run show for 3 Number, 3 ArrayCell, 10 State

pred looplessPath {
	no disj s, s': State | s.memory = s'.memory
}

// the diameter of the transition system (state machine) is 19 when the number of elements to sort is 3
run looplessPath for  3 Number, 3 ArrayCell, 19 State
run looplessPath for  3 Number, 3 ArrayCell, 20 State

// future work: constraining the system even further so that it always makes
// a useful swap and not a counter productive one, one that unsorts.
