#include <bits/stdc++.h>
using namespace std;

int NWD(int x,int y){
  while(x != 0 && y != 0){
    if(x > y){
      x = x % y;
    }
    else{
      y = y % x;
    }
  }
  if(x != 0){
    return x;
  }
  else{
    return y;
  }
}

int main() {
  int a = 12;
  int b = 20;
  
  cout << "NWD = " << NWD(a,b);
}