
/* 
Fancy Pattern#2
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1
*/


#include<iostream>
using namespace std;
int main(){
  int num;
  cin>>num;
for(int row=0;row<num;row++){
  for(int col=0;col<row+1;col++){
    cout<<row+1;
    if(col!=row)
      cout<<"*";
    
   
  }
  cout<<endl;
}
//bottom part
for(int row=0;row<num;row++){
  for(int col=0;col<num-row;col++){
    cout<<num-row;
    if(col!=num-row-1)
      cout<<"*";
    
   
  }
  cout<<endl;
}
}

