//ANAGRAM

#include<iostream>
using namespace std;
void subseq(char *p,int i, char *q, int j,int n){

    //Base case
    if(i==n-1){

        q[j]='\0';
        cout<<q<<endl;
        return;
    }

    //recurrsive case
    //1. pehle ith character ko ignore kardo
    subseq(p,i+1,q,j,n);

     q[j]=p[i];
    //2. ith character ko include karlo
    subseq(p,i+1,q,j+1,n);


}

int main(){

    char arr[]="abc";
    int n=sizeof(arr)/sizeof(char);
    char out[100];
    subseq(arr,0,out,0,n);
}

