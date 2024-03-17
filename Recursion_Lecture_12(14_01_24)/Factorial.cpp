#include<iostream>
using namespace std;

int fact(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive case
	// fact(n) = n * fact(n-1);
	int chotaAns = fact(n - 1);
	int badaAns = n * chotaAns;
	return badaAns;
}

int main(){

    
    cout<<"5! = "<<fact(5);
}