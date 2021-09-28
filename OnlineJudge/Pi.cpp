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

int gcd(int a , int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    double n ;
    while(true)
    {
        cin >> n;
        if(n==0)
            return 0;
        vector<int>v;
        for(int i = 0;i<n;++i)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int count = 0;
        for(int i = 0;i<n;++i)
        {   int e = v[i];
            for(int j =i+1 ;j<n;++j)
            {   int f = v[j];
               
                 if(gcd(max(e,f),min(e,f))==1)
                    {
                        count++;
                    }

            }
        }

        if(count==0)
        {
            cout << "No estimate for this data set." << endl;
            continue;
        }
        double val = ((n-1)*n)/2.0;
        double sz = count;
        double est = sz/val;
        double ans = sqrt(6.0/est);
        cout << fixed << setprecision(6) << ans<< endl;


    }
}