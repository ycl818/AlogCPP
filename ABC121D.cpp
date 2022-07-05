#include<iostream>
using namespace std;
unsigned long long a, b;
//a(0)=0, a(4n+1)=1, a(4n+2)=4n+3, a(4n+3)=0, a(4n+4)=4n+4,
unsigned long long slove(unsigned long long num) {
  switch (num % 4) {
    case 0:
      return num;
    case 1:
      return 1;
    case 2: 
      return num + 1;
    case 3:
      return 0;
  }
}

int main(){
  cin >> a >> b;
  cout << (slove(a - 1) ^ slove(b)) << endl;
  return 0;
}