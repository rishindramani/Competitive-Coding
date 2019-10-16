//
// Created by Rishi on 01-Oct-19.
//
#include <bits/stdc++.h>
using namespace std;
struct Queue
{
const int capacity=10;
int front,rear,size;
int arr[capacity];
};

int front,rear,size;
int s[10];
Queue()
{
    front =rear;

}
void enqueue(int x)
{
    if(size<capacity)
    {
        arr[rear]=x;
    }
}
void dequeue()
{


