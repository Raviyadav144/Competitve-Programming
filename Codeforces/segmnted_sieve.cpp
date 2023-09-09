#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)

vector <int> sieves(ll n)
{	ll max = sqrt(n);
	vector <char> isPrime(max+1,true);
	isPrime[0] = isPrime[1]= false;
	vector <int> primes;
	for(int i =2 ; i*i <=n; i++)
	{
		if(isPrime[i])
		{	primes.push_back(i);
			for(int j = i*i ; j<=max; j+=i)
				isPrime[j] = false;
		}
	}
	
	return primes;
}

void printPrimes(ll l , ll r )
{
	vector <int> primes = sieves(r);
	vector <char> isPrime(r-l+1 , true);
	for(int i =0 ; primes[i]*(ll)primes[i]<=r;i++)
	{	
	 	int base = (l/primes[i])*primes[i];
	 	if(base < l)
	 		base +=primes[i];

	 	for(int j = base ; j<=r ; j+=primes[i])
	 	{
	 		
	 			isPrime[j-l] = false;
	 	}
	 	if(base == primes[i])
	 		isPrime[base-l]=true;
	}
	int val = 1;
	int count = 0;
	for(int i =0; i<(r-l+1) ;i++)
	{
		if(isPrime[i])
		{
				count++;
			
			if(count == val)
			{
				printf("%lld\n",i+l);
				val+=100;
			}
		}
	}
}
int main() 
{
	int l,r;
	cin >>l>>r;
	printPrimes(l,r);
	
		
	
}