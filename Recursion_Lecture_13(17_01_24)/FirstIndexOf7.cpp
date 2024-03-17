#include<iostream>
using namespace std;
int firstIndex7(int *p, int n,int i){

    //Base case
    if(i==n || i==n-1) return -1; 

    //recurrsive case
    if(p[i]==7) return i;

    firstIndex7(p,n,i+1);


}

int main(){

    int a[]={2,8,3,7,6,7};
    int n=sizeof(a)/sizeof(a[1]);
    cout<<"Index of first 7 is: "<<firstIndex7(a,n,0);
}