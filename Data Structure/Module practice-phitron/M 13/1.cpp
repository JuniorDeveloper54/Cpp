Is anything wrong in this code?
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nxt;
};

class LinkedList
{
public:
    Node *head;//first node ta koi ase setar trac rakhteci
    int sz;//M 12-2

    //constructor
    LinkedList()
    {
        head = NULL;
        sz=0;
    }
    //created a new node with data = value and nxt = NULL
    Node* CreateNewNode(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    //insert new value at head
    void InsertAtHead(int value)
    {
        sz++;
        Node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head=a;
            return;
        }
        //if head is not NULL
        a->nxt = head;
        head = a;

    }
    //insert new value at any index
    void InsertAtAnyIndex(int index, int value)
    {
        if(index<0 || index > sz)
            return;
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        Node *a = head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        sz++;
        Node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }



    //print the linked list
    void Traverse()
    {
        Node* a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    //search for a single value
    int SearchDistinctValue(int value)
    {
        Node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }

    //search all possible occurrence
    void SearchAllValue(int value)
    {
        Node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" is founded at index "<<index<<"\n";
            }
            a = a->nxt;
            index++;
        }
        //return -1;

    }
    //getting size of a linked list
    int getSize()
    {


        //>>O(1) use kre size
        return sz;

//        int sz = 0;
//        Node *a = head;
//        while(a!=NULL)      ***//eita O(n) e kaj kore
//        {
//            sz++;
//            a = a->nxt;
//        }
//        return sz;

    }

    //delete from head
    void DeleteAtHead()
    {
        if(head == NULL)
            return;
        sz--;
        Node *a = head;
        head= a->nxt;
        delete a;
    }

    //delete at any index
    void DeleteAnyIndex(int index)
    {
        if(index<0 || index > sz-1)
        {
            return;
        }
        if(index == 0)
        {
            DeleteAtHead();
            return;
        }
        Node *a = head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        sz--;
        Node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }
};


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    LinkedList l;

    //inserting in head
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(20);

//    //inserting in any index
//    l.InsertAtAnyIndex(1,100);
//    l.Traverse();

    //deleting from head
//    l.DeleteAtHead();
//    l.Traverse();
//
    //delete at any index
    l.DeleteAnyIndex(1);
    l.Traverse();



    return 0;
}
