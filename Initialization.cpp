#include<iostream>
using namespace std;
int main(){
    /*Initialization of array
    int a[ ][4]={
        {1,5,6,8},
        {2,5,3,4},
        {8,9,7,1}
    };
   for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
        cout<<a[i][j];
        }
    cout<<endl;
   }
   */
   
   //taking input from user
   int row,col;
   cout<<"Enter the size of row:"<<endl;
   cin >> row;
   cout<<"Enter the size of col:"<<endl;
   cin >> col;
   int a[row][col];

   cout<<"Enter the value:"<<endl;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>a[i][j];

        }
        cout<<endl;

    }
    cout<<"The output is:"<<endl;
     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
        cout<<a[i][j];

        }
        cout<<endl;
    }

   return 0;



}
