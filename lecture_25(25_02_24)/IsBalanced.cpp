#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
void insertnode(node *&root){

    int data;
    cin>>data;
    if(data==-1)  return;
    if(!root){

        node *n=new node(data);
        root=n;
        return;
    }
    node *n=new node(data);
    root=n;

    insertnode(root->left);
    insertnode(root->right);
    
}
void LevelOfTraversal(node *root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        node *n=q.front();
        q.pop();
        if(n==NULL){

            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else{

            cout<<n->data;
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
        }
    }
}
void Bst(){

    
}
int main(){

    node *root=NULL;
    insertnode(root);
    LevelOfTraversal(root);
    
}