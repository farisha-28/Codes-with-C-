#include<bits/stdc++.h>
using namespace std; 

struct Node{
    Node* left; 
    int data;   
    Node* right;
};

Node* createNewNode(int value){
    Node* temp = new Node();
    temp->data = value; 
    temp->left = NULL; 
    temp->right = NULL; 
    return temp; 
}

Node* insert(Node* currentNode, int value){
    if(currentNode==NULL){
        currentNode = createNewNode(value); 
    }else if(value <= currentNode->data){
        currentNode->left = insert(currentNode->left,value);
    }else{
        currentNode->right = insert(currentNode->right,value); 
    }
    return currentNode; 
}

void pre_Order(Node* root){
    if(root == NULL){
        return;
    }
    else{
       cout<<root->data<<endl;
        pre_Order(root->left);
        pre_Order(root->right);
    }
}

void in_Order(Node* root){
    if(root == NULL){
        return;
    }
    else{
        in_Order(root->left);
        cout << root->data<<endl;
        in_Order(root->right);
    }
}

void post_Order(Node* root){
    if(root == NULL){
        return;
    }
    else{
        post_Order(root->left);
        post_Order(root->right);
        cout << root->data <<endl;
    }
}

int main()
{
    Node* root = NULL; 
    
    root = insert(root, 45); 
    root = insert(root, 50);
    root = insert(root, 32); 
    root = insert(root, 55);
    root = insert(root, 35);
    root = insert(root, 25);
    
    cout << "Pre order values are : "<<endl;
    pre_Order(root);
    cout << "In order values are : "<<endl;
    in_Order(root);
    cout << "Post order values are : "<<endl;
    post_Order(root);


    
    
}
