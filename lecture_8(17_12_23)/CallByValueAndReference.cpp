#include<iostream>
using namespace std;
int updateValue(int &x/* &x=a */){

    x=x+1;
    cout<<x;
}
int main(){

    int a=1;
    cout<<a;
    updateValue(a);
}