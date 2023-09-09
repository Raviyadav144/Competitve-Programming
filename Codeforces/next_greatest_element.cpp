#include<bits/stdc++.h>
using namespace std;



void NGE( vector <int> &v)
{
	vector <int> nge(v.size());
	stack <int> st;
	for(int i =0; i< v.size() ; i++)
	{
		while(!st.empty() && v[i] > v[st.top()])
		{
			nge[st.top()] = i;
			st.pop();
		}
		st.push(i);

	}
	while(!st.empty())
	{
		nge[st.top()] = -1;
		st.pop();
	}
	for(int i = 0; i <v.size() ; i++ )
    {    if(nge[i]!= -1)
            cout << v[i] << " " << v[nge[i]] << endl;
        else
            cout << v[i] <<" " << -1 << endl ;
    }
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif

	int n;
	cin >> n;

	while(n--)
	{
		int a ;
		cin >> a;
		vector <int> vec;
		for(int j =0; j<a; j++)
		{
			int v;
			cin>>v;
			vec.push_back(v);

		}
		NGE(vec);


	}
}