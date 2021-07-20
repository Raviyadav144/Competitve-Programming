#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    unordered_map<int,int> m;
    for(int i = 0;i<n;i++)
    {
        int a ;
        cin >> a;
        m[a]++;
    }
    if(m.size()==1 || m.size()==2)
    {
        cout << "YES" << endl;
        return 0;
    }

    if(m.size()>3)
    {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> v;
    for(auto it : m)
    {
        v.push_back(it.first);

    }
    sort(all(v));

    if(v[2]-v[0]==v[1])
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        cout << "NO" << endl;
    }

}

