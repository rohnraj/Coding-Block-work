#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
int knapSack(int *price,int *wt, int capacity, int n, int dp[][100]){

    //base case
    if(n==0 || capacity==0){

       return dp[n][capacity]=0;
    }
    //recursive case
    int op1,op2;
    op1=op2=INT_MAX;
    if(dp[n][capacity]!=-1) return dp[n][capacity];
    if(capacity>=wt[n-1]){

        op1=price[n-1]+knapSack(price,wt,capacity-wt[n-1],n-1, dp);
    }
    op2=0+knapSack(price,wt,capacity,n-1, dp);

    return dp[n][capacity]=max(op1,op2);

}
int bottomUp(int n, int dp[][100], int *prices, int *wt, int capacity){

    int op1, op2;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=capacity;j++){
            op1=op2=INT_MIN;
            if(wt[i-1]<=j){
                op1=prices[i-1]+dp[i-1][j-wt[i-1]];
            }
            op2=dp[i-1][j];
            dp[i][j]=max(op1,op2);
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=capacity;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][capacity];
}
int main(){

    int prices[]={4,5,6,3};
    int wt[]={2,3,3,2};
    int capacity=5;
    int n=sizeof(prices)/sizeof(int);
    int dp[100][100];
    memset(dp, 0, sizeof dp);
    // cout<<knapSack(prices, wt, capacity, n, dp);

    cout<<bottomUp(n,dp,prices,wt, capacity);
}