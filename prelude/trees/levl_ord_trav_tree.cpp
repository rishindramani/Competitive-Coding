//
// Created by rishi on 1/29/2020.
//
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left,*right;
    int data;
};
Node* newnode(int data)
{
    Node* temp=new Node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void level(Node *root)
{
    if(!root ) //==NULL)// !root
        return;
    queue<Node*>q;
    q.push(root);

    while(!q.empty())//== false)   //
    {
        Node *curr=q.front();
        cout<<curr->data<<" ";
        q.pop();
        if (curr->left != NULL)
            q.push(curr->left);

        if (curr->right != NULL)
            q.push(curr->right);
    }
}


int main()
{
    Node* root=newnode(1);
    root->left=newnode(5);
    root->right=newnode(6);
    root->left->left=newnode(2);
    root->left->right=newnode(3);
    cout<<"level order"<<endl;
    level(root);
    return 0;

}