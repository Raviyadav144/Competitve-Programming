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
    int n ,a;
    cin >> n >> a;
    int sum =0;
    vector<int> cities(n+1);
    for(int i=1;i<=n;i++)
        cin >> cities[i];
    int left =a-1 , right = a+1;
    if(cities[a]==1)
        sum++;
    
    while(left>0 || right < (n+1))
    {   int vl , vr;
        vl = cities[left];
        vr = cities[right];
        if(left<1)
        {
            vl =0;
            if(vl+vr==1)
            sum+=1;
        }
        else if(right > n)
        {
            vr = 0;
            if(vl+vr==1)
            sum+=1;
        }
        else if(vl+vr==2)
            sum+=2;
        
        left--;
        right++;
    }

    cout << sum << endl;

    
}

