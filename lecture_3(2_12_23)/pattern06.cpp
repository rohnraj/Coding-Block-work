#include<iostream>
using namespace std;
int main(){

    int row, col, row1=0,n;
    cout<<"enter the range: ";
    cin>>n;
    for(row=n;row>=1;row--){

        for(col=n;col>=row;col--){

            cout<<"*";
        }
         for(col=1;col<=2*row-2;col++){

            cout<<" ";
        }
       for(col=n;col>=row;col--){

            cout<<"*";
        }
        cout<<endl;
    }
    for(row=n-1;row>=1;row--){

        for(col=1;col<=row;col++){

            cout<<"*";
        }
        row1+=1;
        for(;row1<=n-1;row1++){

            for(col=1;col<=2*row1;col++){

                cout<<" ";
            }
            break;
        }
        for(col=1;col<=row;col++){

            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}