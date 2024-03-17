
//when ever you make a STL of any data Structure always try to make maximum if case 
//so that no statment conflict other statment
#include<iostream>
using namespace std;

class stack{

    int data;
    int *arr;
    int top;
    int capacity;
    
public: 

    stack(int capacity){

        this->capacity=capacity;
        arr=new int[capacity];
        top=-1;
    }
    void push(int data){

       if(capacity-top>1){

            top++;
            arr[top]=data;
        }
        
       else cout<<"Overflow";
    }
    void pop(){

        if(top>=0) top--;
        else cout<<"UnderFlow";
    }
    int size(){

        if(top==-1) return 0;
        else return top+1;
    }
    int peek(){

        if(top>=0) return arr[top];
        else return -1;
    }
    bool isEmpty(){

        if(top==-1) return true;
        else return false;
    }
};
int main(){

    stack s(5);
    s.push(1);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;


}