#include<iostream>
using namespace std;

class node{

public:
    int data;
    node *next;
    node(int data){

        this->data=data;
        next=NULL;
    }
    
};
void insertNode(node *&head, node *&tail, int data){

        if(!head){

            node *n=new node(data);
            head=tail=n;
            return;
        }
        node *n=new node(data);
        tail->next=n;
        tail=n;
}
class stack{

    int capacity;
    int top;
    int data;
    node *tail;
    node *head;

public:
    stack(int capacity){

        this->capacity=capacity;
        top=-1;
        tail=NULL;
        head=NULL;
    }
    void push(int data){

        
        if(capacity-top>1){

            top++;
            insertNode(head, tail, data);
        }
        else cout<<"overFlow"<<endl;

    }
    void pop(){

        if(!head) return;
        else if(!head->next) {
            delete head;
            head=tail=NULL;
        }
        else{

            node *temp=head;
            while(temp->next!=tail){

                temp=temp->next;
            }
            delete tail;
            temp->next=NULL;
            tail=temp;
        }

    }
    int peek(){

        if(top>=0) return tail->data;
        else return -1;

    }

    bool isEmpty(){

        if(top>=0) return false;
        else return true;

    }
    int size(){

        int count=0;

        while(head){
            count++;
            head=head->next;
        }
        return count;
    }
};
int main(){

    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(50);

    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl<<endl;

    s.pop();

    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;

}