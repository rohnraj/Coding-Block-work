#include<iostream>
using namespace std;
int main(){

    int num,j;
    cout<<"enter the range: ";
    cin>>num;
    for(int i=1; i<=num; i++){

        bool b=true;
        for(int j=2; j<=i-1; j++){

            //not prime
            if (i%j==0){
                b=false;
                break;
            }

           /* This mistake which I a made previously
            else if(b==true){
                cout<<i<<" ";
                break;
            }*/
        }
        if (b==true && i!=1 && i!=2)
            cout<<i<<" ";
    }
}