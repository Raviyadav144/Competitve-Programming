#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)
#define mod 1000000007



int main() 
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<double>v(n);
        vector<double>ti(n);
        for(int i = 0;i<n;++i)
        {
            cin >> v[i];
        }
        for(int i = 0 ; i<n;++i)
            cin >> ti[i];
        double maxi = -INT_MAX , mini = INT_MAX;
        for(int i  =0 ;i<n;++i)
        {
            maxi= max(maxi , v[i]+ti[i]);
            mini= min(mini , v[i]-ti[i]);
        }
        cout << fixed << (maxi + mini)/2.0 << endl;
    }
}
