#include <iostream>
using namespace std;

int main()
{
    
    int N;
    cout<<"Enter number of row: ";
    cin>>N;

    cout<<"1"<<endl;
    for(int row=2;row<=N;row++){

        for(int col=1; col<=row; col++){


            if(col==1 || col==row){

                cout<<row-1;
            }
            else 
                cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}
