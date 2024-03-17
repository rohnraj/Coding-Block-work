/* 

_ _ _ _* * * * *
_ _ _ *       *
_ _ *       *
_ *       *
* * * * *
*/

#include<iostream>
using namespace std;
int main(){

    int row;
    cin>>row;
    for(int i=row;i>=1;i--){

        //spaces
        for(int j=1;j<=i-1;j++){

            cout<<" ";
        }
        //star
        for(int j=1;j<=row;j++){

            if(i==1 || i==row) cout<<"*";
            else{
                cout<<"*";
                for(int j=1;j<=row-2;j++) cout<<" ";
                cout<<"*";
                break;
            }
        }
        cout<<endl;
    }
}