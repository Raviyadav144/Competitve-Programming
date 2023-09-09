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
	
		int step , mod;
		while(cin >> step >> mod)
		{
		int val = 0;
		bool task = false;
		vector <bool> v(mod,false);

		for(int i =0;i<mod ;i++)
		{
			int gen = val%mod;
			if(v[gen]==true)
			{	
				task = true;
				break;
			}
			v[gen]= true;
			val = gen;
			val+=step;

		}
		if(task == true)
		cout << setw(10) << step << setw(10) <<mod << "     " << "Bad Choice" << endl<<endl;
		else	
		cout << setw(10) << step << setw(10) << mod << "     " << "Good Choice" << endl << endl;
		
	}
}
