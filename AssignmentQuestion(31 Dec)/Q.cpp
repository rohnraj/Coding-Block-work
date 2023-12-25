#include<iostream>
using namespace std;
int main() {

    int N;
    cout<<"enter: ";
    cin>>N;
	for (int row=1;row<=N;row++)
	{

		for(int col=1; col<=(N/2)+1; col++){

			if(col!=(N/2)+1){

				cout<<"*";
				for(int i=1; i<=((N/2)+1)/2;i++){

					cout<<" ";
				}
				cout<<"*";
                cout<<endl;
			}
		}
	}
	return 0;
}