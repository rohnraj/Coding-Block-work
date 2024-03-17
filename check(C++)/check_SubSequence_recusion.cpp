#include<iostream>
using namespace std;

void subSequence(char *a, int n, int i, char *pa,int j){

    //Base case
    if(i==n-1) {
    
        pa[j]='\0';
        cout<<"{ "<<pa<<", "<<" }";
        return;
    }

    //Recursive case
    //1. exclude karo 'a' ko ye humara pehla kaam hoga
    subSequence(a,n,i+1,pa,j);

    //2. include karo 'a' ko ye humara pehla kaam hoga
    pa[j]=a[i];
    subSequence(a,n,i+1,pa,j+1);

}
int main(){

    char arr[]="abc";
    char power_arr[100];
    int n=sizeof(arr)/sizeof(char);
    subSequence(arr,n,0,power_arr,0);
}