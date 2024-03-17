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
void insertATEnd(node* &h,node* &t, int data){

    if(h==NULL){

        node *n=new node(data);
        h=t=n;
    }
    else{

        node* n=new node(data);
        t->next=n;
        t=n;
    }
}
int main(){

    node *head=NULL, *tail=NULL;
    insertATEnd(head,tail,1);
    insertATEnd(head,tail,2);
    insertATEnd(head,tail,3);
    insertATEnd(head,tail,4);
    insertATEnd(head,tail,5);

    printLL(head);
    
}