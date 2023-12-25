#include<iostream>
#include<climits>
using namespace std;
int main(){

    int rem, num, n=0;
    cout<<"enter any number to it reverse: ";
    cin>>num;
    while(num!=0){

        if(n<INT_MAX/10 && n>INT_MIN/10){
            rem=num%10;
            num/=10;
            n=n*10+rem;
        }
        else{

            cout<< "overflow hogya";
            break;
        }
    }
    cout<< "reverse number is: "<<n<<endl;


}