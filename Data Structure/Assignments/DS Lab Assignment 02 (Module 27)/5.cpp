#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template<class t>
class node
{
public:
    t data;
    node* next;
    node* prv;
};

template<class t>
class dequeue
{
public:
    node<t>* head;
    node<t>* tail;
    int sz;
    dequeue()
    {
        sz = 0;
        head = NULL;
        tail = NULL;
    }
    node<t>* CreateNewNode(int value)
    {
        node<t>* newnode=new node<t>;
        newnode->data=value;
        newnode->next=NULL;
        newnode->prv=NULL;
        return newnode;
    }

    void PushFront(int value)
    {
        sz++;
        node<t>* a= CreateNewNode(value);
        if(sz==0)
        {
            head=a;
            tail=a;
            sz++;
            return;
        }
        a->next=head;
        head->prv=a;
        head=a;
        sz++;
    }

    void PushBack(int value)
    {
        node<t>* a= CreateNewNode(value);
        if(sz==0)
        {
            head=a;
            tail=a;
        }
        tail->next=a;
        a->prv=tail;
        tail=a;
        sz++;
    }
    //popfront
    void PopFront()
    {
        if(sz==0)return;

        if(sz==1)
        {
            delete head;
            head=NULL;
            tail=NULL;
            sz--;
            return;
        }
        node<t>* a=head;
        a->next->prv=NULL;
        head= a->next;
        delete a;
        sz--;
    }

    //PopBack
    void PopBack()
    {
        if(sz==0)
            return;
        sz--;
        if(sz==1)
        {
            delete head;
            head=NULL;
            tail=NULL;
            return;
        }
        node<t>* a=tail;
        a->prv->next=NULL;
        tail= a->prv;
        delete a;
    }
    //front funciton
    t Front()
    {
        if(sz==0)
        {
            t a;
            return a;
        }
        return head->data;
    }
    //back funtion
    t Back()
    {
        {
            t a;
            return a;
        }
        return tail -> data;
    }
    //size
    int Size()
    {
        return sz;
    }
};
int main()
{
    FAST;
    dequeue<int> d;

    d.PushBack(1);
    d.PushFront(20);
    d.PushBack(4);

    cout<<d.Front();
    return 0;
}

