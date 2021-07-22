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

int n;
vector<pair<int, pair<int,int>>> radiator;
bool warm(int x,int y)
{
    for(int i =0;i<n;i++)
    {
        int rx = radiator[i].second.first;
        int ry = radiator[i].second.second;
        double rad = radiator[i].first;
        
        double dist = sqrt(pow(rx-x,2) + pow(ry-y,2));
        
        if(dist <=rad)
            return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b , c, d;
    cin >> a >> b >> c>>d;
    vector<pair<int,int>> rect;
    rect.push_back({a,b});
    rect.push_back({c,d});
    rect.push_back({a,d});
    rect.push_back({c,b});
    sort(all(rect));

    cin >> n;
    int n1 = n;
    while(n1--)
    {
        int x , y , z;
        cin >> x >> y >> z;
        radiator.push_back({z,{x,y}});
    }
    int count = 0;
    int x1 = rect[0].first;
    int x2 = rect[2].first;
    for(int i = rect[0].second;i<=rect[1].second;i++)
    {     if(!warm(x1,i))
            count++;
        if(!warm(x2,i))
            count++;
    }
    int y1 = rect[0].second;
    int y2 = rect[1].second;
    for(int i = rect[0].first+1;i<rect[2].first;i++)
    {  
        if(!warm(i,y1))
            count++;
        if(!warm(i,y2))
            count++;
    }
    cout << count << endl;
}

