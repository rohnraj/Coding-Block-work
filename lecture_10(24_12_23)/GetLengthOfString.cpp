#include<iostream>
#include<cstring>//header file to use strlen
using namespace std;
int getlength(char *a){

    int check=0,i=0;
    while(a[i]!='\0'){

        check++;
        i++;
    }
    return check;

}
int main(){

    char a[]="hello world";
    cout<<"Array: "<<a<<endl;
    cout<<getlength(a)<<endl;
    cout<<strlen(a)<<endl; //strlen predefine function

}