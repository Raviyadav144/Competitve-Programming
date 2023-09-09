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
        ll a , c;
        cin >> a >> c;
        if(a==c)
        {
            cout << 0 << endl;
            continue;
        }
        ll b= max(a,c/2);
        cout << max(c%b,c%(b+1)) << endl;
    }
    
}
    

