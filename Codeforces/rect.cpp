#include<bits/stdc++.h>
using namespace std;


int rect(vector<int> x, vector <int> y)
{

	sort(x.begin() ,x.end());
	sort(y.begin() ,y.end());

	int maxl = x[x.size()-1] - x[0];
	int maxb = y[y.size()-1] - y[0];
	int max_ar = maxl * maxb;

	int mm = x[x.size()-1];
	int nn = y[y.size()-1];

	set<int> s1(x.begin() , x.end());
	set<int> s2(y.begin() , y.end());

	auto it = s2.end();
	--it;
	--it;
	int mm2 = *it;


	auto it1 = s1.end();
		--it1;
		--it1;
		int mm1 = *it1;

	int minl = mm-mm1;
	int minb = nn-mm2;
	
	int min_ar = minl * minb;
	

	return (max_ar - min_ar);
}
	



int main()
{
	int n;
	cin >> n;
	vector <int> x;
	vector <int> y;

	while(n--)
	{
		int a , b;
		cin >> a >> b;
		x.push_back(a);
		y.push_back(b);
	}
	cout << rect(x,y);
	
}