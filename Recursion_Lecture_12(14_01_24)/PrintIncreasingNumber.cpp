//**** increasing Number print *******

/*#include<iostream>
using namespace std;

void printIncrN(int n){

    //Base case
    if(n==0) return;

    //recurrsive case
    printIncrN(n-1);
    cout<<n<<" ";
}
int main(){

    printIncrN(5);
   
}*/

//******* Decreasing number print *******
#include<iostream>
using namespace std;
void printIncrN(int n){

    //Base case
    if(n==0) return;

    //recurrsive case
    cout<<n<<" ";
    printIncrN(n-1);
}
int main(){

    printIncrN(5);
   
}