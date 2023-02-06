#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    FAST;

    string s;
    cin>>s;

    stack<char>st;
    for(int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if(now == '(' || now == '{' || now == '[')
        {
            st.push(now);
        }
        else
        {
            if(st.empty())
            {
                cout<<"NO\n";
                return 0;
            }
            if(now == ')' and st.top() == '(')
            {
                st.pop();
            }
            else if(now == '}' and st.top() == '{')
            {
                st.pop();
            }
            else if(now == ']' and st.top() == '[')
            {
                st.pop();
            }
            else{
                cout<<"NO\n";
                return 0;
            }
        }
    }

    if(st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

/*
solution in Befunge Language

<|_^#%2_v#:-5-5~
,>#,"NO"_# _"SEY",,,@
v<1<


https://codeforces.com/submissions/______M______/page/50


*/

