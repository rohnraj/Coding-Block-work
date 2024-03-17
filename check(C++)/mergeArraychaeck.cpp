#include<iostream>
using namespace std;

void mergeTwoArray(int *arr1, int n, int *arr2, int m, int *arr){
    
    int k=0,i=0,j=0;
    while(i<n && j<n){
        if(arr1[i]<arr2[j]){
        
            arr[k]=arr1[i];
            k++;
            i++;
        }
        else{
        
            arr[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(n>m){
        while(i<n){
            arr[k]=arr1[i];
            i++;
        }
    }
    else {
         while(i<m){
            arr[k]=arr2[j];
            j++;
        }
    }
}
void print(int *arr, int n){
    
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main(){
    
    int arr1[]={1,3,5,7,9};
    int n=sizeof(arr1)/sizeof(int);
    int arr2[]={2,4,6};
    int m=sizeof(arr2)/sizeof(int);
    int size= n+m;
    
    int arr[size]={0};
    mergeTwoArray(arr1,n,arr2,m,arr);
    
    print(arr,size);
}