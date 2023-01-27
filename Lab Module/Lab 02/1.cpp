#include<bits/stdc++.h>
using namespace std;
//bubble sort here
/*
tc = O(n^2)
mc = O(n)
*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //n ta passs
    for(int pass=0; pass<n; pass++)
    {
        int last = n-1-pass;
        bool sorted = true;//optimization

        for(int j=0; j<=last-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sorted = false;
            }
        }
        if(sorted)
            break;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
/*
10
9 8 6 10 4 1 2 3 5 7

*/
