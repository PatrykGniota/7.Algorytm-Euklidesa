struct fraction {
  int numerator;
  int nominative;

void print(){
  std::cout << numerator << "/" << nominative << std::endl;
}
};

int nwd(int x,int y) {
  while (x) {
    x = x % y;
    y = y - x;
  }
  return y;
}

int nww(int x, int y) {
  return x * y / nwd(x, y); 
}

struct kalkulator{
  fraction u1;
  fraction u2;

fraction add(){
  fraction u3;
  int a = u1.nominative;
  int b = u2.nominative;
  u1.numerator *= b;
  u1.nominative *= b;
  u2.numerator *= a;
  u2.nominative *= a;

  u3.numerator = u1.numerator + u2.numerator;
  u3.nominative = u1.nominative;

  while(nwd(u3.numerator,u3.nominative) != 1){
  int c = nwd(u3.numerator,u3.nominative);
  u3.numerator = u3.numerator / c;
  u3.nominative = u3.nominative / c;
  }
  
  return u3;
}
fraction substr(){
  fraction u3;
  int a = u1.nominative;
  int b = u2.nominative;
  u1.numerator *= b;
  u1.nominative *= b;
  u2.numerator *= a;
  u2.nominative *= a;

  if(u1.numerator > u2.numerator){
    u3.numerator = u1.numerator - u2.numerator;
  }
  else{
    u3.numerator = u2.numerator - u1.numerator;
  }
  u3.nominative = u2.nominative;
 while(nwd(u3.numerator,u3.nominative) != 1 ){
  int c = nwd(u3.numerator,u3.nominative);
  u3.numerator = u3.numerator / c;
  u3.nominative = u3.nominative / c;    
  }

  return u3;
}
fraction multi(){
  fraction u3;

  u3.numerator = u1.numerator * u2.numerator;
  u3.nominative = u1.nominative * u2.nominative;

  while(nwd(u3.numerator,u3.nominative) != 1){
  int c = nwd(u3.numerator,u3.nominative);
  u3.numerator = u3.numerator / c;
  u3.nominative = u3.nominative / c;    
  }

  return u3;
}
fraction div(){
  fraction u3;

  u3.numerator = u1.numerator * u2.nominative;
  u3.nominative = u1.nominative * u2.numerator;

  while(nwd(u3.numerator,u3.nominative) != 1){
  int c = nwd(u3.numerator,u3.nominative);
  u3.numerator = u3.numerator / c;
  u3.nominative = u3.nominative / c;    
  }

  return u3;
}
};