/*#include<iostream>
using namespace std;
int main(){

    int arr[5]={9,7,3,1,6};
    //{1,3,6,7,9}

    for(int i=0;i<4;i++){

        for(int j=i+1;j<5;j++){

            if(arr[i]>arr[j]){

                int k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
    cout<<"selection short:- ";
    for(int i=0;i<5;i++){

        cout<<arr[i]<<"\t";
    }

}*/

#include<iostream>
using namespace std;
int main(){

    int a[]={9,7,3,1,6};
    int n=sizeof(a)/sizeof(int);
    //{1,3,6,7,9}

    for(int i=0;i<n-1;i++){

        int m=i;
        for(int j=i+1; j<n; j++){

            if(a[j]<a[m]){

                m=j;
            }

            swap (a[m], a[i]);
        }
    }

    for(int i=0; i<n; i++){

        cout<< a[i]<<" ";
    }
    cout<<endl;
    
}