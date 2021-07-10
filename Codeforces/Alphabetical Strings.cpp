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
    int t;
    cin >> t;
    
    while(t--)
    {
       string a ;
       cin >> a;
       auto first = a.find('a');
       if(first==string::npos)
       {
            cout << "NO" << endl;
            continue;
       }
       int asc = 98;
       
       auto l = first;
       auto r= first;
       int i =1;
       bool check = true;
       while(i<a.size())
       {
            if(a[l-1]==char(asc))
            {   
                l--;
                asc++;
            }
            else if(a[r+1]==char(asc))
            {   
                r++;
                asc++;
            }
            else
            {
               
                check = false;
                break;
            }
        i++;
       }
       cout << (check? "YES":"NO") << endl;

            
    }
    

}

