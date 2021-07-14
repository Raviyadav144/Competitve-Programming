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


int noOfFields(int a , vector<int> &v)
{   int sum =0;
    int i ;
    int ch ;
    if(i!=v.size()-1)
    {   i=a+1;
        ch=v[a];
        while(v[i]<=ch && i!=(v.size()))
        {   ch = v[i];
            sum++;
            i++;
            
        }

    }
   
    
    if(i!=1)
    {   i=a-1;
        ch = v[a];
        while(v[i]<=ch && i!=0)
        {   ch=v[i];
            sum++;
            i--;
            
        }
    }
    
    return sum+1;
}
    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    if(n==1)
    {
        cout << 1 << endl;
        return 0;
    }
    vector<int> field(n+1);
    for(int i=1;i<=n;i++)
        cin >> field[i];
    ll max = 0;
    field[0] = 1e9;
    for(int i =1;i<=n;i++)
    {   
        int fd = noOfFields(i,field);
        if( fd> max)
        {
            max = fd;
            
        }
    }
    cout << max << endl;
   

    
}

