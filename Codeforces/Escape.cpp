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
    double vp , vd , t,f ,c;
    cin >> vp >> vd >> t >> f >> c;
    if(vp>vd)
    {
        cout << 0 << endl;
        return 0;
    }
    double dist =0;
    double time = 0;
    double count = -1;

    while(dist<c)
    {      count++;
        dist+= vp*t;
        time = dist/(vd-vp);
        dist +=(vp*time);
        t=(time+f);
    } 
    cout << count << endl;
}

