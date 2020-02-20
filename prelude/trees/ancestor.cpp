//
// Created by rishi on 2/11/2020.
//
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;

};
bool printanc(struct node *root,int key)
{
    if(root==NULL)
        return false;
    if(root->data==key)
        return true;
    if(printanc(root->left,key)||printanc(root->right,key)==true)
    {
        cout<<root->data<<" ";
        return true;
    }
    return false;
}
struct node* newNode(int data)
{
    struct node* node = (struct node*)
            malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}
int main()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->right->right = newNode(9);
    root->right->right->left = newNode(10);

    printanc(root,10);
    return 0;
}


