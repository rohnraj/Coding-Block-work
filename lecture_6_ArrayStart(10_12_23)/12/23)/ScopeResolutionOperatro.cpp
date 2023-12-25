#include<iostream>
using namespace std;
int a=-1000;
int main(){

    int a=1;
    ::a+=10000;
    cout<< ::a<<endl;  //-1000

    //**sir ne pta nhi kyo niche wala code kiya hua hai (doubt)**//
    /*if(a>1){

        cout<<a<<endl;
        cout<<"global a: "<<::a<<endl;
        ::a=::a+10000;
        cout<<a;
    }*/
}