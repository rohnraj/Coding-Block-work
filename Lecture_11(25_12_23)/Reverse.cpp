#include<iostream>
using namespace std;
/*void print(int arr[][4],int m,int n){

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++) cout<<arr[m][n]<<" ";
        cout<<endl;
    }
}*/
int main(){

    int arr[5][4]={3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
    //3, 4, 7, 18 
    //2, 8, 3, 9  
    //5, 4, 2, 2  
    //7, 3, 0, 8  
    //2, 8, 9, 1 
   
    for(int i=0;i<5;i++){

        int start=0,end=3;

        for(int j=0;j<4;j++){

            if(start<=end){
                
                int temp;
                temp=arr[i][j];
                arr[i][j]=arr[i][end];
                arr[i][end]=temp;
                //swap(arr[i][j],arr[i][end]);
                start++;
                end--;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //print(arr,5,4);
    
}