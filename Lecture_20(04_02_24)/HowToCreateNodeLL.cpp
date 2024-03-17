#include<iostream>
using namespace std;

class node{

public:
    int data;
    node *next=NULL;
};

int main(){

    node a,b; // static memory allocation
    node *c=new node;
    c->data=30;
    a.data=10;
    b.data=20;
    a.next=&b;
    b.next=c;
    cout<<a.data<<" --> "<<a.next->data<<" --> "<<b.next->data<<" --> "<<"NULL";
    //in the above cout statment hum b.data kar ke bhi value b ki print 
    //karwa skte the but just to show that link b/w node a and b is done 
    //successfully humne isse esse print kara hai
}