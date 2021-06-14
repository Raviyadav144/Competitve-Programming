#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)



//prime factorization using spf
int main() 
{	
	int n;
	cin >> n;
	vector <bool> isPrime(n+1,true);
	ll result =n;
	vector<int> primes;
	isPrime[0]=isPrime[1]=false;

	for(int i =2;i<=n;i++)
	{
		if(isPrime[i])
		{	primes.push_back(i);
			for(int j =i*i;j<=n;j+=i)
				{	
					   isPrime[j]=false;			
				}

		}
		
	}


	fora(e,primes)
	{
		if(n%e==0)
		{
			result-=(result/e);
			while(n%e==0)
			{	
				n/=e;
			}
		}
	}
	cout << result;
}
