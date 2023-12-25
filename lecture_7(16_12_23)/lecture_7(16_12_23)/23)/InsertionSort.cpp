#include<iostream>
using namespace std;
int main(){

    int arr[5]={4,3,5,1,2};
    for(int i=1;i<5;i++){

        for(int j=i;j>0;j--){

            if(arr[j]<arr[j-1]){

                int swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }

    for(int i=0; i<5; i++){

        cout<<arr[i]<<" ";
    }
}

//**sir method**//

/*#include<iostream>
using namespace std;
int main(){

    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof (int),j;
    for(int i=1;i<n;i++){

        int hand=arr[i];
        for(j=i-1; j>=0; j--){

            if(arr[j]>hand){

                arr[j+1]=arr[j];
            }
            else 
                break;
        }
        arr[j+1]=hand;
    }
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }
}*/