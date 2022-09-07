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
    for(int row=0; row<n; row++){
        if(row%2==0){
             for(int col=0; col<m; col++){
                cout<<a[row][col];
            }
        }
        else{
              for(int col=m-1; col>=0; col--){
                cout<<a[row][col];
            }

        }
    }