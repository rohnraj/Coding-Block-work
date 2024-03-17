
#include<iostream>
using namespace std;

long long int fact(int num){
    //base case 
    if(num==1) return 1;
    
    //recusive case
    return num*fact(num-1);
}
void countzero(long long int n, int count){
    
    if(n==0){ 
        
        cout<<count;
        return;
    }
    if(n%10==0) count++;
    countzero(n/10,count);
}
int main(){

    long long int num;
    cin>>num;
    long long int n=fact(num);
    cout<<n<<endl;
    countzero(n,0);
}