#include<iostream>
using namespace std;
int main(){

    int rag;
    cout<<"Enter the range: ";
    cin>>rag;
    for (int row =1; row<=rag; row++){

        for (int col=1; col<=rag; col++){

            if (row==1 || row==rag || col==1 || col==rag){

                cout<<"4";
            }
            cout<<endl;
        }
    }
    return 0;
}