#include<iostream>
using namespace std;
bool BinarySearch(int *p,int end, int key, int start){

    int mid=(start+end)/2;
    //base case
    if(start>end) return false;

    //recursive case 
    if(p[mid]==key) return true;
    if(p[mid]<key) BinarySearch(p,end,key,mid+1);
    else BinarySearch(p,mid-1,key,start);
}

int main(){

    int arr[]={1,2,5,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int key=9;
    cout<<"key is present or not(T/F): "<<BinarySearch(arr,n-1,key,0);
}