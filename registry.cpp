#include<bits/stdc++.h>
using namespace std;

void login(vector <string> &str)
{
	unordered_map<string , int> m ;
	for(auto &s :str )
	{
	 	auto a = m.find(s);
		 if(a == m.end())
		 {
		 	m[s]++;
		 	cout << "OK" << endl;
		 }
		 else
		 {
		 	m[s]++ ;
		 cout << s+to_string(m[s]-1) << endl;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	vector <string> str(n);
	for(int i =0; i<n ; i++)
	{
		cin >> str[i];
	}
	
	login(str) ;

}