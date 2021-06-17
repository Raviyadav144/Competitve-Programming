#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)


//using sieves to precompute all the divisors
int gcd(int a , int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int factors(int n)
{	int count =0;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			int oth_div = n/i;
			if(oth_div!=i)
				count++;
		}
	}
	return count;
}
int main()
{	
	int m ;
	scanf("%d",&m);
	while(m--)
	{
		int a , b;
		scanf("%d %d",&a,&b);
		int gc = gcd(a,b);

		printf("%d\n",factors(gc));

	}
		
}