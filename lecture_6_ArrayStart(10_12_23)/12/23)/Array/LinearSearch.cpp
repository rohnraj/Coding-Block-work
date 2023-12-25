#include<iostream>
using namespace std;
int main(){

    int arr[]={2,3,6,7,8};
    int key,i,n;
    cout<<"enter size of arry: ";
    cin>>n;
    cout<<"enter element you want to found: ";
    cin>>key;
    for(i=0;i<n;i++){

        if(arr[i]==key){

            cout<<"element found at index "<<i<<" "<<key;
            break;
        }
    }
    if (i==n-1){

        cout<<"NOt found";
    }
}