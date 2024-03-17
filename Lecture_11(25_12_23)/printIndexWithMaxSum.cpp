#include<iostream>
#include<climits>
using namespace std;
int main(){

    int a=0,index;
    int b=INT_MIN;
    int arr[5][4]{3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,30};
    // matrix visiual representation of the martrix
    //3, 4, 7, 18 += 32
    //2, 8, 3, 9  += 22
    //5, 4, 2, 2  += 13
    //7, 3, 0, 8  += 18
    //2, 8, 9, 1  += 20

    for(int i=0;i<5;i++){

        for(int j=0;j<4;j++){

            a+= arr[i][j];
            
        }
        if(a>b) {
            b=a;
            index=i;
        }
        a=0;
    }
    cout<<b<<endl;
    cout<<"Row has max sum: "<<index+1;
}