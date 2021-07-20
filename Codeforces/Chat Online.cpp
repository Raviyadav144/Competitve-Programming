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

    int  p,q,l,r;
    cin >> p >> q >> l >> r;
    vector<pair<int,int>> lil_x,lil_z;
    while(p--)
    {
        int a , b;
        cin >> a >> b;
        lil_z.push_back({a,b});
    }
    while(q--)
    {
        int a , b;
        cin >> a >> b;
        lil_x.push_back({a,b});

    }
    bool check = false;
    int count = 0;
    for(int i = l;i<=r;i++)
    {
        for(int j = 0;j<lil_z.size();j++)
        {
            int one = lil_z[j].first;
            int two = lil_z[j].second;
            for(int k =0 ;k<lil_x.size();++k)
            {   int lone = lil_x[k].first+i;
                int ltwo = lil_x[k].second+i;
                if(one>=lone && one <=ltwo)
                {
                    check = true;
                    break;
                }
                else if(lone>=one && lone<=two)
                {
                    check = true;
                    break;
                }
            }
        }
        if(check)
            count++;
        check = false;
    }
    cout << count << endl;
}

