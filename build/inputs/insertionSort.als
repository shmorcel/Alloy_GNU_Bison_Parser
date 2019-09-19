sig Sequence { elts : dynamic seq Natural }
pred sorted[elts : seq Natural] {
  all i : elts .inds - elts . lastIdx | let i' = i + 1 | i . elts <= i'.elts 
}

action declarativeSort [ s : Sequence] {
some s': Sequence |
before (sorted[s'. elts ] && s.elts = s'. elts ) &&
s . elts := s'. elts }


one sig Cnt { cur: dynamic Int }
pred minIdx [s: seq Natural, c, i : Int ] {
i >= c && no i': s.inds | i' >= c && i'.s < i.s }

action insertionStep [ s : Sequence] {
some i: s. elts . inds |
(before minIdx[s.elts, Cnt.cur, i ]) &&
Cnt.cur, s . elts := Cnt.cur + 1,
 s. elts ++((Cnt.cur)->i.(s.elts)) ++(i->Cnt.cur.(s.elts)) }

action insertionSort [ s : Sequence] {
Cnt.cur := 0;
loop {
insertionStep [ s ]
} && after Cnt.cur = s.elts.lastIdx }


assert sortWorks {
all s : Sequence |
always | insertionSort [ s ] => after sorted[s. elts ] }
