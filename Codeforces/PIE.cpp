#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
//#define pi acos(-1.0)
double pi = acos(-1.0);


double eps = 1e-9;
int n , f;

bool PieSize(double val,vector<double> &radii)
{   int count=0;
    double pies = pi*(val*val);
    for(int i =0;i<n;i++)
    {   double vol = pi*(radii[i]*radii[i]);
        count+=((int)(floor(vol/pies)));
    }
    return count >=f;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        
        cin >>  n >> f;
        f+=1;

        vector<double> radii(n);
        for(int i=0;i<n;++i)
            cin >> radii[i];
        sort(radii.begin(),radii.begin()+n);
        double hi = 1e5, lo =1;
        while(hi-lo > eps)
        {
            double mid = (lo+hi)*0.5;
            
            if(PieSize(mid,radii))
                lo = mid;
            else
                hi = mid-eps;
        }
        double ans = pi*hi*hi;
        cout <<fixed << setprecision(4)<< ans<< endl;


    }
    
}

