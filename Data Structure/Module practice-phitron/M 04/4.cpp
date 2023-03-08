#include<bits/stdc++.h>
using namespace std;
/*
tc = O(n)
mc = O(n)
*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            cout<<"YES";
            return 0;//eikhane return 0 mane yes pailei code sesh        }
    }



    return 0;
}
