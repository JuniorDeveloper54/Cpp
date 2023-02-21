#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class node
{
public:
    int data;
    node* prv;
    node* nxt;
};

class Deque
{
    node* head;
    node* tail;
    int sz;

    Deque()//constructor
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node* Createnewnode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->head = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //pushback O(1)
    void push_back(int value)
    {
        node* newnode = Createnewnode(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }

    //pushfront O(1)

    void push_front(int value)
    {
        node* newnode = Createnewnode(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }

    //pop_back O(1)
    void pop_back()
    {
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        if(sz == 0)
        {
            cout << "Deque is empty" << "\n";
            sz--;
            return;
        }
        node* a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
    }
    //pop_front O(1)
    void pop_front()
    {
        if(sz==1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        if(sz == 0)
        {
            cout << "Deque is empty" << "\n";
            sz--;
            return;
        }
        node* a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
    }

    //front O(1)
    int front()
    {
        if(sz==0)
            cout << "Deque is empty\n";
        return head->data;
    }
    //back O(1)
    int front()
    {
        if(sz==0)
            cout << "Deque is empty\n";
        return tail->data;
    }

};


int main()
{
    FAST;

    Deque d;

    //d.............


    return 0;
}
