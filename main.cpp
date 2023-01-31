#include <iostream>
using namespace std;

int main() {
  int a = 12;
  int b = 20;
  for(int NWD = min(a,b); NWD >= 1; NWD--){
    if(a % NWD == 0 && b % NWD == 0){
      cout << "NWD = " << NWD << endl;
      break;
    }
  }
}