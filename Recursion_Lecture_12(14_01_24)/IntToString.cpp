#include<iostream>
using namespace std;
char num[][10]={"Zero","One","Two","Three","Four","Five",
    "Six","Seven","Eight","Nine","Ten"};

void intToString(int n){

    //Base case
    if(n==0) return;
    
    //2048
    //recurrsive case
    int rem=n%10;
    cout<<num[rem]<<" ";
    intToString(n/10);
}

int main(){

    int n;
    cin>>n;
    intToString(n);
}