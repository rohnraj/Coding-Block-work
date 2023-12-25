#include<iostream>
using namespace std;
int main(){

    char ch='A';
    char *chp=&ch;
    
    cout<<"Address of ch: "<<&ch<<endl;//Address of character are treated diffrently
    cout<<chp<<endl<<endl;
    cout<<*chp<<endl;
}