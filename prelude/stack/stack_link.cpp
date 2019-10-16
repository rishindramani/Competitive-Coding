//
// Created by Rishi on 11-Sep-19.
//
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
struct Node* top;

void push(int data)
{
    struct Node* temp=new Node();
    if(!temp)
    {
        cout<<"Stack Overflow";
    }

}