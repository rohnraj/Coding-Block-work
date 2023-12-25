/*#include<iostream>
using namespace std;
int main(){

    int arr[5]={1,3,4,2,5}, j=4;
    while(j>=0){

        bool swap=0; // ye iss liye lagya rhe hai agr array already sorted hai toh
        // uske liye algorithm chlane ka koi mtbl nhi hai eg:-{1,2,3,4,5}
        //if (>) wale condition mai ager enter nhi kiya toh swap==0 hi rahega aur 
        //loop break kardenge code written in line 22 
        for(int i=0;i<j;i++){  
              
            if(arr[i+1]>arr[i]){

                int k=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=k;
                swap=1;
            }
        }
        if(swap==0)
            break;

        j--;
    }
    cout<<"sort in decrease manner:- ";
    for(int i=0;i<5;i++)
    cout<<arr[i]<<"\t";
}*/

//**Sir ka method**//

#include<iostream>
using namespace std;
int main(){

    int arr[]={1,3,4,2,5};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){

        int swap=0;
        for(int j=0;j<=n-2-i;j++){  
            
            if(arr[j+1]<arr[j]){

                int k=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=k;
                swap=1;
            }
        }
        if(swap==1)
            break;
    }
    cout<<"sort in increasing manner:- ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}