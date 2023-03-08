#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int prc(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if(ch=='/' ||ch=='*')
        return 2;
    return 0;
}

bool Operand(char ch)
{
    return (ch >= '0' && ch <= '9');
}

int main()
{
    FAST;
    string s;
    cin>>s;

    stack<char> stackk;
    string res="";

    for (int i = 0; i< s.size(); i++)
    {
        char now=s[i];
        if (Operand(now))
        {
            res +=now;
        }
        else if (s[i] == '(')
        {
            stackk.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while(stackk.empty()==false && stackk.top()!='(')
            {
                res += stackk.top();
                stackk.pop();
            }
            stackk.pop();
        }
        else
        {
            while(stackk.size()&&prc(stackk.top())>= prc(now))
            {
                res+= stackk.top();
                stackk.pop();
            }
            stackk.push(now);
        }
    }

    while (stackk.size())
    {
        res+=stackk.top();
        stackk.pop();
    }

    string st = res;

    stack<int> num;
    int num1,num2,num3;

    for(int i=0; i<st.size(); i++)
    {
        if(st[i]!='+'&&st[i]!='-'&&st[i]!='*'&&st[i]!='/')
        {
            int a = st[i]-48;
            num.push(a);
        }
        if(!(st[i]!='+'&&st[i]!='-'&&st[i]!='*'&&st[i]!='/'))
        {
            num2=num.top();
            num.pop();
            num1=num.top();
            if(st[i]=='+')
            {
                num3=num1+num2;
            }
            else if(st[i]=='-')
            {
                num3=num1-num2;
            }
            else if(st[i]=='*')
            {
                num3=num1*num2;
            }
            else if(st[i]=='/')
            {
                num3=num1/num2;
            }
            num.pop();
            num.push(num3);
        }
    }
    cout<<"Answer is: " << num3;
    return 0;
}
