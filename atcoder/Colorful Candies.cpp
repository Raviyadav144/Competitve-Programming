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
    int n , k;
    cin >> n >> k;
    vector<int> cand(n);
    fora(e, cand)
    cin >> e;
    int max_cand = 0;
    unordered_map<int,int> m;
    for(int i=0 ;i<k;i++)
    {   if(m[cand[i]]==0)
            max_cand++;
        m[cand[i]]++;
    }
    int val =max_cand;
    for(int i =k;i<n;i++)
    {   
        if(m[cand[i-k]]==1)
            max_cand--;
        m[cand[i-k]]-=1;

        if(m[cand[i]]==0)
            max_cand+=1;
        m[cand[i]]++;
        if(max_cand > val)
            val = max_cand;
    }
    cout << val << endl;
}

