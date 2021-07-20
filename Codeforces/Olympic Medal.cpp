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

double rad2(double ratio ,double r1 , double p1 , double p2)
{   
    double ans = sqrt(( (p1*(r1*r1)) /(ratio*p2+p1)));
    
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> radius(n);
    for(auto &e:radius)
        cin >> e;
    int m;
    cin >> m;
    vector<int> outer_density(m);
    fora(e,outer_density)
        cin >> e;

    int l;
    cin >> l;
    vector<int> inner_density(l);
    fora(e,inner_density)
        cin >> e;
    double a , b;
    cin >> a >> b;
    double ratio = (a/b);
   
    sort(all(radius));
    sort(all(outer_density));
    sort(all(inner_density));
    double rad = rad2(ratio , radius[n-1],outer_density[m-1],inner_density[0]);
    cout << fixed << setprecision(12)<<rad << endl;


}

