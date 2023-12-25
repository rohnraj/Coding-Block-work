#include<iostream>
#include<cstring>
using namespace std;
/*void concat(char *a, char *b){

    int i=strlen(a);
    int lenb=strlen(b);
    for(int j=0;j<=lenb;j++){

        a[i]=b[j];
        i++;
    }
    cout<<a<<endl;
}*/
int main(){

    char a[100]="Hello";//iski size deni padegi bcz
    //a[] main hi toh store karwani hai b[] ko
    char b[]="World";
    //concat(a,b);
    strcat(a,b);//predefined function
    cout<<a;
}
