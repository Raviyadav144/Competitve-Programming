#include<bits/stdc++.h>

using namespace std;

string isBal(string s)
{	
	stack <char> st;
	unordered_map<char , int> m = {{'[',1},{'{',2},{'(',3} ,{']',-1},{'}',-2},{')',-3}};
	for(char &brac :s)
	{
		if(m[brac] >0)
			st.push(brac);
		else
		{
			if(st.empty())
				return "NO";
			char top = st.top();
			st.pop();
			if(m[brac] + m[top] !=0)
				return "NO";
		}

	}
	if(st.empty())
		return "YES";
	return "NO";
}



int main()
{	
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif

	
	int n;
	cin >>n;
	while(n--){
		string s;
		cin >> s;
		cout << isBal(s) << endl;

	}

}