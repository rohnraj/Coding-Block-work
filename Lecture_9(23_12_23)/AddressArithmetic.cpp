#include<iostream>
using namespace std;
int main(){

    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<"&a[0]: "<<&a[0]<<endl;//&a[0] '&' explicitly iss liye likha hai bcz
    //a[0] value hai and value ka address hum '&' se access karte hai
    cout<<"&a[1]: "<<&a[1]<<endl;
    cout<<"&a[2]: "<<&a[2]<<endl;
    cout<<"&a[3]: "<<&a[3]<<endl;
    cout<<"&a[4]: "<<&a[4]<<endl;
    //not give the proper minus of address it will
    //give number of boxes b/w them
    cout<<"&a[3]-&a[0]: "<<&a[3]-&a[0]<<endl;//output:- 3
}