// Week 1 inverted pyramid
#include <iostream>
using namespace std;
int main() {
  int num;
  cin>>num;
  for(int row=0;row<num;row++){
    for(int space=0;space<row;space++){
        cout<<" ";
      }
      for (int star =0;star<num-row;star++){
        cout<<"* ";
      }
     
    cout<<endl;
  }
  
}
