#include<iostream>
using namespace std;
int factorialOfNum(int num){

    int mul=1;
    for(int i=num-1; i>=1;i--)
        mul=mul*i;
    return num*mul;
}
void calculate(int rfac,int fac,int nrfac){

    cout<<fac/(nrfac*rfac);
}

int main(){

    int num,r;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter value for R: ";
    cin>>r;
    int fac=factorialOfNum(num);
    int rfac=factorialOfNum(r);
    int rnfac=factorialOfNum(num-r);
    calculate(rfac,fac,rnfac);
}