#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"




int main()
{	
		
	int t;
	cin >> t;
	while(t--)
	{
		int l , h;
		cin >> l>> h;
		string a;
		cin >> a;
		ll count =0;
		bool check = false;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]=='0')
				count++;
			
			if(a[i]=='1' && count >=h)
			{
				
				check = true;
				break;
			}
			if(count >=h)
				{	check = true;
				break;
			}
			if(a[i]=='1' && count >=h/2 && i!=0)
			{	
				h = (2*(h-count));
				
				count =0;

			}
		}
		if(check == true || count == h)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;

	}

}