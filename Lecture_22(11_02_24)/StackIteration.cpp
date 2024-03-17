#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    
    s.pop();

    if(s.empty()){

        cout<<"stack is empty"<<endl;
    }
    else cout<<"top element of the stack is: "<<s.top();

    cout<<"size of stack is : "<<s.size();
}