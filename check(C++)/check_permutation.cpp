#include<iostream>
using namespace std;
void permutation(char *a, int i,int j,int n){

    //base case
    if(a[i]=='\0'){

        swap(a[i],a[j]);
        cout<<a<<endl;
        return;
    }

    //recursive case
    for(int i=0;a[i]!='\0';i++){

        permutation(a,i+1,(j+i)%n,n);
    }

}

int main(){

    char arr[]="abc";
    int n=sizeof(arr)/sizeof(char);
    permutation(arr,0,0,n);
}