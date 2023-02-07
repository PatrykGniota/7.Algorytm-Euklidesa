#include <bits/stdc++.h>
#include <numeric>
using namespace std;

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

int main() {
  int a = 12;
  int b = 20;
  cout << __gcd(a,b);
  
  cout << "NWW = " << nww(a,b);
}