#include<iostream>
using namespace std;

int powerOfn(int b, int n){

    //base case
    if(n==0) return 1;

    //recurrsive case 
    return b*powerOfn(b,n-1);

}
int main(){

    int base=3, n=3;
    cout<<powerOfn(base, n);
}