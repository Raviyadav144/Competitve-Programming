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
#define mod 1000000009

int LCS(string &x , string &y , int n , int m)
{
    if(n==0 || m==0)
        return 0;
    if(x[n-1]==y[m-1])
        return 1 + LCS(x,y,n-1,m-1);
    else
        return max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string x , y;
    cin >> x >> y;
    int n = x.length();
    int m = y.length();
    cout << LCS(x,y,n,m) << endl;

}

