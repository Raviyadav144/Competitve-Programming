#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a , b , c , d , e , f,g,h;
    while(cin >> a >> b >> c>> d >> e >> f >> g >> h)
    {   
        map<pair<double,double>,int> m;
        m[{a,b}]++;
        m[{c,d}]++;
        m[{e,f}]++;
        m[{g,h}]++;
        double sumx,sumy;
        sumx=sumy=0;

        fora(e,m)
        {
            if(e.second==1)
            {
                sumx+=e.first.first;
                sumy+=e.first.second;
            }
            else
            {
                c=e.first.first;
                d = e.first.second;
            }
        }
        double midx = sumx/2.0;
        double midy = sumy/2.0;
        double rex = (midx*2)-c;
        double rey = (midy*2)-d;
        cout << fixed << setprecision(3) << rex << " " << rey << endl;
    }


}

