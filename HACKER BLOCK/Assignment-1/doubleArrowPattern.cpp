#include<iostream>
using namespace std;
int main(){

    int N;
    cin>>N;
	if (N%2!=0){
    	int m=(N/2)+1;
    	for(int row=m;row>=1;row--){

        	//space 
        	for(int col=1;col<=2*row-2;col++){

            	cout<<" ";
        	}
        	//number
        	for(int col=m-row+1;col>=1;col--){

            	cout<<col;
        	}
        	//space
        	for(int col=1;col<=m-row;col++){

            	cout<<" "; 
        	}
        
        	if(row!=m){
            	 //space
            	for(int col=1;col<=m-row-1;col++){

                	cout<<" ";
            	}
            	//number
            	for(int col=1;col<=m-row+1;col++){

                	cout<<col;
            	}
        	}
        	cout<<endl;
    	}

    	//2nd half
    	int k=N/2;
    	for(int row=1;row<=k;row++){

        	//space 
        	for(int col=1;col<=2*row;col++){

            	cout<<" ";
        	}
        	//number
        	for(int col=k-row+1;col>=1;col--){

            	cout<<col;
        	}	
        	//space
        	for(int col=1;col<=k-row;col++){

            	cout<<" "; 
        	}
        
        	if(row!=k){
            	 //space
            	for(int col=1;col<=k-row-1;col++){

                	cout<<" ";
            	}
            	//number
            	for(int col=1;col<=k-row+1;col++){

                	cout<<col;
            	}
        	}
        	cout<<endl;
		}
    }
	return 0;
}