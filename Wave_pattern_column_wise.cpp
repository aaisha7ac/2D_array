#include<iostream>
using namespace std;
int main(){
    int a[ ][4]={
        {1,5,6,8},
        {2,5,3,4},
        {8,9,7,1}
    };
    int m=4;
    int n=3;
    for(int col=0; col<m; col++){
        if(col%2==0){
             for(int row=0; row<n; row++){
                cout<<a[row][col];
            }
        }
        else{
              for(int row=n-1; row>=0; row--){
                cout<<a[row][col];
            }

        }
    }
 
   return 0;
}
   