//https://www.naukri.com/code360/problems/ninja-and-the-star-pattern-i_6581920?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void getStarPattern(int n) {
    // Write your code here.
    for(int row=0;row<n;row++){
        if(row==0||row==n-1){
            for(int col=0;col<n;col++){
                cout<<"*";
            }
        }
        else{
            for (int col = 0; col < n; col++) {
                string star =
                    (col == 0 || col == n - 1) ? "*" : " ";
                cout << star;
            }
        }
        cout << endl;
    }
}
