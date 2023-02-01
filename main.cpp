#include <iostream>
using namespace std;

int main() {
  int a = 12;
  int b = 20;
  while(a != b){
    if(a > b){
      a = a - b;
    }
    else{
      b = b - a;
    }
  }
  cout << "NWD = " << a;
}