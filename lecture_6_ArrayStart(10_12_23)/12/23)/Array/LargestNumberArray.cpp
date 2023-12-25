#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[]={1,5,7,3,9};
    int a=INT_MIN;
    for(int i=0;i<5;i++){

        if(arr[i]>a){

            a=arr[i];
        }
    }
    cout<<a;
}