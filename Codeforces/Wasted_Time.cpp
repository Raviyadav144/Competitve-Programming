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
    double n,k;
    cin >> n>>k;
    double a,b;
    cin >> a >> b;
    n--;
    double len = 0;
    while(n--)
    {
        double x,y;
        cin >> x >> y;
        len+=((double)sqrt(pow(x-a,2)+pow(y-b,2)));
        a=x;
        b=y;

    }
    len*=k;
    cout << fixed << setprecision(9)<<len/(double)50 << endl;

}

