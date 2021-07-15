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
    int n ;
    cin >> n;
    unordered_map<int,vector<int>> m;
    vector<int> v(n);
    for(int i =0;i<n;i++)
    {
        int a;
        cin >> a;
        m[a].push_back(i);
    }
    int b;
    cin >> b;
    
    ll vasya =0 , petya =0;
    while(b--)
    {
        int q;
        cin >> q;
        vasya+=(m[q][0]+1);
        petya+=(n-m[q][m[q].size()-1]);

    }
    cout << vasya << " " << petya << endl;

}