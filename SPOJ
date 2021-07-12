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
ll n = 1E6 ;
ll m;
vector<ll>trees(n);

bool enough(ll h)
{
    ll req =0;
    for(int i=0;i<n;i++)
    {
        if(trees[i]>h)
            req+=(trees[i]-h);
    }
    return req>=m;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> m;
    fora(e,trees)
    cin >> e;
    ll high = 1e9 , low = 0;
    while(high-low>1)
    {
        ll mid = low+(high-low)/2;
        if(enough(mid))
            low = mid;
        else 
            high = mid-1;
    }
    if(enough(high))
        cout << high << endl;
    else
        cout << low << endl;

}

