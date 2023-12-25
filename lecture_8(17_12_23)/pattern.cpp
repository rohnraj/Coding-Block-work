#include<iostream>
using namespace std;
int main(){

    int N;
    cin>>N;
    for(int row=(N/2)+1; row>=1; row--){

        //space 
        for(int col=2*row-2;col>=1;col--){

            cout<<" ";
        }
        //number
        for(int col=row;col>=1;col--){

            cout<<col;
        }
        //space 
        for(int col=1;col<=2*row-1;col++){

            cout<<" ";
        }
        //number
        for(int col=1;col<=row;col++){

            cout<<col;
        }
        cout<<endl;
    }
}