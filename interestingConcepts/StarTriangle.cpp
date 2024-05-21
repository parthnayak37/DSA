// used a if conditions rather creating two separate triangles

void nStarTriangle(int n) {
    // Write your code here.
    for(int row=0;row<2*(n)-1;row++){
        int star=row;
        if(row>n-1){
            star=2*n-row-2;
        }

        for(int col=0;col<star+1;col++){
            cout<<"*";
        }
         cout<<endl;
    }
    
       
    
}


/* input n= 3 desired output


*
**
***
**
*


*/
