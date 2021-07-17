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
    
    int n , m , k, t;
    cin >> n >> m >> k >> t;
    vector<int> waste_count(n+1,0);
    vector<int> waste_sum(n+1,0);
    vector<vector<int>>loc(n+1);
    while(k--)
    {
        int a, b;
        cin >> a >> b;
        waste_count[a]++;
        loc[a].push_back(b);
    }
    map<int,string> m1 = { {0,"Grapes"},{1,"Carrots"},{2,"Kiwis"}};
    for(int i =1;i<=n;i++)
    {
        waste_sum[i] = waste_sum[i-1]+waste_count[i];
    }
    while(t--)
    {
        int x , y;
        cin >> x >> y;
        int crop_cells = (x-1)*m - (waste_sum[x-1]);
        int count = 0;
        bool check = true;
        for(auto it : loc[x])
        {
            if(it<=y)
            {
                count++;
                if(it==y)
                {
                    cout << "Waste" << endl;
                    check = false;
                    break;
                }
                if(it>y)
                    break;
            }
        }
        if(check)
        {
            int val = (crop_cells + y- count)%3;
            cout << m1[val] << endl; 
        }

    }

}

