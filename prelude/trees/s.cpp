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