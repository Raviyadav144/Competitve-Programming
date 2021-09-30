//-----raviyadav144----//
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
        vector<int>v(n);
        map<int,vector<int>>m1;
        for(int i = 0;i<n;++i)
        {
            cin >> v[i];
            m1[v[i]].push_back(i);
        }
        sort(all(v));
        map<int,vector<int>>m2;
        for(int i= 0;i<n;++i)
        {
            m2[v[i]].push_back(i);
        }
        int count = 0;
        fora(e,m1)
        {
            if(e.second.size()==1)
            {
                //if(m2[e.first] < e.second)
                    count+=(e.second[0] - m2[e.first][0]);
               
            }
        }
        cout << count << endl;
    }
}