#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)



//prime factorization
int main() 
{	
	int n;
	cin >> n;
	vector <int> spf(n+1,0);
	for(int i=2;i*i<=n;i++)
	{
		if(spf[i]==0)
		{	spf[i]=i;
			for(int j =i*i ; j<=n ;j+=i)
			{
				if(spf[j]==0)
					spf[j]=i;
			}
		}
	}
	

	while(n>1)
	{
		cout << spf[n] << endl;
		n/=spf[n];

	}
}
