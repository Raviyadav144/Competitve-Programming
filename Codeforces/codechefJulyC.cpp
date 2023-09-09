#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

int ans=0;
map<int , int>m;
void binaryOneCount(int a,int k)
{	
	int count=0;
	while(a)
	{
		if(a&1)
			m[count]++;
		if(m[count]>=k)
		{
			m[count]-=k;
			ans++;

		}
		count++;
		a >>= 1;
	}
}
int main()
{
  int t ;
  cin >> t;
  while(t--)
  {
  	int n,k;
  	cin >> n >> k;
  	
  	for(int i =0;i<n;i++)
  	{
  		int a ;
  		cin >> a;
  		binaryOneCount(a,k);

  	}
  	for(auto &e :m)
  		{
  			if(e.second!=0)
  				ans++;
  		}

  	cout << ans << endl;
  	m.clear();
  	ans =0;
  	
  } 
}




