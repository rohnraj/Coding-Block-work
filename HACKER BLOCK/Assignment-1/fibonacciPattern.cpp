#include<iostream>
using namespace std;
int main() {

	int N,a=0,b=1;
	cin>>N;
	cout<<a<<endl;
	cout<<b<<"\t";
	for(int row=1;row<=N;row++){

		for(int col=1;col<=row*(row+1)/2;col++){

			int c=a+b;
			a=b;
			b=c;
			cout<<c<<"\t";
		}
        cout<<endl;
	}
	return 0;
}