
// // 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
// #include<iostream>
// using namespace std;

// class node{
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data){
//         this->data=data;
//         left=NULL;
//         right=NULL;
//     }
// };
// node* creatTree(node *root){

//     int data;
//     cin>>data;
//     if(data==-1) return NULL;
//     else{
//         root=new node(data);
//         root->left=creatTree(root->left);
//         root->right=creatTree(root->right);

//         return root;
//     }
// }
// //preorder
// void printpreorder(node *root){

//     if(root==NULL) return;
//     cout<<root->data;
//     printpreorder(root->left);
//     printpreorder(root->right);
// }
// //In-order
// void printinorder(node *root){

//     if(root==NULL) return;
//     printinorder(root->left);
//     cout<<root->data;
//     printinorder(root->right);
// }
// //postorder
// void printpostorder(node *root){

//     if(root==NULL) return;
//     printpostorder(root->left);
//     cout<<root->data;
//     printpostorder(root->right);
// }
// int numofNodes(node *root){

//     if(root==NULL) return 0;
//     else numofNodes(root->left)+numofNodes(root->right)+1;
// }
// int heightofTree(node *root){

//     if(root==NULL) return 0;
//     int height_L=heightofTree(root->left);
//     int height_R=heightofTree(root->right);
//     return max(height_L,height_R)+1;
    
// }
// int diameterofTree(node *root){

//     if(root==NULL) return 0;
//     //case1: root se hote hue diameter aayega
//     int c1= heightofTree(root->left)+heightofTree(root->right);
//     //case2: root ke right se diameter ajaega 
//     int c2= heightofTree(root->right);
//     //case3: root ke left se hi diameter ajaega
//     int c3= heightofTree(root->left);

//     return max(c1, max(c1, c2));
// }
// int main(){

//     node *root=NULL;
//     root=creatTree(root);
//     printpreorder(root);
//     printinorder(root);
//     printpostorder(root);

//     cout<<numofNodes(root);

//     cout<<heightofTree(root);

//     cout<<diameterofTree(root);
// }

//--------------my code----------------------

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
    root=new node(data);
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
int numofnodes(node *root){
    
    if(!root) return 0;
    //pehla node hum count karlenge baaki recursive ko bol denge
    return 1+numofnodes(root->left)+numofnodes(root->right);
}
int heightoftree(node *root){
        
    if(!root) return 0;
    //ek node ki height 1 hogyi baaki recursion ko bol denge 
    return 1+max(heightoftree(root->left),heightoftree(root->right));
}
int diameteroftree(node *root){
    
    if(!root) return 0;
    int op1=heightoftree(root->left)+heightoftree(root->right);
    int op2=heightoftree(root->left);
    int op3=heightoftree(root->right);
    return max(op1,op2,op3);
}
class Pair{
public:
    int height;
    int diameter;
};
Pair fastdiameteroftree(node *root){

    //base case
    if(!root){
        Pair p;
        p.height=p.diameter=0;
        return p;
    }
    //recusrive case
    Pair l=fastdiameteroftree(root->left);
    Pair r=fastdiameteroftree(root->right);

    Pair p;
    p.height=max(l.height,r.height)+1;
    int op1=l.height+r.height;
    int op2=l.height;
    int op3=r.height;
    p.diameter=max(op1,max(op2,op3));
    return p;
}
void levelorderTraversal(node *root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *f=q.front();
        q.pop();
        if(f==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data;
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
    }    
}
node* levelorderinpute(node*root){
    int data, leftchilddata,rightchilddata;
    cin>>data;
    if(data==-1) return NULL;
    queue<node*> q;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node *f=q.front();
        q.pop();
        cin>>leftchilddata;
        cin>>rightchilddata;
        if(leftchilddata==-1){
            f->left=new node(leftchilddata);
            q.push(f->left);
        }
        if(rightchilddata==-1){
            f->right=new node(rightchilddata);
            q.push(f->right);
        }

    }
    return root;
}
int pre[]={8,10,1,6,4,7,3,14,13};
int in[]={1,10,4,6,7,8,3,13,14};
int i=0;
node* buildtree(int s, int e){
    //base case
    if(s>e) return NULL;
    //recursive case
    int data=pre[i++];
    node *root=new node(data);
    int index;
    for(int j=0;j<=e;j++){
        if(in[j]==data){
            index=j;
            break;
        }
    }
    root->left=buildtree(s,index-1);
    root->right=buildtree(index+1,e);
    return root;
}
int main(){
    
    node *root=createnode(root);;
    printpreorder(root);
    cout<<endl;
    printinorder(root);
    cout<<endl;
    printpostorder(root);
    cout<<endl;
    cout<<numofnodes(root);
    cout<<endl;
    cout<<heightoftree(root);
    cout<<endl;
    cout<<diameteroftree(root);
    cout<<endl;
    Pair q=fastdiameteroftree(root);
    cout<<"fast diameter: "<<q.height<<" "<<q.diameter<<endl;
    node *root=levelorderinpute(root);
    
}