#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node*nxt;
    Node*prv;
};
class LinkedList
{
public:

    Node* head;
    Node* tail;
    LinkedList()
    {
        head=nullptr;
        tail=nullptr;

    }
    void insertHead(int value)
    {
        Node*newNode=new Node;
        newNode->value=value;
        newNode->nxt=head;
        newNode->prv=nullptr;
        if(head!=nullptr)
        {
            head->prv=newNode;
        }
        else
        {
            tail=newNode;
        }
        head=newNode;
    }
    void insertTail(int value)
    {
        Node* newNode=new Node;
        newNode->value=value;
        newNode->nxt=nullptr;
        newNode->prv=tail;
        if(tail!=nullptr)
        {
            tail->nxt=newNode;

        }
        else
        {
            head=newNode;
        }
        tail=newNode;
    }
    void insertMid(int value)
    {
        if(head==nullptr)
        {
            insertHead(value);
        }
        else
        {
            Node* slow=head;
            Node* fast=head->nxt;
            while(fast !=nullptr && fast->nxt!=nullptr)
            {
                slow=slow->nxt;
                fast=fast->nxt->nxt;
            }
            Node* newNode=new Node();
            newNode->value=value;
            newNode->nxt=slow->nxt;
            newNode->prv=slow;
            if(slow->nxt !=nullptr)
            {
                slow->nxt->prv=newNode;
            }
            else
            {
                tail=newNode;
            }
            slow->nxt=newNode;
        }
    }
    void print()
    {
        Node*current=head;
        while(current!=nullptr)
        {
            cout<<current->value<<" ";
            current=current->nxt;
        }
        cout<<endl;
    }
    void Merge(LinkedList a)
    {
        if(a.head==nullptr)
        {
            return;
        }
        if(head==nullptr)
        {
            head=a.head;
            tail=a.tail;
        }
        else
        {
            tail->nxt=a.head;
            a.head->prv=tail;
            tail=a.tail;
        }

    }


};
int main()
{
    LinkedList a;
    LinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);

    a.print(); // prints  0 1 3 5 10

    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);

    b.print(); // prints  9 10 30 50 100

    a.Merge(b);

    a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    b.print(); // prints  9 10 30 50 100

}
