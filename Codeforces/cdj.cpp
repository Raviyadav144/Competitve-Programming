#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

int dTob(int n)
{
    string dec;
    for (int i = 10; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            dec+= "1";
        else
            dec+="0";
    }
    if(dec[dec.size()-1]=='1')
    	return 1;
    else 
    	return 0;
}
 
    
    

int main()
{		
	int t;
	cin >> t;
	while(t--)
	{
		int a;
		cin >> a;
		map<int,vector<int>>m;
		forn(i,0,a)
		{	
			int b;
			cin >> b;
			m[dTob(b)].push_back(b);
		}
		
		int odd =0;
		int even =0;
		int abc;
		if(a%2!=0)
			abc=a+1;
		else abc=a;
		vector <int> v;
		forn(i,0,abc)
		{
			if(i%2==0)
			{
				v.push_back(m[0][odd]);
				odd++;
			}
			else
			{
				v.push_back(m[1][even]);
				even++;
			}
		}
		
		for(int i=0;i<v.size();i++)
		{
			if(a&2!=0 && i==v.size()-2)
				continue;
			cout << v[i] << " ";
		}
		cout << endl;
	}

}
