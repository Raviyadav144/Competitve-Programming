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
    int n , m;
    cin >> n >> m;
    vector<pair<int,int>>warehouse;
    while(m--)
    {
        int boxes , matches;
        cin >> boxes >> matches;
        warehouse.push_back({matches,boxes});
    }
    sort(all(warehouse),greater<pair<int,int>>());
    
    int count , total = 0;
    fora(box , warehouse)
    {
        if(box.second>=n)
        {
            total += (box.first * n);
            break;
        }
        else
        {
            total+=(box.first*box.second);
            n-=box.second;
        }

    }
    cout << total << endl;
}

