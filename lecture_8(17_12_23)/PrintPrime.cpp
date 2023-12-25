#include<iostream>
using namespace std;
bool PrimeOrNot(int num)
{
    int check;
    if (num<2)
        return false;

    for(int i=2;i<num;i++){

        check=1;
        if(num%i==0){

            check=0;
        }
            
    }
    if(check==0)
        return false;

    return true;
}
int main(){

    int num, N;
    cin>>N;
    for(int i=1;i<=N;i++){
        bool check=PrimeOrNot(i);

        if (check==true)
            cout<<i<<" ";
    }
    
}