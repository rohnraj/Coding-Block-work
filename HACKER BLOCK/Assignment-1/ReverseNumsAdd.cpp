/*Let's say we have two numbers, 24 and 63. First, 
we reverse them: 42 and 36. Then, we add them: 42 + 36 = 78. 
Reversing 78 gives 87, and that's the reversed sum without 
any leading zeros.*/
#include<iostream>
using namespace std;

int count(int num1){

    int check=0;
    while(num1>0){

        num1/=10;
        check++;
    }
    
    return check;
}
int reverse(int n, int c){

    int rem=0,sum=0;
    for(int i=1;i<=c;i++){

        rem=n%10;
        sum=sum*10+rem;
        n/=10;
    }

    return sum;
}
int main(){

    int num1, num2;
    cout<<"enter num1: ";
    cin>>num1;
    int c=count(num1);
    int n=reverse(num1,c);
    cout<<"enter num2: ";
    cin>>num2;
    int cc=count(num1);
    int m=reverse(num2,cc);
    int sum=n+m;
    cout<<"sum of reverse number: "<<sum<<endl;
    int ccc=count(sum);
    int s=reverse(sum,ccc);
    cout<<"sum of reverse of reverse: "<<s;
}