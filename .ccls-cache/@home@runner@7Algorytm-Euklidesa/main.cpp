#include <bits/stdc++.h>
using namespace std;

struct fraction{
  int numerator;
  int nominative;
};

int nwd(int x,int y){
  while(x){
    x = x % y;
    y = y - x;
  }
  return y;
}
int nww(int x,int y){
  return x * y / nwd(x,y);
}

int main(){
  fraction ulamek1;
  ulamek1.numerator = 2;
  ulamek1.nominative = 4;

  fraction ulamek2;
  ulamek2.numerator = 5;
  ulamek2.nominative = 7;

  int licznik;
  int mianownik;
  
  licznik = ulamek1.numerator * ulamek2.numerator;
  mianownik = ulamek1.nominative * ulamek2.nominative;
  int c = nwd(licznik,mianownik);
  while(nwd(licznik,mianownik) != 1){
    licznik = licznik / c;
    mianownik = mianownik / c;    
  }
  cout << licznik << "/" << mianownik;
}