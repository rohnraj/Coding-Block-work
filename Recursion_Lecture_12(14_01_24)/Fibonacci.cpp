#include<iostream>
using namespace std;

int fiboOfN(int n){

    //Base Problem
    if(n==0 || n==1) return n;

    //recurrence relation
    //fabioOfN(n)=fiboOfN(n-1) + fiboOfN(n-2)
    int chatoAns1=fiboOfN(n-1);
    int chatoAns2=fiboOfN(n-2);
    int badAns=chatoAns1+chatoAns2;

    return badAns;
}
int main(){

    cout<<fiboOfN(10);
}