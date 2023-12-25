//both Array is sorted given
#include<iostream>
using namespace std;
void MergeArray(int a[], int n, int b[], int m){

    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    while(i>=0 && j>=0){

        if(a[i]>b[j]){

            a[k]=a[i];
            k--;
            i--;
        }
        else {

            a[k]=b[j];
            k--;
            j--;
        }
    }

    //Agar j ke elements bach gaye unhe a[] mai insert kardo
    while (j>=0){

        a[k]=b[j];
        k--;
        j--;
    }


}

void printArray(int arr[], int size){

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
}
int main(){

    int a[7]={3,5,7};
    int n=3; //number of element in a[]

    int b[]={1,2,4,6};
    int m=4;

    MergeArray(a, n, b, m);
    printArray(a,n+m);

}