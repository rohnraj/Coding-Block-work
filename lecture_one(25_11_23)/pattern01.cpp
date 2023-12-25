            //Better understanding of While loop//

#include<iostream>
using namespace std;
int main(){

    int row=1, rag, k=1;
    cout<<"enter the range of the pattern: ";
    cin>>rag;
    while(row<=rag){

        int col=1, col1=1;
        while(col<=row){        
        cout<<k;
        k++;
        col++;
        }
        while(col1<=rag-row){
        cout<<'\t';
        col1++;
        }

        cout<<'\n';
        row++;
    }
    return 0;
}