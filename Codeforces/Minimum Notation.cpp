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



int main() 
{	
	ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >>a;
        multiset<int>st;

        st.insert(a[a.size()-1]- '0');
        for(int i = a.size()-2;i>=0;--i)
        {
            if(a[i]-'0' > *st.begin())
            {
                st.insert(min(a[i]-'0' + 1,9));
                
            }
            else
            {
         
                st.insert(min(a[i]-'0',9));
            }
        }

        fora(e,st)
        cout << e;
        cout << endl;
    } 

}
