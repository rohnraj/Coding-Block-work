#include<iostream>
using namespace std;

void bubbleSort(int *p, int n,int j){

    //base case
    if(j==n-1) return;

    //recursive case
    for(int i=0;i<n-1-j;i++){

        if(p[i]>p[i+1]){

            swap(p[i],p[i+1]);
        }
    }
    bubbleSort(p,n,j+1);

}
int main(){

    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n,0);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}