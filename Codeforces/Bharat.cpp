#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

ll mod = 1000000007;

ll chefora(ll l)
{	ll al = 0;
	if(l<=9)
	{
		al=l;
		
	}
	else
		{
			al+=((l%10)*10);
			al+=((l/10)*100 + (l/10));
			
		}
	return al;
}

 ll power(ll a , ll b)
 {
 	ll result =1;
 	while(b>0)
 	{
 		if(b&1)
 			result=((result) *(a))%mod;
 		
 		a=((a)*(a))%mod;
 		b>>=1;
 	}
 	
 	return result;
 }

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int l , r;
		cin >> l >> r;
		ll al = chefora(l);
		ll ai = chefora(l+1);
		ll al_power = power(al,ai);
		for(int i = (l+2);i<=r;i++)
		{
			ll chef = chefora(i);
			ll diff = chef-ai;
			al_power = al_power*(al_power%mod*(power(al,diff))%mod)%mod;
			ai = chef;

		}
		cout << al_power << endl;

	}
}


