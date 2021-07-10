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
    double d , h , e, v;
    cin >> d >> h >> v >> e;
    
    
    double area = pi * (d/2)*(d/2);
    double dec = (v/area);
    if(e > dec)
    {
        cout << " NO" << endl;
        return 0;
    }
    double ans = (h/(dec-e));
    cout << "YES" << endl;
    cout << fixed << setprecision(12) << ans << endl;


}

