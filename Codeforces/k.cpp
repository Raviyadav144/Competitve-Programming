#include<bits/stdc++.h>
using namespace std;

void solve(int &val) {
    int count = 0;
    int val1 = 1;
    while(val1 !=0)
    {
    	val1 = val & val-1;
    	val--;
    	count ++;
    }
    cout << count <<endl;
}

int main()
{
	int n;
	cin >>n;
	while(n--)
	{
		
		int val;
		cin >> val;
		solve(val);
	}
}