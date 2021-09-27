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

bool cmp(pair<int,int>p1 , pair<int,int>p2)
{
    if(p1.first == p2.first)
        return p1.second > p2.second;
    else
        return p1.first < p2.first;
}

int main()
{
    ll n , d;
    cin >> n >> d;
    vector<pair<ll,ll>>comp;
    for(int i= 0;i<n;++i)
    {
        int u , v;
        cin >> u >> v;
        comp.push_back({u,v});

    }
    sort(all(comp),cmp);
    vector<ll>pre(n);
    pre[0] = comp[0].second;
    for(int i = 1;i<n;++i)
    {
        pre[i] = comp[i].second;
        pre[i]+=pre[i-1];
    }
    
    ll ans =0;
    for(int i=0;i<n;++i)
    {
        ll x = comp[i].first + d;
        ll val = comp[i].second;
        int hi = n-1 , lo = i;
        int ind = -1;
        while(hi-lo>1)
        {
            int mid = lo + (hi-lo)/2;
            if(comp[mid].first<  x)
            {  
                lo = mid;
            }
            else
                hi = mid-1;
        }
        if(comp[hi].first <x)
        {
            val+=(pre[hi]-pre[i]);
        }
        else
            val+=(pre[lo]-pre[i]);
        ans = max(ans ,val);
    }
    cout << ans << endl;
}