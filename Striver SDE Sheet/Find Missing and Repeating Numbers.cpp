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

class Solution {
public:
    pair<int,int> missingAndRepeating(vector<int> &arr, int n)
        {
             int xr = arr[0];
            int val = 0;
            for(int i =1 ; i < n;++i)
            {
                xr^=arr[i];
                val^=i;
            } 
            val^=n;
            xr^=val;
            int ind = -1;
            int c = 0;
            while(xr >0)
            {
                if(xr & 1)
                {
                    ind = c;
                    break;
                }
                ++c;
                xr>>=1;
            }
            int first = 0 , second = 0;
            int val1 = 1 << c;
            for(int i = 0 ; i < n;++i)
            {
                if(arr[i] & val1)
                first^=arr[i];
                else
                second ^=arr[i];
            }
            for(int i = 1 ; i <=n;++i)
            {
                if(i & val1)
                    first^=i;
                else
                    second ^=i;
            }
            // cout << first << " " << second << endl;
            int count = 0 ;
            for(int i =0 ; i< n;++i)
            {
                if(arr[i]==first)
                ++count;
            }
            if(count < 2)
                return {first , second }; 
            return {second , first};

            
        }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // vector<int>v;
    // int n;
    // cin>> n;


    Solution sol;
    // vector<int> ans  = sol.getRow(n);
    vector<vector<int>>v = {{1,3}, {2,6},{8,10},{15,18}};
    sol.merge(v);
    fora(e , v)
    {
        fora(a ,e)
        {
            cout << a<< " ";
        }
        cout << endl;
        // cout << e << endl;
    }
    // cout << ans << endl;
    // // cout << endl;
   
}