//-----raviyadav144----//
#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)
#define mod 1000000007



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);    
    int n;
    while(cin >> n)
    { if (n==0)
        return 0;
        vector<pair<int,int>>v;
        int x , y;
        vector<int>xco;
        vector<int>yco;
        for(int i=0 ;i<n;++i)
        {
            int a , b;
            cin >> a >> b;
            xco.push_back(a);
            yco.push_back(b);
            v.push_back({a,b});
            if(i==n/2)
                x= a , y = b;
        }
        int minx = *min_element(all(xco));
        int maxx = *max_element(all(xco));
        int miny = *min_element(all(yco));
        int maxy = *max_element(all(yco)); 
        int tr = 0 , tl = 0 , br = 0 , bl =0;
        for(auto &e : v)
        {
            if(e.first > x && e.second > y)
                tr++;
            if(e.first < x && e.second < y)
                bl++;
            if(e.first <x && e.second > y)
                tl++;
            if(e.first > x && e.second < y)
                br++;
        }
        cout << tr+bl << " " << br+tl << endl;


    }
}