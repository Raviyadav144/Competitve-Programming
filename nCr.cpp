#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)


// Combinatorics
int main()
{		
	int n,k;
	cin >> n>> k;
	double res=1;
	for(int i=1;i<=k;i++)
	{
		res= res*(n-k+i)/i;
	}
	cout << (int)(res+0.01) << endl;
}