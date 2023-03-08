#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> idx;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (idx.find(s) == idx.end())
        {

            cout << "-1" << endl;
        }
        else
        {
            cout << idx[s] << endl;
        }

        idx[s] = i;
    }

    return 0;
}

