//STL-- use karlo bane hue library hai ye, hume ye code kiya hai to 
//understand how Vector written in a library
#include<iostream>
using namespace std;
class Vector{
private:
    //private bcz user change na kr paaye joh array bnaya hai
    int *a;//array
    int ms;//max size
    int cs;//current size
public:
    Vector(int s=2/**s is initial value**/){

        a=new int[s];
        ms=s;
        cs=0;
    }
    void push_back(int d){

        if(cs==ms){

            int *newArray=new int[2*ms];//creating new dynamic array for 
            //storing more elements 
            for(int i=0;i<ms;i++){

                newArray[i]=a[i];
            }
            ms*=2;
            delete []a;
            a=newArray; //ye dono pointer hai inn dono ke under addresses hai
            //so ek ke under ka address dusre mai daal diya 

        }
        a[cs] =d;//data daal diya
        cs++;//current size bda do after inserting element
    }
    void pop_back(){

        if(cs>0){

            cs--;
        }
    }
    int size(){

        return cs;
    }
    int capacity(){

        return ms;
    }
    int operator[](int indx) {
		return a[indx];//it will return value at that index of a
	}
    void print() {
		for (int i = 0; i < cs; ++i)
		{
			cout << a[i] << " ";
		}
	}
};

int main() {


	Vector v;

	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i);
	}
	cout << v.capacity() << endl;
	// v.print();
    //v ek object hai array type ka aur woh subscript( [] ) nhi smjhta
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";//toh hume smjhana padega
    }
	cout << endl;

	return 0;
}
