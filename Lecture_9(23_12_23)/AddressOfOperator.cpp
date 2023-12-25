#include<iostream>
using namespace std;
int main(){

    int a; //
    int arr[]={1,2,3,4};
    char ch='A';
    char *chp=&ch;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of arr: "<<arr<<endl;
    cout<<"Address of arr[0]: "<<&arr<<endl;//sir will tell later what is the difference b/w 
    //arr and &arr
    cout<<"Address of ch: "<<&ch<<endl;//Address of character are treated diffrently
    cout<<chp<<endl<<endl;
    cout<<*chp<<endl;
}