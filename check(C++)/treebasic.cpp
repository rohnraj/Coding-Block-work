#include<iostream>
using namespace std;
class node{
public: 
    int data;
    node *left;
    node *right;
    node(int data){
        this->data=data;
        left=right=NULL;
    }
};
node* createnode(node *root){
    int data;
    cin>>data;
    //base case
    if(data==-1){
        //jese hi node mai -1 data tab uska node nhi banana hai then return NULL;
        return NULL;
    }
    //recursive case
    root->left=createnode(root->left);
    root->right=createnode(root->right);
    
    //hume recursion mai ye padha tha end wala return esse socho ki tum main() kya return karna chahte ho
    return root;
}
void printpreorder(node *root){
    
    //base case
    if(!root) return;
    //recursive case
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
void printinorder(node *root){
        //base case
    if(!root) return;
    //recursive case
    printpreorder(root->left);
    cout<<root->data<<" ";
    printpreorder(root->right);
}
void printpostorder(node *root){
    
   if(!root) return;
    //recursive case
    printpreorder(root->left);
    printpreorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    
    node *root=createnode(root);;
    printpreorder(root);
    printinorder(root);
    printpostorder(root);
}