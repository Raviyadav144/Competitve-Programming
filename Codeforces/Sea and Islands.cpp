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

void islands(int n,int k)
{
    for(int i=0;i<n;++i)
            {   for(int j=0;j<n;++j)
                {
                    if(k==0)
                        cout << "S";
                    else if(!(i&1))
                    {
                        if(!(j&1))
                        {
                            cout << "L";
                            --k;
                        }
                        else
                            cout << "S";
                    }
                    else
                    {
                        if(j&1)
                        {
                            cout << "L";
                            --k;
                        }
                        else
                            cout << "S";
                }
                
            } 
            cout << endl;
        }  
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , k;
    cin >> n >>k;
    if(!(n&1))
    {
        if(k>(n*n)/2)
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {   cout << "YES" << endl;
            islands(n,k);
            return 0;
        }
    }
    else
    {
        if(k>(((n/2)+1)*((n/2)+1)) + (n/2)*(n/2))
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {   cout << "YES" << endl;
            islands(n,k);
            return 0;
        }
    }
}

