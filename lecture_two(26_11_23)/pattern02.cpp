#include<iostream>
using namespace std;
int main(){

    int row, col, rag, r, c;
    cout<<"enter range of the pattern: ";
    cin>>rag;
    for(row=1; row<=rag; row++){

        //number
        for(col=1; col<=row; col++){

            if ((row+col)%2==0)
            cout<<"1";
            else
            cout<<"0";
        }

        //space
        for(col=1; col<=rag-row; col++)
            cout<<" ";
        cout<<endl;
    }
}