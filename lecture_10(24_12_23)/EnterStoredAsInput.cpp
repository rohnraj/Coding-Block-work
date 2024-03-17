#include<iostream>
using namespace std;

int main(){

    
    int a;
    string str;
    cin>>a;
    cin.get();//it work same as getch or getchar where
    //'/n' is stored here which is empty character
    getline(cin, str);
   cout<<a<<" "; 
}