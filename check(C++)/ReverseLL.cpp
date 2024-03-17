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
void insertNodeAtEnd(node *&tail, node *&head, int data){

    if(head==NULL){

        node *n=new node(data);
        head=tail=n;
    }
    else{

        node *n=new node(data);
        tail->next=n;
        tail=n;
    }
}
void printLL(node *h){

    while(h){

        cout<<h->data<<"--> ";
        h=h->next;
    }
    cout<<"NULL"<<endl;
}
void reverseLL(node *&head, node *&tail){

    node *p=NULL;
    node *c=head;
    node *n;// n is take to prevent addresse where c what pointing before its next change to p

    while(c){

        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    swap(head, tail);
}
int main(){

    node* head=NULL;
    node* tail=NULL;
    
    insertNodeAtEnd(tail,head,10);
    insertNodeAtEnd(tail,head,20);
    insertNodeAtEnd(tail,head,30);
    insertNodeAtEnd(tail,head,40);
    insertNodeAtEnd(tail,head,50);
    printLL(head);

    reverseLL(head, tail);
    printLL(head);
}