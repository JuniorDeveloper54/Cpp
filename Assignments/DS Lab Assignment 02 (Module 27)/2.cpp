#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template<class T>
class node
{
public:
    T data;
    node* next;
};

template<class T>
class TStack
{
public:
    node<T>* head;
    int sz;
    TStack()
    {
        head = NULL;
        sz = 0;
    }
    node<T>* CreateNewNode(T valuee)
    {
        node<T>* newnode = new node<T>;
        newnode -> data = valuee;
        newnode -> next = NULL;
        return newnode;
    }
    void InsertAtHead(T value)
    {
        node<T>* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            sz++;
            return ;
        }
        a -> next = head;
        head = a;
        sz++;
    }
    void pop()
    {
        if(head == NULL)
            return;
        node<T>* a = head;
        head = a -> next;
        delete a;
        sz--;
    }
    T top()
    {
        if(sz == 0)
        {
            cout << "It's empty";
            T a;
            return a;
        }
        return head -> data;
    }
    int getsize()
    {
        return sz;
    }
};
int main()
{
    FAST;

    TStack<int> s;
    s.InsertAtHead(11);
    s.InsertAtHead(2);
    s.InsertAtHead(3);
    s.InsertAtHead(40);

    cout<<"Current size : "<<s.getsize()<<"\n";
    s.pop();
    s.pop();
    s.pop();

    cout<<"After popping Current size : "<<s.getsize()<<"\n";
    cout<<"Top element is : "<<s.top()<<"\n";
    return 0;
}
