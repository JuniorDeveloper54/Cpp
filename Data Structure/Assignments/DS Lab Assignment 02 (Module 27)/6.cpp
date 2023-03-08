#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class node
{
public:
    char data;
    node* next;
    node* prv;
};
class Dequeue
{
public:
    node* head;
    node* tail;
    int sz;

    Dequeue()
    {
        sz = 0;
        head = NULL;
        tail = NULL;
    }
    node* CreateNewNode(char value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode -> next = NULL;
        newnode -> prv = NULL;
        return newnode;
    }

    void PushBack(int value)
    {
        node* a = CreateNewNode(value);
        if(sz == 0)
        {
            head = a;
            tail = a;
        }
        tail -> next = a;
        a -> prv = tail;
        tail = a;
        sz++;
    }

    void PushFront(char value)
    {
        sz++;
        node* a = CreateNewNode(value);
        if(sz == 0)
        {
            head = a;
            tail = a;
            sz++;
            return;
        }
        a -> next = head;
        head -> prv = a;
        head = a;
        sz++;
    }

    void PopFront()
    {
        if(sz == 0)return;

        if(sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node* a = head;
        a -> next -> prv = NULL;
        head = a -> next;
        delete a;
        sz--;
    }

    void PopBack()
    {
        if(sz == 0)
            return;
        sz--;
        if(sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        node* a = tail;
        a -> prv -> next = NULL;
        tail = a -> prv;
        delete a;
    }

    int Size()
    {
        return sz;
    }
    char Front()
    {
        if(sz == 0)
            return '0';
        return head -> data;
    }
    char Back()
    {
        if(sz == 0)
            return '0';
        return tail -> data;
    }
};
int main()
{
    FAST;
    Dequeue d;
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++)
    {
        d.PushBack(s[i]);
    }
    int siz = d.Size();
    int n = siz/2;
    for(int i = 1; i <= n; i++)
    {
        if(d.Back() == d.Front())
        {
            d.PopBack();
            d.PopFront();
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}

