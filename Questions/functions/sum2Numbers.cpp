//week 2 lecture 3 functions 
#include<iostream>
using namespace std;

int getSum(int num1,int num2){
  int result=num1+num2;
  return result;
}
int main(){
  int a;
  int b;
  cout<<"enter the value of a ";
  cin>>a;
  cout<<"enter the value of b ";
  cin>>b;
int sum = getSum(a,b);
  cout<<"Sum is " << sum<<endl;
  return 0;
  }
 

