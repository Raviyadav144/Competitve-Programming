#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define unsigned_int long long
#define aunsigned_int(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

unsigned_int mod = 1000000007;

unsigned_int chefora(unsigned_int l)
{	unsigned_int al = 0;
	if(l<=9)
			al=l;
	else
		{
			al+=((l%10)*10);
			al+=((l/10)*100 + (l/10));
		}
	return al;
}

 unsigned_int power(unsigned_int a , unsigned_int b)
 {
 	unsigned_int result =1;
 	while(b>0)
 	{
 		if(a&1)
 			result=((result) *(a))%mod;
 		cout << result << endl;
 		a=((a)*(a))%mod;
 		b/=2;
 	}
 	
 	return result;
 }

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		unsigned_int l, r;
		cin >> l >>r;
		unsigned_int al = chefora(l) ;
		
		unsigned_int ans =1;
		for(int i=(l+1);i<=r;i++)
		{	unsigned_int ai = chefora(i);
			ans= ((ans)*((power(al,ai)))%mod);
			cout <<"ans "<< ans << endl;
			
			
		}
		cout << ans%mod << endl;

	}
}



