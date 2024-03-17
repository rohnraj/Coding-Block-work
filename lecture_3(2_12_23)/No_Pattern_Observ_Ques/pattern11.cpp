
/*

    *
   ***
  * * *
 *  *  *
*********
 *  *  *
  * * *
   ***
    *
*/  

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int row=1;row<=n;row++){

        //space
        for(int col=1;col<=n-row;col++) cout<<" ";
        if(row==1 || row==n){
            for(int col=1;col<=2*row-1;col++) cout<<"*";
        }
        else{
            cout<<"*";
            for(int col=1;col<=row-2;col++) cout<<" ";
            cout<<"*";
            for(int col=1;col<=row-2;col++) cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int row=n-1;row>=1;row--){

        for(int col=n-row;col>=1;col--) cout<<" ";
        if(row==1) cout<<"*";
        else{
            cout<<"*";
            for(int col=row-2;col>=1;col--) cout<<" ";
            cout<<"*";
            for(int col=row-2;col>=1;col--) cout<<" ";
            cout<<"*";
        }
        cout<<endl;

    }

}
    