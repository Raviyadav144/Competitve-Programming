#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

ll pow(ll a, ll b)
{	ll result =1;
	while(b>0)
	{	
		if(a&1)
			result*=a;
		a*=a;
		b/=2;
	}
	return result;
}



int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(0);	
	int n,q;
	cin >> n>>q;
	vector<ll> v(n+1);
	forn(i,1,n+1)
	cin >> v[i];
	while(q--)
	{
		int a;
		cin >> a;
		if(a==1)
		{
			ll b , c,d;
			cin >> b >> c >> d;
			forn(i,b,c+1)
			{
				v[i]+=(pow((d+i-b),2));
				
			}

		}
		else
		{
			int b;
			cin >> b;
			cout << v[b] << endl;
		}
	}
}