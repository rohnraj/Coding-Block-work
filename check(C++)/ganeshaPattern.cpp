#include <iostream>
using namespace std;
int main() {
    
    int row, col, n, mid;
    cin>>n;
    mid=n/2;
    for(row=1;row<=n;row++){
        
        for(col=1;col<=n;col++){
            
            if(col==mid+1 || row==mid+1){
                
                cout<<"*";
            }
            else{

                if((col==1 && row<=mid) || col==n && row>mid) cout<<"*";
                else cout<<" ";
            }

            if(col==mid+1 && row==1){

                for(int col=mid+1;col<=n;col++) cout<<"*";
            }
            if(col==1 && row==n){

                for(int col=1;col<=mid;col++) cout<<"*";
            }

            
        }
        cout<<endl;
    }
    return 0;
}