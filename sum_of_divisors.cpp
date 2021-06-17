#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)


//using sieves to precompute all the divisors

int main()
{	
	int n = 500000;
	vector <int> divisorSum(n+1);
	for(int i=1;i*i<=n;i++)
	{	
		

		for(int j=i;j<=n;j+=i)
		{
			divisorSum[j]+=i;
			int other_div = (divisorSum[j]/i);
			if(other_div!=i)
			{
				divisorSum[j]+=other_div;
			}

		}
	}
	

	int m;
	scanf("%d",&m);
	while(m--)
	{
		int a;
		scanf("%d",&a);
		printf("%d\n",(divisorSum[a]-a));
	}	
}