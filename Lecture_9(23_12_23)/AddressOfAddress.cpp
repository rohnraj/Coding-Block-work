#include<iostream>
using namespace std;
int main(){

    int a=10;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of &a: "<<&(&a)<<endl;
}