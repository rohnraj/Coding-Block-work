#include<iostream>
using namespace std;
int main(){

    int a=2;
    //True hai toh ye chalega 1st wala      //false main 2nd wala chalega
    a%2==0?cout<<"Even\n" : cout<<"Odd\n";

    bool x=(a%2==0?true:false);

    if(x==true)
        cout<<"Even";
    else if(x==false)
        cout<<"False";
}