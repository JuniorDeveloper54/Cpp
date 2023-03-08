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
    //constructor
    LinkedList()
    {
        head = NULL;
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
};


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);


    l.Traverse();

    cout<<"10 is found at "<<l.SearchDistinctValue(10)<<"\n";

    cout<<"5 is found at "<<l.SearchDistinctValue(5)<<"\n";

    cout<<"30 is found at "<<l.SearchDistinctValue(30)<<"\n";

    l.SearchAllValue(30);



    return 0;
}
