#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool Operand(char ch)
{
    return (ch >= 'a' && ch <= 'z');
}

int Precision(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if(ch=='/' ||ch=='*')
        return 2;
    return 0;
}
int main()
{
    FAST;
    string s;
    cin>>s;

    stack<char> stackk;

    string result="";
    for (int i = 0; i< s.size(); i++)
    {
        char now = s[i];
        if (Operand(now))
        {
            result += now;
        }
        else if (s[i] == '(')
        {
            stackk.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while(stackk.empty() == false && stackk.top() != '(')
            {
                result += stackk.top();
                stackk.pop();
            }
            stackk.pop();
        }
        else
        {
            while(stackk.size() && Precision(stackk.top()) >= Precision(now))
            {
                result += stackk.top();
                stackk.pop();
            }
            stackk.push(now);
        }
    }
    while (stackk.size())
    {
        result += stackk.top();
        stackk.pop();
    }
    cout <<result<<"\n";
    return 0;
}
