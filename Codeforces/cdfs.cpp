#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)

int gcd(int a , int b)
{
	if(b == 0)
		return a;
	return gcd(b, a%b);
}
int main() 
{
	int n ;
	cin >> n;
	while(n--)
	{
		int a;
		cin >> a;
		vi(v,a);
		fora(e,v)
		cin >> e;
		int count =0;
		sort(all(v));
		reverse(all(v));
		forn(i,0,a-1)
		{
			forn(j,i+1,a)
			{
				if(gcd(v[i],2*v[j]) >1)
					count +=1;
			}
		}

		cout << count << endl;
	}	
}
