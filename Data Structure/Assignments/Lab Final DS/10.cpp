#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }

    cin >> m;
    set<int> s2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s2.insert(x);
    }

    set<int> s3;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));

    for (auto it = s3.begin(); it != s3.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}

