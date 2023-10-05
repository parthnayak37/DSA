//decimalToBinary conversion
#include <iostream>
#include <cmath>
using namespace std;
//method1 division method
// int decimalToBinaryMethod1(int decimal){
// int i=0;
// int ans=0;
// while(decimal>0){
//   int bit=decimal%2;
//   ans=(bit*pow(10,i++))+ans;
//   decimal=decimal/2;
// } 
//   return ans;
// }
//method2 bitwise & operator
int decimalToBinaryMethod2(int decimal){
  int i=0;
  int ans=0;
  while(decimal>0){
    int bit=(decimal&1);
    ans=(bit*pow(10,i++))+ans;
    decimal=decimal>>1;
  }
  return ans;
}
int main() {
int decimal;
cin>>decimal;
cout<< decimalToBinaryMethod2(decimal)<<endl;
}
