#include<iostream>
using namespace std;
int main () {

	int N;
	cin>>N;
	for (int row=N; row>=1; row--)
	{

		for(int col=1; col<=N-row; col++)
			cout<<" ";
            
        for(int col=1; col<=row; col++)
			cout<<"*"<<" ";

			
		cout<<endl;
	}
	return 0;
}