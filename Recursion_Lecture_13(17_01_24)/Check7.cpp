#include<iostream>
using namespace std;
bool checkSeven(int *p, int size){

    //Base case
    if(size==0) return false;

    //recursive case
    if(*p==7) return true;
    bool n=checkSeven(p+1,size-1);
    return n;
    

}
int main(){

    int arr[]={2,7,3,5,8};
    int size=sizeof(arr)/sizeof(arr[1]);
    cout<<"is seven present(T/F): "<<checkSeven(arr, size);
}
