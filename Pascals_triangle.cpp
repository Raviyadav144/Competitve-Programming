#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)


// Combinatorics
//nCr
int main()
{		
	int n ;
	cin >> n;
	int C[n+1][n+1];
	C[0][0]=1;
	for(int i =1;i<=n;i++)
	{
		C[i][0] = C[i][i] = 1;
		for(int j=1;j<i;j++)
		{
			C[i][j] = C[i-1][j-1] + C[i-1][j];
		}
	}
	
	forn(i,1,n+1)
	{
		cout << C[n][i] <<  " ";
	}
}