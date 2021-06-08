#include<bits/stdc++.h>

using namespace std;

bool sort_stu(pair<string, int>  &v1 , pair<string , int> &v2 )
{
	if(v1.second == v2.second)
		return v1.first < v2.first;
	else
		return v1.second > v2.second;
}

int main()
{
	int n ;
	cin >>n;
	vector <pair<string , int>> v;

	while(n--)
	{
		string s;
		int a;
		cin >>s >> a;
		v.push_back({s,a});
	}

	sort(v.begin() , v.end() , sort_stu);

	for(auto &it : v)
		cout << it.first << " " << it.second << endl;
}

