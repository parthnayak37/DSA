//week 3 lecture 1 take array as input and print doubles
#include<iostream>
using namespace std;
int main(){
  int arr[10];
  for(int i=0;i<10;i++){
    cin>>arr[i];
  }
  for (int i=0;i<10;i++){
    cout<<arr[i]*2<<" ";
  }
  return 0;
}
