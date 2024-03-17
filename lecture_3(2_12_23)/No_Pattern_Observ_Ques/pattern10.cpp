/* 

_ _ _ _ _ *
_ _ _ _ * _ *
_ _ _ * _ _ _ *
_ _ * _ _ _ _ _ *
_ * _ _ _ _ _ _ _ *
* * * * * * * * * * *


*/

#include<iostream>
using namespace std;
int main(){

    int rag;
    cin>>rag;
    for(int row=1; row<=rag; row++){

        //spaces
        for(int col=1;col<=rag-row;col++) cout<<" ";
        //star
        if(row==1 || row==rag){
            for(int col=1;col<=2*row-1;col++) cout<<"*";
        }
        else{
            cout<<"*";
            //space
            for(int col=1;col<=2*(row-1)-1; col++) cout<<" ";
            cout<<"*";
        }
         cout<<endl;
    }
}