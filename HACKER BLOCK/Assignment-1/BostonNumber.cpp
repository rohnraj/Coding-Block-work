#include <iostream>
#include <cmath>
using namespace std;
int sum(long int n){
    
    int a=0;
	int rem;
	while(n>0){
    	rem=n%10;
    	a+=rem;
    	n/=10;
	}
    return a;
}
bool isItprime(long int n){
    
	int check;
    for(int i=2;i<n;i++){
        
        check=0;
        if(n%i==0){
           check++;
           break;
        }
    }
    if(check==1){
        
       
        return 0;
    }
 
    return 1;
}
int main() {
    
	long int N;
	cin>>N;
    int primedivsum=0,k;
    int add=sum(N);
	int add1=sum(add);
    bool prime=isItprime(N);
    if(prime==0){
        
        while(N>1){
            
            int r=sqrt(N);
            if(N%2==0){
                N/=2;
                primedivsum+=2;
            }
            else if(N%3==0){
                N/=3;
                primedivsum+=3;
            } 
            else if(N%5==0){
                N/=5;
                primedivsum+=5;
            } 
            else if(N%7==0){
                N/=7;
                primedivsum+=7;
            } 
            else if(N%r==0){
                N/=r;
                int s=sum(r);
                primedivsum+=s;
            } 
            else{
                primedivsum+=N;
                N/=N;
            }
        }
        k=sum(primedivsum);
    }
	else
		cout<<"0";

    if(add1==k){
        
        cout<<"1";
    }
	else
		cout<<"0";
    
    return 0;
}