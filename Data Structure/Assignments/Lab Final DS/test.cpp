#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  n;
    cin>>n;
    long long int os=0;
    long long int es=0;
    for(int i=n.size()-1;i>=0;i--)
    {
        int digit=n[i]-'0';
        if(i%2==0)
        {
            es+=digit;
        }
        else
        {
            os+=digit;
        }
    }
    long long int diff=abs(os-es);
    if(diff%11==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
