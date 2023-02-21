#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    //enqueue O(1)
    q.push(5);
    q.push(15);
    q.push(10);

    //empty O(1)
    cout << q.empty() << "\n";


    //dequeue O(1)
    q.pop();

    //size O(1)
    cout << q.size() << "\n";

    //front O(1)
    cout << q.front() << "\n";

    //character based
    queue<char>q2;

    q2.push('s');
    q2.push('h');
    q2.push('a');

    cout << q2.size() << " " << q2.front() << "\n";

    return 0;
}
