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
    ll n,m;
    cin >> n >> m;
    ll x , y;
    cin >> x >> y;

    ll k;
    cin >> k;
    ll count = 0;
    while(k--)
    {
        int a , b;
        cin >> a >> b;
        ll ans = INT_MAX;
        if(a>0)
            ans=((n-x)/a);
        if(a<0)
            ans = ((x-1)/(-a));
        if(b>0)
            ans = min(ans, (m-y)/b);
        if(b<0)
            ans = min(ans,(y-1)/(-b));
       
        count+=ans;
        x = x+(a*ans);
        y = y+(b*ans);
    }
    cout << count << endl;
}

