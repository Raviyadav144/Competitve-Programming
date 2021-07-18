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
    vector<ll> sides(n);
    fora(e,sides)
    cin >> e;
    sort(all(sides));
    
    for(int i =2;i<n;i++)
    {
        if(sides[i]+sides[i-1] > sides[i-2])
        {
            if(sides[i]+sides[i-2]>sides[i-1])
            {
                if(sides[i-1]+sides[i-2] > sides[i])
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;   
}

