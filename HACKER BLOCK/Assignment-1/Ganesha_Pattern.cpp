#include<iostream>
using namespace std;
int main() {

	int N;
	cin>>N;
	int m=(N/2)+1;
	for(int row=1;row<=N;row++){

		for(int col=1;col<=N;col++){

			if(col==m || row==m || (col==1 && row<=m) || (col==N && row>=m) || (row==1 && col>=m) || (row==N && col<=m))
				cout<<"*";
			else 
			cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}