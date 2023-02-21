#include<bits/stdc++.h>
using namespace std;
//TC 0(n)
int main()
{
    int n;
    cin >> n;
    queue<string>q;
    q.push("1");

    for(int i = 1; i <= n; i++ )
    {
        cout << "Binary Representation of "<< i << ": " << q.front() << "\n";
        string tmp = q.front();
        q.pop();
        q.push(tmp + "0");
        q.push(tmp + "1");

    }


    return 0;
}
