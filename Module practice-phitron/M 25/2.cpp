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

    //dequeue operation
    void dequeue()
    {
        if(sz == 0)
        {
            cout << "Queue is empty" << "\n";
            return;
        }
        if(sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node* a = head; // pointing a to the head
        head = head->nxt;
        sz--;
        delete a;
    }

    //returning front element
    int front()
    {
        if(sz == 0)
        {
            cout << "Queue is empty" << "\n";
            return -1;
        }
        return head->data;
    }

    //returning size
    int size()
    {
        return sz;
    }

};

int main()
{
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout << q.front() << "\n";
    cout << q.size() << "\n";

    q.dequeue();
    cout << q.size() << "\n";
    return 0;
}
