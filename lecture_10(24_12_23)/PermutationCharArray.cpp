#include<iostream>
using namespace std;
int numberofchar(char *x){

    int check=0;
    int i=0;
    while(x[i]!='\0'){

        check++;
        i++;
    }
    return check;
}
bool checksamechar(char *a, char *b, int m){

    for(int i=0;i<m;i++){

        for(int j=0;j<m;j++)

            if(a[i]==b[j])
                continue;
            else
                return false;
    }

    return true;
}
int main(){

    char a[]="abcd";
    char b[]="dcba";
    int count=numberofchar(a);
    int count1=numberofchar(b);
    if(count==count1){
        bool b=checksamechar(a,b,count);
    }
    else 
        return false;
    cout<<"permutation or not: "<<b;
    return 0;
}