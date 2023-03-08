//Topic---> Adjacency Matrix
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nline "\n"
#define ll long long int
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE

	// For getting input from input.txt file
	freopen("Input.txt", "r", stdin);

	// Printing the Output to output.txt file
	freopen("Output.txt", "w", stdout);

#endif

	// n = #of nodes

	FAST;
	int nodes = 4; //tcO(1) sc = same
	int matrix[nodes][nodes] = {}; //needs to be blank tcO(n^2)


	matrix[0][1] = 1; //tcO(1)
	matrix[1][0] = 1;
	matrix[1][2] = 1;
	matrix[2][1] = 1;
	matrix[2][3] = 1;
	matrix[3][2] = 1;
	matrix[3][1] = 1;
	matrix[1][3] = 1;

	//tcO(n^2) sc = same
	for (int i = 0; i < nodes; i++)
	{
		for (int j = 0; j < nodes; j++)
		{
			cout << matrix[i][j] << " " ;
		}
		cout << nline;
	}

	return 0;
}

/*
TC = O(n^2)
SC = O(n^2)

*/