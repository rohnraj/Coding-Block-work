#include<iostream>
using namespace std;
void sum(int, int);//forward declaration
int main(){

    int a=12;
    int b=23;
    sum(a,b);
}
void sum(int x, int y){

    cout<<x+y;
}