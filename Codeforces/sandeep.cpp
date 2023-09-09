#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a , pair <int ,int> b)
{
	if((a.first + a.second) == (b.first + b.second))
		return (a.first  < b.first);
	else
		return (a.first + a.second) < (b.first + b.second);
}


vector<pair<int,int>> check(vector<pair<int,int>> vv  )
{
	sort(vv.begin() , vv.end() , comp);
	return vv;
}
	


int main()
{
	int n ;
	cin >> n;

	while(n--)
	{
		int a; 
		cin >>a;
		vector <pair<int,int>> v;
		for(int i =0 ; i<a; i++)
		{
			int a , b;
			cin >> a >> b;
			v.push_back({a,b});
		}
		vector<pair<int,int>> vv = check(v);
		for(auto e:vv)
		{
			auto it = find(v.begin(), v.end(), e);
			int index = distance(v.begin(), it);
			cout << index << " ";
		}
	}
}