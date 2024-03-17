#include<iostream>
using namespace std;
void permutation(char *a, int i){

    //Base case
    if(a[i]=='\0'){

        cout<<a<<endl;
        return;
    }

    //recurrsive case
    for(int j=i;a[j]!='\0';++j){

        swap(a[i],a[j]);
        permutation(a,i+1);
        swap(a[i],a[j]); //Backtracking
    }
}

int main(){

    char arr[]="abc";
    permutation(arr,0);
}