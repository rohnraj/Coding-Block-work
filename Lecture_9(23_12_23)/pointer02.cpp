#include<iostream>
using namespace std;
int main(){

    int x=10;
    int *y=&x;
    cout<<"X+1: "<<x+1<<endl;//11
    cout<<"&x+1: "<<&x+1<<endl;//104
    cout<<"y+1: "<<y+1<<endl;//104
    cout<<"*y+1: "<<*y+1<<endl;//11
    cout<<"*(&y): "<<*(&y);//100
}