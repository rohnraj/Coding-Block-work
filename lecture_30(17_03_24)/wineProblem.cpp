#include<iostream>
using namespace std;
int wine(int *prices, int l, int day,int r){
    
    //base case
    if(r<l) return 0;.//=means end ka ek place bchana hai
    //not equal to means uss ek pr bhi operation karna hai
    //recursive case
    int left=prices[l]*day+wine(prices,l+1,day+1,r);
    int right=prices[r]*day+wine(prices,l,day+1,r-1);
    
    return max(left,right);
    
}
int main(){
    
    int prices[]={2,3,5,1,4};
    int n=sizeof(prices)/sizeof(int);
    cout<<wine(prices,0,1,n-1);
}