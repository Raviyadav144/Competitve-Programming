#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define mod 1000000007
ll gcd( ll a, ll b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    while(n--)
    {
    	ll a , b;
    	cin >> a >> b;
    	if(a==b)
    	{
    		cout << 0 << " "<< 0 <<endl;
    		continue;
    	}
    	else if (a-b==1 || b-a==1)
    	{
    		cout << 1 << " " << 0 << endl;
    		continue;
    	}
    	else
    	{	ll gc = gcd(a,b);
    		ll min = 0;
    		if(a>b)
    		{
    			if((a+gc)%(b+gc)==0)
    				min = b+gc;
    			else
    				min = b-gc
    		}
    	}
    }

}



