#include<iostream>
using namespace std;
bool PrimeOrNot(int num)
{

    if (num<2)
        return false;

    for(int i=2;i<num;i++){

        if(num%2==0)
            return false;
    }

    return true;
}
int main(){

    int num;
    cin>>num;
    bool check=PrimeOrNot(num);
    cout<<"number is prime: "<<check;
}