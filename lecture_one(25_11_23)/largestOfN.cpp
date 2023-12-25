#include<iostream>
using namespace std;
#include<limits.h>//or <climits> -> INT_MIN =-2^-31 and INT_MAX= 2^31-1
int main(){
    
    int n,i=1,num,a=INT_MIN;
    cout<<"how many number you want to check: ";
    cin>>n;
    while(i<=n){

        cout<<"enter number: ";
        cin>>num;
        if(num>a){

            a=num;
        }
        i++;
    }
    cout<<"largest number is: "<<a;
    return 0;
}