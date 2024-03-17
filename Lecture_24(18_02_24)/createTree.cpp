
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1
#include<iostream>
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
node* creatTree(node *root){

    int data;
    cin>>data;
    if(data==-1) return NULL;
    else{
        root=new node(data);
        root->left=creatTree(root->left);
        root->right=creatTree(root->right);

        return root;
    }
}
//preorder
void printpreorder(node *root){

    if(root==NULL) return;
    cout<<root->data;
    printpreorder(root->left);
    printpreorder(root->right);
}
//In-order
void printinorder(node *root){

    if(root==NULL) return;
    printinorder(root->left);
    cout<<root->data;
    printinorder(root->right);
}
//postorder
void printpostorder(node *root){

    if(root==NULL) return;
    printpostorder(root->left);
    cout<<root->data;
    printpostorder(root->right);
}
int numofNodes(node *root){

    if(root==NULL) return 0;
    else numofNodes(root->left)+numofNodes(root->right)+1;
}
int heightofTree(node *root){

    if(root==NULL) return 0;
    int height_L=heightofTree(root->left);
    int height_R=heightofTree(root->right);
    return max(height_L,height_R)+1;
    
}
int diameterofTree(node *root){

    if(root==NULL) return 0;
    //case1: root se hote hue diameter aayega
    int c1= heightofTree(root->left)+heightofTree(root->right);
    //case2: root ke right se diameter ajaega 
    int c2= heightofTree(root->right);
    //case3: root ke left se hi diameter ajaega
    int c3= heightofTree(root->left);

    return max(c1, max(c1, c2));
}
int main(){

    node *root=NULL;
    root=creatTree(root);
    printpreorder(root);
    printinorder(root);
    printpostorder(root);

    cout<<numofNodes(root);

    cout<<heightofTree(root);

    cout<<diameterofTree(root);
}