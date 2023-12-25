//kisi number mai kitne ones hai in its binary
#include<iostream>
using namespace std;
int main(){

    int count=0, num;
    cout<<"Enter any number: ";
    cin>>num;
    while (num>0){

        if((num & 1)==1){

            count++;
        }

        num=num>>1;
    }

    cout<<count;
}