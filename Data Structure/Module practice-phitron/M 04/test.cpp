#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 50;

int t, n;
int a[MAXN + 5];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;


    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool is_possible = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] == a[i])
            {
                is_possible = false;
                break;
            }
        }

        if (!is_possible)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
