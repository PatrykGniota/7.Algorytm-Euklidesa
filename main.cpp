#include "ulamki.hpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  kalkulator a;
  a.u1.numerator = 2;
  a.u1.nominative = 4;
  a.u2.numerator = 1;
  a.u2.nominative = 2;

  a.add().print();
  a.substr().print();
  a.multi().print();
  a.div().print();

  return 0;
}