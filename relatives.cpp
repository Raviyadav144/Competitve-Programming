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

		
		ll n1 =n;
		ll result =n;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				
				while(n%i==0)
					n/=i;
				result-=(result/i);
			}
		}
		if(n>1)
			result-=(result/n);
		
		cout << result << endl;
	
}