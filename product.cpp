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
	string a , b;
	while(cin >> a >> b)
	{	
		if(a=="0" || b=="0")
		{
			cout << 0 << endl;
			continue;
		}
		int size_a = a.length();
		int size_b = b.length();
		
		vector <int> pro (size_a+size_b);
		reverse(all(a));
		reverse(all(b));
		for(int i=0;i<a.size();++i)
		{	int count =i;
			for(int j=0;j<b.size();++j)
			{
				int mul = (a[i]-'0')  * (b[j]-'0');
				pro[count]+=(mul%10);
				if(mul>9)
					pro[count+1]+=(mul/10);
				if(pro[count]>9)
				{
					int val = pro[count];
					pro[count]%=10;
					pro[count+1]+=(val/10);
				}
				count++;
			}
		}
		int i = pro[pro.size()-1]==0 ? pro.size()-2 : pro.size()-1;
		

		for(i;i>=0;i--)
		{
			cout << pro[i];
		}
		cout << endl;
	}
}