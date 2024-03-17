#include<iostream>
using namespace std;
int poweroftwo(int i){
    
    int r=1;
    for(int j=1;j<=i;j++) r*=2;
    return r;
}
int main(){
    
    int num;
    cin>>num;
    int sum=0;
    int i=0;
    while(num!=0){
        
        int rem=num%2;
        rem=rem^1;
        sum+=rem*poweroftwo(i);
        i++;
        num/=2;
    }
    cout<<sum;
}