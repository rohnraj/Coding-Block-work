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
bool checkbysumindividually(node *head,node *tail,int target){
    int sum=0;
    if(head){
        sum+=head->data;
        head=head->next;
    }
    if(sum==target){
        
        //print
        if(head){
            cout<<head->data<<" ";
            head=head->next;
        }
        return 1;
    }
    return 0;
}
bool checkall(node *head1, node *t1, node *head2, node *t2, node *head3, node *t3, int target) {
    int sum = (t1 ? t1->data : 0) + (t2 ? t2->data : 0) + (t3 ? t3->data : 0);
    if (sum == target) {
        cout << (t1 ? t1->data : 0) << " " << (t2 ? t2->data : 0) << " " << (t3 ? t3->data : 0) << endl;
        return true;
    }
    if (!t1 || !t2 || !t3) {
        return false;
    }
    return checkall(head1, t1->next, head2, t2, head3, t3, target) ||
           checkall(head1, t1, head2, t2->next, head3, t3, target) ||
           checkall(head1, t1, head2, t2, head3, t3->next, target);
}

int main(){
    
    int data,n,m,k;
    cin>>n>>m>>k;
    node *head1=NULL;
    node *tail1=NULL;
    node *head2=NULL;
    node *tail2=NULL;
    node *head3=NULL;
    node *tail3=NULL;
    int i = 1;
    while (i <= n) {
        cin >> data;
        insertnodeatend(head1, tail1, data);
        i++; // Increment the loop control variable
    }

    int j = 1;
    while (j <= m) {
        cin >> data;
        insertnodeatend(head2, tail2, data);
        j++; // Increment the loop control variable
    }

    int p = 1;
    while (p <= k) {
        cin >> data;
        insertnodeatend(head3, tail3, data);
        p++; // Increment the loop control variable
    }

    int target;
    cin>>target;
    //check individually
    if(checkbysumindividually(head1,tail1,target)) return 0;
    if(checkbysumindividually(head2,tail2,target)) return 0;
    if(checkbysumindividually(head3,tail3,target)) return 0;
    
    //check all possible ways
    if(!checkall(head1,head1,head2,head2,head3,head3,target)){
        
        cout<<"target not found"<<endl;
    }
    
}