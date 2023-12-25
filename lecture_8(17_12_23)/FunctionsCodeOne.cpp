#include<iostream>
using namespace std;
int sum(int x, int y/*parameter*/){

    int add=x+y;
    return add;
}
void EvenOdd(int x){

    if (x%2==0)
        cout<<"Even"<<endl;
    else 
        cout<<"odd"<<endl;
}
int main(){

    int a=10;
    int b=20;
    int add=sum(a,b/*Arguments*/);
    EvenOdd(add);

    //second time use of same fuction thats how it 
    //increase the reusability of the same code
    add=sum(20,40);
    EvenOdd(add);

    return 0; //means successfull execution of code otherwise koi na koi 
    //negative value return karega main() 
}