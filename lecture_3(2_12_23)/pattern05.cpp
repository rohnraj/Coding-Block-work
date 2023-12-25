#include<iostream>
using namespace std;
int main(){

    int row=1, rag;
    cout<<"enter the range of the pattern: ";
    cin>>rag;
    while(row<=rag){

        // space
        int col = 1;
        while (col <= rag - row)
        {

            cout << " ";
            col++;
        }
        // star
        // ** first and last row ke baare mai pehle socho **
        if (row == 1 || row == rag)
        {
            int col1 = 1;
            while (col1 <= row)
            {

                cout << " *" ;
                col1++;
            }
        }
        else
        {

            cout << "*";
            int col3 = 1;
            while (col3 <= row - 1)
            {
                
                cout << " ";

                col3++;
            }
            cout << "*";
            int col4=1;
            while (col4 <= row - 1)
            {
                
                cout << " ";

                col4++;
            }
            cout<<"*";
            //cout<<endl;

        }
        cout<<endl;
        row++;
    }
    return 0;
}
