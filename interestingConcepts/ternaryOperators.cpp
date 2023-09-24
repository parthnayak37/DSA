//ternary operators can be used to replace certain if-else
//if cond is true then expression 1 gets executed if false then expression 2
// can also be nested-  cond ? exp1:((cond2)? exp2:exp3);   (like if a number is 0 +ve or -ve)
#include <iostream>
using namespace std;
int main() {
  int a=3;
  int b=4;
  string result= (a=b)?"yay":"No";
  cout<<result  ;
}
