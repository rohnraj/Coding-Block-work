// #include<iostream>
// using namespace std;
// int sum(int x, int y, int z=0/* z wala default hai*/){

//     return x+y+z;
// }

// int main(){

//     int a=10, b=20, c=30;
//     cout<<"sum1: "<<sum(a,b,c)<<endl;
//     cout<<"Sum2: "<<sum(a,b);
// }

#include<iostream>
using namespace std;
void inputstring (char *a, int n, char x='\n'){

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

    int n;
    char a[100];
    cin>>n;
   inputstring(a,n);
   //cin.getLine(a,n); is main upper function bnane ki zaroorat nhi
   //hoti predefined hai
   cout<<a<<" "; 
}
