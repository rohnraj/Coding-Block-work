#include<iostream>
#include<cstring>
using namespace std;

bool isPallindrom(char *a){

    int i=0, j=strlen(a)-1;//length not need to passed in 
    //main fuction address hai wha se khud hi nikal dega 
    //until '/0' found
    while(i<j){

        if(a[i]!=a[j])
            return false;
        else{

            i++;
            j--;
        }
        return true;
    }
}
int main(){

    char a[]="abba";
    int leg=strlen(a);
    cout<<isPallindrom(a);
}