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

void compress(vector<int>&v)
{
    map<int,int>m;
    fora(e,v)
    {
        m[e]=0;
    }
    int count=1;
    fora(e,m)
    {
        e.second=count++;
    }
    for(int i =0;i<v.size();++i)
    {
        v[i] = m[v[i]];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h,w, n;
    cin >>  h >> w >> n;
    vector<int> x,y;
    for(int i=0;i<n;++i)
    {
        int u , v;
        cin >>u >>v;
        x.push_back(u);
        y.push_back(v);
    }
    compress(x);
    compress(y);
    for(int i =0;i<n;++i)
    {
        cout << x[i] << " " << y[i] << endl;
    }

}

