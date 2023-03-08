#include<bits/stdc++.h>
using namespace std;


//stack using dynamic array
class Stack
{
public:

    int *a;
    int stack_size;
    int cap;
    Stack()//constructor
    {
        a = new int[1];
        cap = 1;
        stack_size = 0;
    }

    //Makes the array cap * 2
    void increase_size()
    {
        int *tmp;
        tmp = new int[cap*2];
        for(int i=0;i<cap;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        delete []tmp;//deleting temp array
        cap = cap*2;//increase two times bigger than before
    }

    //add an element in the stack. O(1)
    void push(int val)
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
        a[stack_size - 1] = 0;
        stack_size-=1;
    }

    //return the top element form the stack
    int top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty.\n";
            return -1;
        }
        return a[stack_size-1];
    }
};

int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    cout<<st.top()<<endl;
    st.push(5);
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    return 0;
}
