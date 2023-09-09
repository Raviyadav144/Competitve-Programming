#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
//#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)







int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int days , toChoose;
    cin >> days >> toChoose;
    vector<pair<ll,ll>>v;
    vector<pair<ll,ll>>inp;
    ll sum =0 ;
    int ind = 0;
    while(days--)
    {
        ll a , b;
        cin >> a >> b;
        inp.push_back({a,b});
        v.push_back({min(b-a,2*a),ind});
        sum+=(min(a,b));
        ind++;
        
    }

    sort(all(v),greater<pair<ll,ll>>());
    int count = 0;
    
    for(int i=0;i<v.size();i++)
    {
        if(count==toChoose)
            break;
        if(v[i].first<0)
            break;
        if(inp[v[i].second].first > v[i].first)
            sum+=(v[i].first);
        else
            sum+=(v[i].first-inp[v[i].second].first);
        
        count++;
    }
    cout << sum << endl;

}

