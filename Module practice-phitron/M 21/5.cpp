#include<bits/stdc++.h>
using namespace std;

template<class T>
class node
{
public:
    T data;
    node *nxt;
    node *prv;

};
template<class T>
class DoublyLinkedList
{
public:
    node<T> *head;//important line
    int sz;
    DoublyLinkedList()//constructor
    {
        head=NULL;
        sz=0;
    }
    //create a new node with the given data and returns it.
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //inserting value at Head
    void InsertAtHead(T data)//TC=O(1)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;//assigning head in variable a;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //delete from head
    void DeleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;
        if(b!=NULL)
            b->prv = NULL;
        head = b;
        sz--;
    }

    //returns the size of LinkedList
    int getSize()//TC=O(1)
    {
        return sz;
    }
};

//Stack using doubly linked list
template<class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;

    Stack()
    {

    }

    T top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack faka vai!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack e kicu nai vai!\n";
            return;
        }
        dl.DeleteAtHead();
    }

    int getSize()
    {
        return dl.getSize();
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //sorting a using another stack
    Stack<int>st;
    st.push(5);
    st.push(2);
    st.push(7);
    st.push(8);
    st.push(3);

    Stack<int>tmp;
    while(st.getSize()>0)
    {
        int t = st.top();
        st.pop();
        while(tmp.getSize() > 0)
        {
            if(tmp.top() <= t)
            {
                break;
            }
            st.push(tmp.top());
            tmp.pop();
        }
        tmp.push(t);
    }
    swap(st,tmp);

    //printing top elements, after that st will be empty
    while(st.getSize() > 0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }



    return 0;
}
