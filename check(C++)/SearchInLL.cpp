#include<iostream>
using namespace std;

class node{
// this code will be called when a node is created
public:
    int data;
    node *next;
    node(int data){

        this->data=data;
        next=NULL;
    }
};
void incsertionAtEnd(node *&head, node *&tail, int data){

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
void insertAtFront(node *&head, node *&tail, int data){

    if(head==NULL){

        node *n=new node(data);
        head=tail=n;
    }
    node *n=new node(data);
    n->next=head;
    head=n;
}
void insertAtMiddle(node *&head, node *&tail, int data, int pos){

    node *p=head;
    node *k=new node(data);
    for(int i=0; i<pos-1; i++){

        p=p->next;
    }
    k->next=p->next;
    p->next=k;
  
}
void printLL(node *header){

    while(header){

        cout<<header->data<<" --> ";
        header=header->next;
    }
    cout<<"NULL"<<endl;
}
void deletionAtEnd(node *&head, node *&tail){

    if(!head) return;
    if(!head->next) {

        delete head;
        head=tail=NULL;
        return;
    }
    node *temp=head;
    while(temp->next!=tail){

        temp=temp->next;
    }
    delete tail;
    tail=temp;
    temp->next=NULL;
    
}
void deleteATFront(node *&head, node *&tail){

    if(!head) return;
    if(!head->next){

        delete head;
        return;
    }
    node *temp=head;
    head=head->next;
    delete temp;

}
void deleteAtMiddle(node *&head, node *&tail, int pos){

    if(!head) return;
    if(!head->next) {

        delete head;
        head=tail=NULL;
        return;
    }
    node *temp=head;
    for(int i=0;i<pos-1;i++){

        temp=temp->next;
    }
    node *n=temp->next;
    temp->next=n->next;
    delete n;
}
int lengthLL(node *head){

    int count=0;
    while(!head){
        
        count++;
        head=head->next;
    }
    return count;
}
node* middleElement(node *head, node *tail, node *s , node *f){

    //base case
    if(f==NULL || f->next==NULL) return s;

    //recursive case
    middleElement(head, tail, s->next, f->next->next);

}
bool SearchInLL(node *head, node *tail, int key, node *ans){

    // base case
    if(ans==NULL) return false;

    //processing 
    if(key==ans->data) return true;
    else{

        if(key>ans->data){ 
            
            node *middle=middleElement(ans, tail,head,head->next);
            SearchInLL(ans,tail,key,middle);
            
        }
        else{

            node *middle=middleElement(head, ans,head,head->next);
            SearchInLL(head,ans,key,middle);
        }
    }
    
}
int main(){

    node* head=NULL;
    node* tail=NULL;
    incsertionAtEnd(head, tail, 1);
    incsertionAtEnd(head, tail, 2);
    incsertionAtEnd(head, tail, 3);
    incsertionAtEnd(head, tail, 4);
    incsertionAtEnd(head, tail, 5);

    node *s=head;
    node *f=head->next;
    node *ans=middleElement(head, tail, s, f);

    printLL(head);
    cout<<SearchInLL(head, tail, 2, ans);

}