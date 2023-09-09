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

vector<int> noOfDivisors(1000001);

void sieves()
{
    for(int i = 1;i<=1000001;i++)
    {
        noOfDivisors[i]++;
        for(int j=2*i;j<=1000001;j+=i)
            noOfDivisors[j]++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a , b, c;
    cin >> a >> b >> c;

    ll m = 1073741824;
    sieves();
    ll sum = 0;
    for(int i =1;i<=a;i++)
    {
        for(int j =1;j<=b;j++)
        {
            for(int k =1;k<=c;k++)
            {
                sum = (sum + noOfDivisors[i*j*k])%m; 
            }
        }
    }
    cout << sum << endl;

    
}

