//week1 Patterns Full Pyramid
#include <iostream>
using namespace std;
int main() {
  int num;
  cin>>num;
  for(int row=0;row<num;row++){
    
      for(int space=0;space<num-row-1;space++){
        cout<<" ";
      }
      for (int star =0;star<row+1;star++){
        cout<<"* ";
      }
    cout<<endl;
  }
  
}
