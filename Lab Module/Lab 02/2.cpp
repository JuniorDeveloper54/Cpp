#include<bits/stdc++.h>
using namespace std;


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
    for(int i=1; i<n; i++)//i=1 cz first element is already sorted
    {
        int idx = i;
        while(idx >= 1)
        {
            if(a[idx-1] > a[idx])
            {
                swap(a[idx-1],a[idx]);
                idx--;
            }
            else
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}


/*

7
3 4 1 2 7 6 1

*/
