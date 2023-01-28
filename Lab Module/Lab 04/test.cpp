#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node*nxt;
    node*prv;
};
class DoublyLinkedList
{
public:
    node*head;
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
        sz=0;
    }
    node *CreateNewNode(int data)
    {
        node*newnode =new node;
        newnode->data=data;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }

    void InsertAtHead(int data)
    {
        sz++;
        node*newnode=CreateNewNode(data);
        if(head==NULL)
        {
            head= newnode;
            return;
        }
        node*a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;
    }
    void Traverse()
    {
        node*a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    void Insert(int index,int data)
    {
        if(index>sz)
        {
            return;
        }
        if(head==NULL)
        {
            InsertAtHead(data);
            return;
        }
        node*a=head;
        int cur_index=0;
        while(cur_index!=index-1)
        {

            a=a->nxt;
            cur_index++;
        }
        node*newnode=CreateNewNode(data);
        newnode->nxt=a->nxt;
        newnode->prv=a;
        node*b=a->nxt;
        b->prv=newnode;
        a->nxt=newnode;
        sz++;

    }
    void Delete(int index)
    {
        if(index>=sz)
        {
            return;
        }
        if(index>=sz)
        {
            cout<<index<<"dose not exit"<<endl;
            return;
        }
        node*a=head;
        int cur_index=0;
        while(cur_index !=index)
        {
            a=a->nxt;
            cur_index++;
        }
        node *b=a->prv;
        node *c=a->nxt;
        if(b!=NULL)
        {
            b->nxt=c;
        }
        if(c!=NULL)
        {
            c->prv=b;
        }
        delete a;
        if(index==0)
        {
            head=c;
        }
        sz--;

    }
    int getSize()
    {
        return sz;
    }
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node*a=head;
        int cur_index=0;
        while(cur_index!=sz-1)
        {
            a=a->nxt;
            cur_index++;

        }
        node*b=head;
        while(b!=NULL)
        {
            swap(b->nxt,b->prv);
            b=b->prv;
        }
        head=a;
    }

};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(5);
    dl.InsertAtHead(1);
    dl.Traverse();
    dl.Reverse();
    dl.Traverse();

    cout<<dl.getSize()<<"\n";

    return 0;
}
