#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)

bool comp(pair<int,int> &p1 , pair<int,int> &p2)
{
	
	return p1.second > p2.second;
}

int main() 
{	
	int n;
	cin >> n;
	int n1 = n;
	if(n==1)
	{
		cout << "YES" << endl;
		return 0;
	}

	unordered_map <int,int> m;
	while(n--)
	{
		int a;
		cin >> a;
		m[a]++;
	}

	vector <pair<int,int>>v;
	fora(e,m)
	{
		v.push_back(e);
	}

	sort(all(v),comp);
	auto it = v.begin();
	int val = (*it).second;
	if(n1&1)
	{
		if(val >((n1/2)+1) )
		{
			cout << "NO" << endl;
			return 0;
		}
		cout << "YES";
		return 0;
	}
	else
	{
		if(val > (n1/2))
		{
			cout << "NO" << endl;
			return 0;
		}
		cout << "YES" << endl;

	}
}
