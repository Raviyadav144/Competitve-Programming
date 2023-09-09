#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)


int gcd(ll a,ll b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

// Eulers Totient function from 1 to n using sieves
int main()
{	
		ll n = 200000;
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

		euler[0]=1;
		for(int i=1;i<=n;i++)
		{
			euler[i]+=euler[i-1];
		}
		
		while(true)
		{

				ll val;
				cin >> val;
				if(val ==0)
					return 0;
				if(val==1)
				{
					cout << "0/1" << endl;
					continue;
				}
				if(val==2)
				{
					cout << "1/1" << endl;
					continue;

				}
				ll vald;
				int d = lower_bound(all(euler),val)-euler.begin();
				vald = euler[d];

				ll it = vald-val;
				if(it==0)
					{
						cout << (d-1) << '/' << d << endl;
						continue;
					}
				it = val-euler[d-1];
				ll count =1;
				ll req;
				ll d1 =d;
				if(it==1)
				{
					cout << 1 << "/" << d << endl;
					continue;
				}
				
					
					for(int i =2;i<=d;i++)
					{		
							if(gcd(i,d)==1)
							{
								count++;
							}
							if(count == it)
							{
								req = i;
								break;
							}
					}
				
			cout << req << "/" << d1 << endl;
		}
}