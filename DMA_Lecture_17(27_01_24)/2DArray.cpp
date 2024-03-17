#include<iostream>
using namespace std;
int main(){

    int rows, col;
    cin>>rows>>col;
    int **arr=new int*[rows];
    for(int i=0;i<rows;i++){

        arr[i]=new int[col];
    }
    int number=1;
    for(int i=0;i<rows;i++){

        for(int j=0;j<col;j++){

            arr[i][j]=number++;
        }
    }
    for(int i=0;i<rows;i++){

        for(int j=0;j<col;j++){

            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }

    // DELETION
	for (int i = 0; i < rows; ++i)
	{
		delete []arr[i];
	}
	delete []arr;
	arr = NULL;

	return 0;
}