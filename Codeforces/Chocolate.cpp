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
    vector<int>v(n);
    fora(e,v)
    cin >> e;

    ll pos = -1;
    ll sum=1;
    for(ll i =0;i<n;i++)
    {
        if(v[i]==1 && pos ==-1)
        {
            pos = i;
            continue;
        }
        if(v[i]==1)
        {
            sum*=(i-pos);
            pos =i;
        }
    }
    if(pos!=-1 && sum==1)
    cout << 1<<endl;
    else if(pos==-1)
        cout << 0 << endl;
    else
        cout << sum << endl;
}

