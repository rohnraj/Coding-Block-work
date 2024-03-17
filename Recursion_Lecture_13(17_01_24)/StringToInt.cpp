#include<iostream>
#include<cstring>
using namespace std;
int sum=0;
int stringtoint(char *p,int n,int i){

    //base case
    if(i==n) return 0;

    //recurrsive case
    int digit=*(p+i)-'0';
    stringtoint(p,n,i+1);
    return sum=sum*10+digit;//doubt here
}
int main(){

    char arr[]="1234";
    int len=strlen(arr);
    cout<<stringtoint(arr,len,0);
}