
//week 2 lecture 3 funciton of sum of even number upto n
#include<iostream>
using namespace std;
int printEvenSum(int num){
  int evenSum=0;
  for(int i=2;i<num;i+=2){
    evenSum=evenSum+i;
  }
  return evenSum;
}
int main(){
  int num;
  cout<<"enter the num ";
  cin>>num;
 int sum=printEvenSum(num);
  cout<<"The sum of even numbers upto "<<num<<" is "<<sum<<endl;
  return 0;

  }
 

