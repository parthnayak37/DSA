#include <iostream>
using namespace std;
int main() {
  int num;
  cin>>num;
  int flag=0;
  int i=2;
  for(;i<num;i++){
    
    if(num%i==0) {
      flag=1;
    cout<<num<<" is not prime!";
    }
    break;
    
    
  }
if (flag==0)cout<<num<<" is Prime!";
  
}
