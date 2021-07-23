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

int x , y;

bool eqn(int x1 , int y1 , int x2 , int y2)
{
    double yco = y2-y1;
    double rest = ((y-y1)/(x-x1))*(x2-x1);
    if(yco == rest)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
   
    cin >> x >> y;
    vector<pair<int,int>> coord;
    vector<bool>visited(n,false);
    for(int i =0;i<n;i++)
    {
        int a , b;
        cin >> a >> b;
        coord.push_back({a,b});
    }
    int count = 0;
    for(int i =0;i<n;++i)
    {
        if(!visited[i])
        {   visited[i]==true;
            count++;
            int x1 = coord[i].first;
            int y1 = coord[i].second;
            for(int j =i+1;j<n;++j)
            {   int x2 = coord[j].first;
                int y2 = coord[j].second;
                if((y2-y)*(x1-x) == (x2-x)*(y1-y))
                    visited[j]=true;
            }
        }
    }
    
    cout << count <<endl;
}

