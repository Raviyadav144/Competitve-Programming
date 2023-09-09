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
	int n ;
	cin >> n;
	while(n--)
	{
		int a;
		cin >> a;
		ll sum=0;
		for(int i=0;i<a;i++)
		{
			int b;
			cin >> b;
			sum+=b;
		}
		if(sum==a)
		{
			cout << 0 << endl;
			continue;
		}
		if(sum<=1)
			{
				cout << 1 << endl;
				continue;
			}
		if(sum>a)
			cout << sum-a << endl;
		else
			cout << 1 << endl;

	}
}
