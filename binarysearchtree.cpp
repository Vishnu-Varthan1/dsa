#include<iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

class binarytree {
    public: 
    Node* root;
    binarytree(){
        root=NULL;
    }
    //insert 
    Node* insert(Node* node , int value){
        if (node==NULL)
        {
            /* code */
            return new Node(value);
        }
        if (value<-node->data)
        {
            /* code */
            node->left=insert(node->left,value);
        }
        else{
            node->right=insert(node->right, value);
        }
        return node;
        
        

    }


    //preorder
    void preorder(Node* node){
        if ( node == NULL)return ;
        {
            /* code */
             cout<<node->data<<" ";
            preorder(node->left);
            preorder(node->right);
           
        }
        
    }
    //inorder
    void inorder(Node* node){
        if (node ==NULL)return;
        {
            /* code */
            inorder(node->left);
            cout<<node->data<<" ";
            inorder(node->right);
        }
        

    }
    void postorder(Node* node){
        if (node == NULL)return;
        {
            /* code */
            postorder(node->left);
            postorder(node->right);
            cout<<node->data<<" ";
        }
        
    }
};

int main (){
    binarytree tree ;
    int n , value;

    cout<<"Enter number of nodes:";
    cin>>n;
    cout<<"Enter"<<n<<"node values:";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>value;
        tree.root =tree.insert(tree.root,value);
    }
    cout<<"pre";
    tree.preorder(tree.root);
    cout<<"inda";
    tree.inorder(tree.root);
    cout<<"po";
    tree.postorder(tree.root);
    return 0;
    
}