#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, c = 0;
    cin >> n;

    int children[5] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        children[s]++;
    }

    c += children[4];
    c += children[3];
    children[1] = max(0, children[1] - children[3]);
    c += (children[2] * 2 + children[1]) / 4;
    if ((children[2] * 2 + children[1]) % 4 != 0) c++;

    cout << c << "\n";
    return 0;
}

