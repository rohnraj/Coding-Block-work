/*#include<iostream>
using namespace std;
void inputstring (char *a){

    char ch;
    int i=0;
    ch=cin.get();
    while(ch!='\n'){

        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
}
int main(){

    char a[100];
   inputstring(a);
   cout<<a<<" "; 
}*/


#include<iostream>
using namespace std;
void inputstring (char *a, int n){

    char ch;
    int i=0;
    ch=cin.get();//bcz ye ek ek character count karta hai that's
    //why hum ch[] array nhi bante
    while(ch!='\n'/* \n:- enter aate hi stop*/ && i<n-1){

        a[i]=ch;
        i++;
        ch=cin.get();//pointer ek aage bdh jata hai inputBuffer ke address
        //ko read karne ke liye
    }
    a[i]='\0';//end main null so that jab print karte time kahi toh 
    //stop ho wrna read karta hi rahega
}
int main(){

    char a[100];
    cin>>n;
   inputstring(a,n);
   cout<<a<<" "; 
}