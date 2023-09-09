#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string




int main()
{
	int n;
	cin >> n;
	map <char , vector<ll>> m1;
	

	forn(i,0,2*n)
	{
		int a;
		char b;
		cin >> a >> b;
		
		m1[b].push_back(a);
		
		
	}
	
	str bc;

	for(auto &e : {'R','G','B'})
	{	

		if(m1[e].size()%2!=0)
		{	
			sort(all(m1[e]));
			bc+=e;
		}
		
	}
	

	if(bc.size()==0)
	{
		cout << 0;
		return 0;
	}
	float dis = INFINITY;
	for(long unsigned i=0; i <m1[bc[0]].size() ; i++)
	{
		for(long unsigned j=0;j<m1[bc[1]].size();j++)
		{
			if(abs(m1[bc[0]][i] - m1[bc[1]][j]) < dis)
				dis = abs(m1[bc[0]][i] - m1[bc[1]][j]);
		}
	}

	cout << dis;
}