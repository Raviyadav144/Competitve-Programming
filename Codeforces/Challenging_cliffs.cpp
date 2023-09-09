#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a;
		cin >> a;
		vector <int> cliff(a);
		for(auto &e:cliff)
		{
			cin >> e;
		}
		int start , stop;
		sort(all(cliff));
		for(int i =1;i<a;i++)
		{
			if(cliff[i]==cliff[i-1])
			{
				start = cliff[i];
				stop = cliff[i]''
			}
		}
		
	}
}
