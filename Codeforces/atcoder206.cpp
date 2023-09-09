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
	ll n;
	cin >> n;
	unordered_map <ll,ll> m;
	forn(i,0,n)
	{
		ll a;
		cin >> a;
		m[a]++;
	}
	ll ans = (n*(n-1))/2;
	ll diff =0;

	fora(e,m)
	{
		if(e.second > 1)
		{
			diff+=(((e.second)*(e.second-1))/2);
		}
	}

	
	
	ans-=(diff);
	cout << ans << endl;
}
