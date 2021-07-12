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

double eps = 1e-6;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    double n ;
    cin >> n;
    
    
    double l = 1 , h =n;
    while(h-l>eps)
    {
        double mid =l+(h-l)/2;
        if(mid*mid < n)
            l = mid;
        else 
            h = mid;
    }
    cout << h << " " << l << endl;
}

