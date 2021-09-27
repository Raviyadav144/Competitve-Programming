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

ll power(ll b, ll p, ll m)
{
    ll result = 1;
    while(p)
    {
        if(p%2)
            result = (result * b) %m;
        b = (b*b)%m;
        p/=2;
    }
    return result;
}

int main()
{
    int b , p , m;
    while(cin >> b >> p >> m)
    {
        ll ans = power(b,p,m);
        cout << ans << endl;
    }

}