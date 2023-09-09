#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)

// Eulers Totient function from 1 to n using sieves
int main()
{
	ll n;
	cin >> n;
	vector <ll> phi(n+1);
	for(ll i=0;i<=n;i++)
	{
		phi[i]=i;
	}

	for(int i=2;i<=n;i++)
		{
			if(phi[i]==i)
			{
				for(int j=i;j<=n;j+=i)
				{
					phi[j]-=(phi[j]/i);
				}
			}
		}

	fora(e,phi)
	cout << e << " ";
}