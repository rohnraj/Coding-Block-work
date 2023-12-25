#include<iostream>
using namespace std;
void updateArray(int p[] /* (*p) */,m){

    //it means p[] is nothing but pointer but not fixed like a
    // size of p will be 4bytes bcz of address passed if int type eg 100
    //** size of pointer variable is 8bytes **
    for(int i=0;i<m;i++){

        cout<<p[i] /*  *(p + i)  */<<endl;
    }
}
int main(){

    int a[]={1,2,3,4,5};
    //size of a will be 4bytes*5(no. of boxes)=20bytes
    updateArray(a,n);
}