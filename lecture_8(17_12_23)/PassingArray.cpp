#include<iostream>
using namespace std;
void printArray(int arr[], int n){

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void bubbleSort(int arr[], int n){

    for(int i=0;i<n-1;i++){

        for(int j=0; j<n-1-i; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[]={4,3,5,1,2};
    int n=sizeof(arr)/sizeof(int);
    printArray(arr,n);
    bubbleSort(arr,n);
}