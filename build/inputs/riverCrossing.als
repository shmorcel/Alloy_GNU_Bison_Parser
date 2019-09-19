
abstract sig Object { eats : disj set Object,
  location : dynamic Location }
one sig Farmer, Fox, Chicken, Grain extends Object {}
abstract sig Location {}
one sig Near, Far extends Location {}

fact eating { eats = (Fox -> Chicken) + (Chicken -> Grain) }

action cross {
  some o: Object - Farmer, fl: Location - Farmer.location, ol: Location |
    (Farmer.location, o.location := fl, ol) and
      after (all o: Object |
              o.location = Farmer.location ||
            (all o': (Object - o) |
              o'.location = o.location => o ! in o'.eats))
  }

pred solvePuzzle {
  sometimes |
    before (all o: Object | o.location = Near) &&
    loop {
      cross[]
    } && after (all o: Object | o.location = Far)
}
