#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;

//stack using static array
class Stack
{
public:

    int a[MAX_SIZE];
    int stack_size;
    Stack()//constructor
    {
        stack_size = 0;
    }

    //add an element in the stack. O(1)
    void push(int val)
    {
        if(stack_size+1 > MAX_SIZE)
        {
            cout<<"Stack is full!\n";
            return;
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
