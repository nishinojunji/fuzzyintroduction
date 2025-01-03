/* sample of fuzzy reasoning */
/* Junji Nishino */

int main(){
  FuzzyRule fr; // the rule set (n inputs, 1 output)
  InputVec x;  // a real number vector(x1, x2, .. xn)
  FuzzyConsequence fc; // a result in fuzzy set
  double y;  // a real number

  fr = fuzzyrule_load("rulefile.fr"); // set up the rules
  x = input_data();  // input
  fc = fuzzyReasoning(fr, x); // reasoning : data->fuzzy set 
  y = fuzzyrule_defuzzyfication(fc); // de-fuzzyfi fc into y

  printf("output is %ld\n", y);
}
