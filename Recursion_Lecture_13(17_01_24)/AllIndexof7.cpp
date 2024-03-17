#include<iostream>
using namespace std;
void allIndex7(int *p,int n,int i){

    //Base case 
    if(i==n) return;

    //recurrsive case 
    if(p[i]==7){

        cout<<i<<" ";
    }
    allIndex7(p,n,i+1);

}

int main(){

    int a[]={2,7,8,3,7,6,7};
    int n=sizeof(a)/sizeof(a[1]);
    allIndex7(a,n,0);
}