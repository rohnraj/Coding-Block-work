#include<iostream>
#include<cstring>
using namespace std;
int strlength(char *arr){

    int count=0;
    while(*(arr)!='\0'){

        count++;
        arr+=1;
    }
    return count;
}
void concat(char *a, char *b){

    int lena=strlength(a);
    int lenb=strlength(b);
    for(int j=0;j<=lenb;j++){

        *(a+lena+j)=*(b+j);
    }
    cout<<a<<endl;
}
int main(){

    char a[100]="Hello";//iski size deni padegi bcz
    //a[] main hi toh store karwani hai b[] ko
    char b[]="World";
    concat(a,b);
    //strcat(a,b);//predefined function
}
