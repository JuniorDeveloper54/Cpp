#include<bits/stdc++.h>
using namespace std;

//Queue using Linked-List

class node
{
public:
    int data;
    node* nxt;
};

class Queue
{
public:
    node* head;
    node* tail;
    int sz;

    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    //creating a node
    node* CreateNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    //enqueue operation
    void enqueue(int value)
    {
        sz++;
        node* newnode = CreateNode(value);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->nxt = newnode;
        tail = newnode;
    }

};

int main()
{



    return 0;
}
