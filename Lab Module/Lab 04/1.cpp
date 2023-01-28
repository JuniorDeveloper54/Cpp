#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;

};
class DublyLinkedList
{
public:
    node *head;
    int sz;
    DublyLinkedList()
    {
        head=NULL;
        sz=0;
    }
    //create a new node with the given data and returns it.
    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //inserting value at Head
    void InsertAtHead(int data)//TC=O(1)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;//assigning head in variable a;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    //printing linked-list
    void Traverse()//TC=O(n)
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            \
            a = a->nxt;
        }
        cout<<"\n";
    }
    //data insertion at any index
    void Insert(int index, int data)//TC=O(n)
    {
        if(index>sz)
            return;
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index=0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }
    //delete the given index
    void Delete(int index)
    {
        if(index>=sz)
        {
            cout<<index<<"dose not exit"<<endl;
            return;
        }
        node *a = head;
        int cur_index=0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b != NULL)
        {
            b->nxt = c;
        }
        if(c != NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;

    }

    //returns the size of LinkedList
    int getSize()//TC=O(1)
    {
        return sz;
    }
};



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    DublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);

    dl.Traverse();

    dl.Insert(2,100);
    dl.Traverse();

    return 0;
}
