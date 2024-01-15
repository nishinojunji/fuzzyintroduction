/* sample of fuzzy reasoning */
/* Junji Nishino */

int main(){
  FuzzyRule fr;
  InputVec x;
  FuzzyConsequence fc;
  double output;

  fr = fuzzyrule_new();
  fuzzyrule_load("rulefile.fr");

  x = input_data();

  fc = fuzzyReasoning(fr, x);
  output = fuzzyrule_defuzzyfication(fc);

  printf("%f\n", output);
}
