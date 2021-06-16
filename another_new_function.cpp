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
		ll n = 2000000;
		vector <ll> euler(n+1);

		for(int i =0;i<=n;i++)
		{
			euler[i]=i;
		}
		for(int i =2;i<=n;i++)
		{
			if(euler[i]==i)
			{
				for(int j=i;j<=n;j+=i)
				{
					euler[j]-=(euler[j]/i);
				}
			}
		}

	
	
		ll a ,b;
		a=2;
		b=2000000;
		cout << euler[2] << endl;
		
		for(int i=3;i<=b;i++)
		{	
			euler[i]=euler[euler[i]]+1;
		}
		
		ll m;
		cin >> m;
		while(m--)
		{
			ll c,d;
			cin >> c >> d;
			ll sum = 0;
			for(int i=c;i<=d;i++)
			{
				sum+=(euler[i]);
			}
			cout << sum << endl;
		}
		
}