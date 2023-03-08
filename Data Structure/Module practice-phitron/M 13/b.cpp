//bracket problem vola
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    int ans=0;
    if(s.size()==1)
    {
        cout<<0;
    }
    else
    {
        if(s[0]==')' && s[s.size()-1]=='(')
        {
            for(int i=1; i<s.size()-2; i++)
            {
                if(s[i]=='(')
                    ans++;
//                if(s[i]==')')
//                    break;
            }
            cout<<ans;
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='(')
                    ans++;
                if(s[i]==')')
                    break;
            }
            cout<<ans*2;
        }

    }

    return 0;
}
