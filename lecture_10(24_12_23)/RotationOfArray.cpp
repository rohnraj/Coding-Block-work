#include<iostream>
using namespace std;
void rotationString(char *a, int n){

    int lena=strlen(a);
    n%=lena;
    int i=lena-1;
    while(i>=0){

        a[i+n]=a[i];
        i--;
    }
    i=0;
    int j=lena;
    while(i<n){

        a[i]=a[j];
        i++;
        j++;
    }
    a[lena]='\0'
}
int main(){

    char a[100]="coding";
    int n=40;
    rotationString(a,5000);
    cout<<a<<endl;
}