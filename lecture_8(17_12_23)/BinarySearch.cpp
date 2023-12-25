#include<iostream>
using namespace std;
int BinarySearch(int arr[],int key, int size){

    int start =0;
    end=size-1;
    mid=(start+end)/2;
}
int main(){

    int key;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter number you want to find: ";
    cin>>key;
    BinarySearch(arr,key, n);
}