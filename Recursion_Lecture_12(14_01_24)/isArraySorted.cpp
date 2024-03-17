#include<iostream>
using namespace std;
//Different method show different methods of chhota karna size of Array

// ****** method 1 (reducing array size by itrating 'i') ********
/*bool isArraySorted(int *p, int n, int i){

    //Base case
    if(i==n || i==n-1) return true;

    //recurrcesive case 
    bool isSorted=isArraySorted(p,n,i+1);
    if(p[i]<p[i+1] && isSorted==true)
        return true;
    else 
        return false;
}
int main(){

    int a[]={1,2,3,4,-5};
    int n=sizeof(a)/sizeof(a[1]);
    int i=0;
    cout<<"Kya Array sorted hai(T/F): "<<isArraySorted(a,n,i);
}*/

//      ******Method 2 (reducing array size by reducing value of 'n')******

/*bool isArraySorted(int *p, int n){

    //Base case
    if(n<=1) return true;

    //recurrsive case
    if(p[n-1]>p[n-2] && isArraySorted(p,n-1)==true) return true;
    else return false;

}

int main(){


    int a[]={1,-2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Is Array is sorted(T/F): "<<isArraySorted(a,n);
}*/

// ******* Method3 (reducing array size by increament address of the array)*******
bool isArraySorted(int *p, int n){

    //Base case
    if(n<=1) return true;

    //recurrsive case
    if(p[0]<p[1] && isArraySorted(p+1,n-2)==true) return true;
    else return false;

}
int main(){


    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Is Array is sorted(T/F): "<<isArraySorted(a,n);
}