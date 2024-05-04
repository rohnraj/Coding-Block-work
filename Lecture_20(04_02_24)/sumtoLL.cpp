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
node *shead=NULL;
node *stail=NULL;
void insertnodeatend(node *&head,node *&tail,int data){
    if(!head){
        node *n=new node(data);
        head=tail=n;
    }
    else{
        node *n=new node(data);
        tail->next=n;
        tail=n;
    }
}
void reverseLL(node *&head, node *&tail) {
    node *prev = NULL;
    node *curr = head;
    while (curr != NULL) {
        node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    tail = head;
    head = prev;
}

void additionoftwoLL(node *&head1, node *&tail1, node *&head2, node *&tail2) {
    int carry = 0;
    while (head1 && head2) {
        int sum = head1->data + head2->data + carry;
        carry = sum / 10;
        insertnodeatend(shead, stail, sum % 10);
        head1 = head1->next;
        head2 = head2->next;
    }
    if (carry!=0) {
        insertnodeatend(shead, stail, carry);
    }
}

void printsumLL(){
    while(shead){
        cout<<shead->data<<" ";
        shead=shead->next;
    }
}
int main(){
    
    int data,n,m;
    cin>>n>>m;
    node *head1=NULL;
    node *tail1=NULL;
    node *head2=NULL;
    node *tail2=NULL;
    int i=1;
    while(i<=n){
        cin>>data;
        insertnodeatend(head1,tail1,data);
        i++;
    }
    int j=1;
    while(j<=m){
        cin>>data;
        insertnodeatend(head2,tail2,data);
        j++;
    }
    reverseLL(head1,tail1);
    reverseLL(head2,tail2);
    additionoftwoLL(head1,tail1,head2,tail2);
    reverseLL(shead,stail);
    printsumLL();
    
}