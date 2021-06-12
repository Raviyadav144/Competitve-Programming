#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)



//count no of prime divisors of all numbers upto n
int main() 
{	
	int n;
	cin >> n;
	int count =0;
	vector <int> primeDivisorCount(n,0);
	for(int i =2;i*i<=n;i++)
	{
		if(primeDivisorCount[i]==0)
		{
			count++;
			for(int j =i*i;j<=n;j+=i)
			{
				primeDivisorCount[j]++;
				count++;
			}
		}
	}
	cout << count << endl;
	cout << primeDivisorCount[17] << endl;
}
