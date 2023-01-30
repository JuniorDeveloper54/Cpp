#include<bits/stdc++.h>
using namespace std;


//Template based stack using dynamic array
template <class T>

class Stack
{
public:

    T *a;
    int stack_size;
    int cap;
    Stack()//constructor
    {
        a = new T[1];
        cap = 1;
        stack_size = 0;
    }

    //Makes the array cap * 2
    void increase_size()
    {
        T *tmp;
        tmp = new T[cap*2];
        for(int i=0; i<cap; i++)
            tmp[i] = a[i];
        swap(a,tmp);
        delete []tmp;//deleting temp array
        cap = cap*2;//increase two times bigger than before
    }

    //add an element in the stack. O(1)
    void push(T val)
    {
        if(stack_size+1 > cap)
        {
            increase_size();
        }

        stack_size+=1;
        a[stack_size - 1] = val;
        //last e dhap kore value ta bosai dilam
    }

    //Delete the top most element from the stack. O(1)
    void pop()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty.\n";
            return;
        }

        stack_size-=1;
    }

    //return the top element form the stack
    T top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty.\n";
            //assert(false);
            T a;
            return a;
        }
        return a[stack_size-1];
    }
};

int main()
{
    Stack<double>st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.8);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();


    Stack<char> stt;
    stt.push('a');
    stt.push('g');
    stt.push('u');
    cout<<stt.top()<<endl;
    stt.pop();
    cout<<stt.top()<<endl;
    stt.pop();
    cout<<stt.top()<<endl;
    stt.pop();
    cout<<stt.top()<<endl;
    return 0;
}
