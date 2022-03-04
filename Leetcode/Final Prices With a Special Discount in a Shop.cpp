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
    vector<int> finalPrices(vector<int>& prices) {
        stack<pair<int,int>>st;
        vector<int>v(prices.size());
        st.push({prices[0],0});
        for(int i = 1 ;i<prices.size();++i)
        {
             while(!st.empty() && st.top().first>=prices[i] )
                {
                    v[st.top().second] = st.top().first-prices[i];
                    st.pop();
                }

            st.push({prices[i],i});
        }
       
        while(!st.empty())
        {
            v[st.top().second] = st.top().first;
            st.pop();
        }
        
        return v;
        
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   vector<int>v;
   int n;
   while(cin >> n)
   {
        v.push_back(n);
   }

   Solution s1;
   
   vector<int>v1 = s1.finalPrices(v);
   fora(e,v1)
   cout << e << " ";
   
}