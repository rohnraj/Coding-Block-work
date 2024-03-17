#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int key, int size){

    int start =0;
    int end=size-1;
    
    while(start<=end){
        
        int mid=(start+end)/2;;
        if(key==arr[mid]){

            return true;
        }
        else if(key>mid){

            //move right
            start=mid+1;
        }
        else{

            //move left
            end=mid-1;
        }
    }
    return false;
}
int main(){

    int key;
    int arr[]={1,2,3,4,5,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter number you want to find: ";
    cin>>key;
    cout<<"found or not: "<<BinarySearch(arr,key, n);
}