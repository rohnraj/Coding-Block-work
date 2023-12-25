#include<iostream>
using namespace std;
int main(){

    for(int row=1;row<=6;row++){
;
        for(int col=1; col<=row; col++){

            if((col==1 || col==row) && row%2==0)
                cout<<"1";
            else if(row%2!=0)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
}