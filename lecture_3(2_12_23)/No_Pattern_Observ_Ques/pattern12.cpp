/*

*******
**   **
* * * *
*  *  *
* * * *
**   **
*******

*/ 



#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int row=1;row<=n;row++){

        for(int col=1;col<=n;col++){

            if(row==1 || col==1 || row==n || col==n || row==col || row+col==n+1) cout<<"*";
            else cout<<" ";

        }
        cout<<endl;
    }
}