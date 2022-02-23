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
    
    string longestPalindrome(string s) {
        int best = 0;
        string bestString = "";
        int n = s.length();
        for(int mid = 0 ;mid < n; ++mid)
        {
            for(int x = 0 ;mid-x >=0 && mid+x <n ;++x)
            {
                if(s[mid-x]!=s[mid+x])
                    break;
                int len = 2*x + 1;
                if(len > best)
                {
                    best = len;
                    bestString = s.substr(mid-x,len);
                }
            }
            
        }
        for(int mid = 0 ;mid < n-1 ;++mid)
        {
            for(int x = 1;mid-x+1 >=0 && mid +x <n;++x)
            {
                if(s[mid-x+1]!=s[mid+x])
                    break;
                int len = 2*x ;
                if(len > best)
                {
                    best = len;
                    bestString = s.substr(mid-x+1,len);
                }
            }
            
        }
        return bestString;
    }
};
int main()
{
   
   string a ; 
   cin >> a;

   Solution s1;
   string b = s1.longestPalindrome(a);
   cout << b << endl;
}