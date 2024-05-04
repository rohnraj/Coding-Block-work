#include<iostream>
#include<climits>
#define mk(arr,n,v) int *arr = new int[n + 1]; for (int i = 0; i <= n; ++i){arr[i] = v;}
using namespace std;
int mincoin(int *dp,int *demo, int n, int amt){
    
    //base case
    if(amt==0){
        dp[amt]=0;
        return 0;
    }
    
    //recursive case
    int ans=INT_MAX;
    if(dp[amt]!=-1) return dp[amt];
    for(int i=0;i<n;i++){
        if(amt>=dp[i]){
            int minAmt=amt-demo[i];
            int x=mincoin(dp,demo,n,minAmt);
            ans=min(ans,x+1);
        }
    }
    return ans;
    // p=mincoin(dp,amt-1);
    // if(amt>=7)q=mincoin(dp,amt-7);
    // if(amt>=10)r=mincoin(dp,amt-10);
    
    //return min(p,min(q,r))+1;
}
int main(){
    
    int amt;
    cin>>amt;
    int demo[]={1,7,10};
    int n=sizeof(demo)/sizeof(int);
    mk(dp,amt,-1);
    cout<<mincoin(dp,demo,n,amt);
}