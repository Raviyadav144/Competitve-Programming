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
    int lengthOfLongestSubstring(string s) {
       
        unordered_map<char,int>m;
        int i = 0 , j = 0 ;
        int ans = 0 ;
        while(j<s.size())
        {
            m[s[j]]++;
            if(m.size()==(j-i+1))
            {
                ans = max(ans , (int)m.size());
                ++j;
            }
            else if(m.size() < (j-i+1))
            {
                
                while(m.size() < (j-i+1))
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                        m.erase(s[i]);
                    i++;
                }
                ++j;
            }
            
        }
        return ans ; 
    }
};
int main()
{
   
   string a ; 
   cin >> a;

   Solution s1;
   int b = s1.lengthOfLongestSubstring(a);
   cout << b << endl;
}