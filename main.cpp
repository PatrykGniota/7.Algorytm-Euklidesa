#include <iostream>
using namespace std;
int NWD(int x,int y){
  while(x != y){
    if(x > y){
      x = x - y;
    }
    else{
      y = y - x;
    }
  }
  return x;
}

int main() {
  int a = 12;
  int b = 20;
  cout << "NWD = " << NWD(a,b);
}