#include<iostream>
using namespace std;
int main(){

    int row,col, range;
    cout<<"enter range: ";
    cin>>range;
    for(row=range;row>=1;row--){

        for(col=1;col<=row;col++){

            cout<<"*";
        }
        for(col=1;col<=2*range-2*row;col++){

            cout<<" ";
        }
        for(col=1;col<=row;col++){

            cout<<"*";
        }
        cout<<endl;
    }
    for(row=1;row<=range;row++){

        for(col=1;col<=row;col++){

            cout<<"*";
        }
        for(col=1;col<=2*range-2*row;col++){

            cout<<" ";
        }
        for(col=1;col<=row;col++){

            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}