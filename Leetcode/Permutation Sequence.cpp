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
     int factorial( int n )
     {
         return ((n==0 || n==1) ? 1 : n *factorial(n-1));
     }
    string getPermutation(int n, int k) {
        string ans = "";
        vector<int>v;
        for(int i =  1 ; i <= n ;++i)
        v.push_back(i);
        getPerm(v, factorial(n-1) , k-1, ans, n);
        return ans;
    
    }
    void getPerm(vector<int>&nums, int fact , int k , string &ans, int n )
    {
        if(n==1)
        {   
            ans+=to_string(nums[0]);
            return;
        }
        ans+=(to_string(nums[k/fact]));
        nums.erase(nums.begin()+(k/fact));
        n-=1;
        getPerm(nums, fact/(n), k%fact, ans, n );
    }
       
};

class Solution {
public:
     int factorial( int n )
     {
         return ((n==0 || n==1) ? 1 : n *factorial(n-1));
     }
    string getPermutation(int n, int k) {
        int fact = factorial(n-1);
        k-=1;
        string ans = "";
        vector<int>v;
        for(int i = 1 ; i <= n;++i)
        {
            v.push_back(i);
        }
         while(true)
         {
            ans += (to_string(v[k/(fact)]));
            v.erase(v.begin() + k/(fact));
            if(v.size()==0)
                break;
            k%=fact;
            fact/=(n-1);
            n-=1;

         }
          return ans;
    }
       
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Solution s1;
    // vector<vector<string>>ans = s1.solveNQueens(4);
    // cout << ans.size() << endl;
    // fora(e, ans)
    // {
    //     fora(v , e)
    //     cout << v<< endl;
    //     cout << endl;
    // }
       
    
}