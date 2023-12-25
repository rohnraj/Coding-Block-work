//give inpute mai konsa number unique hai
#include<iostream>
using namespace std;
int main(){

    int num, n;
    cout<<"How many number you gonna inpute: ";
    cin>>n;
    cout<<"enter numbers: ";
    cin>>num;
    int check=num;
    for(int i=1; i<n; i++){

        cin>>num;
        check^=num;
    }

    cout<<"unique number is: "<<check;
}