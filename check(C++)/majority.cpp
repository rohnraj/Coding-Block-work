#include<iostream>
using namespace std;

int majority(int *a, int n,int i,int p,int greater){

	int count=1;
	
	//base case
	if(i==n) return 1;

	//processing 
	for(int j=i+1;j<n;j++){

		if(a[i]==a[j]){

			count++;
		}
	}
	if(count>p){

		greater = a[i];
	}

	//recusive case
	majority(a,n,i+1,count,greater);
    
	return greater;
}

int main(){

	int arr[1000], n,g=0;
	cin>>n;
	for(int i=0;i<n;i++){

		cin>>arr[i];
	}
	int a=n/2;
	cout<<majority(arr,n,0,a,g);

	return 0;
}