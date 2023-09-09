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
	ios::sync_with_stdio(false);
   cin.tie(0);
   int t;
   cin >> t;
   while(t--)
   {
   	int n ;
   	cin >> n;
   	fora(e,v)
   	cin >> e;
   	int mi = *min_element(all(v));
   	int ma = *max_element(all(v));
   	forn(i,0,n)
   	{
   		if(v[i]==ma)
   		{
   			v[i]=min;
   			break;
   		}
   	}
   	ll sum = 0;
   	forn(i,0,n)
   	{
   		sum+=v[i];

   	}
   	cout << sum << endl;
   }

}   
	   
    
		
		





