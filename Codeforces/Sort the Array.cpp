#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
//#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)


int valcount =1;
int n;
int indr;
int indl;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
   
    cin >> n;
    vector<int> v(n);
   
    fora(e,v)
    cin >> e;
    bool inc = true;
    int ind=-1;
    for(int i =1;i<n;++i)
    {     if(v[i]<v[i-1])
            {
                ind = i;
                inc = false;
                break;
            }
    }
    int ind1=v.size();
    if(!inc)
    {
        for(int i = ind+1;i<n;i++)
        {
            if(v[i]>v[i-1])
            {
                ind1 = i;
                break;
            }
        }
    }
    if(ind==-1)
    {   cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    
    reverse(v.begin()+(ind-1),v.begin()+ind1);
    // fora(e,v)
    // cout << e;

    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            cout << "no" << endl;
            return 0;
        }
    }
        cout << "yes" << endl;
        cout << ind << " " << ind1 << endl;

}

