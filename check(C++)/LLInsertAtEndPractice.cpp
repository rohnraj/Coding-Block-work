#include<iostream>
using namespace std;

class node{

public:

    int data;
    node* next;
    node(int d){

        data=d;
        next=NULL;
    }
};
void insertNodeAtEnd(node * &t,node * &h,int data){

    if(h==NULL){

        node* n=new node(data);
        h=t=n;
        return;
        //return h;
    }
    node* n=new node(data);
    t->next=n;
    t=n;
    //return h;
}
void insertNodeAtFront(node * &t, node * &h, int data){

    if(h==NULL){

        node* n=new node(data);
        h=t=n;
        return;
        //return h;
    }
    node *n=new node(data);
    n->next=h;
}
void printLL(node *h){

    while(h){

        cout<<h->data<<"--> ";
        h=h->next;
    }
    cout<<"NULL";
}
int main(){

    node* head=NULL;
    node* tail=NULL;
    
    insertNodeAtEnd(tail,head,10);
    insertNodeAtEnd(tail,head,20);
    insertNodeAtEnd(tail,head,30);
    insertNodeAtEnd(tail,head,40);
    insertNodeAtEnd(tail,head,50);

    insertNodeAtFront(tail,head,0);
    printLL(head);
}