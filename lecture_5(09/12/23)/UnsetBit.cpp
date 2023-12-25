//kisi number mai kitne zeros hai in its binary
#include<iostream>
using namespace std;
int main(){

    int count=0, num;
    cout<<"Enter any number: ";
    cin>>num;
    while (num>0){

        if((num|0)==0){

            count++;
        }

        num=num>>1;
    }

    cout<<count;
}

