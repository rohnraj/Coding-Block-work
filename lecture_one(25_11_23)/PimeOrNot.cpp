//*******All the comment in this shows mistakes which I made previously*******

#include<iostream>
using namespace std;
int main(){

    int num,check=0, i=2;
    cout<<"enter any number: ";
    cin>>num;
    while(i<=num-1){

        if(num%i==0){

            //cout<<"it is not prime number: ";
            check=1;
            break;
        }
        /*else if(num==1){

            cout<<"it is a natural number: ";
            break;
        }
        else{

            cout<<"it is prime number: ";
            break;
        }*/

        i++;
    }
    if (check==1)
        cout<<"Not prime"<<endl;
    else if (check==0)
        cout<<"it is prime"<<endl;
    return 0;
}

