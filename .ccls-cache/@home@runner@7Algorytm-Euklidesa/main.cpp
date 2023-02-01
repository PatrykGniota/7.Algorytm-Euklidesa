#include <bits/stdc++.h>
using namespace std;

int NWD(int x,int y){
  while(x){
    x = x % y;
    y = y - x;
  }
  return y;
}

int main() {
  int a = 12;
  int b = 20;
  
  cout << "NWD = " << NWD(a,b);
}