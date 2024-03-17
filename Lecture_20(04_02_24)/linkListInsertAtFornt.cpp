#include<iostream>
using namespace std;
class node{

public:
    int data;
    node* next;//joh class khud ka pointer store karti hai
    //usse kehte hai self referencial class bolte hai
    node(int d){

        data=d;
        next=NULL;
    }
};
void printLL(node *head){

    while(head!=NULL){

        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL\n";
}
void insertATFront(node* &h,node* &t, int data){

    if(h==NULL){

        node *n=new node(data);
        h=t=n;
    }
    else{

        node* n=new node(data);
        t->next=n;
        h=n;
    }
}
int main(){

    node *head=NULL, *tail=NULL;
    insertATFront(head,tail,1);
    insertATFront(head,tail,2);
    insertATFront(head,tail,3);
    insertATFront(head,tail,4);
    insertATFront(head,tail,5);

    printLL(head);
    
}