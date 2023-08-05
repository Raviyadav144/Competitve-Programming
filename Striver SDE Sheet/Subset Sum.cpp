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

class Solution
{
public:
    void subSum(vector<int>&v ,int n, int i, int sum , vector<int>&fans)
    {
        if(i==n)
        {
            fans.push_back(sum);
            return;
        }
        sum+=v[i];
        subSum(v, n , i+1,sum, fans);
        sum-=v[i];
        subSum(v, n , i+1 ,sum, fans);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        subSum(arr, N, 0, 0, ans);
        sort(ans.begin() , ans.end());
        return ans;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // vector<int>v;
    // int n;
    // cin>> n;


    
    fora(e , v)
    {
        // fora(a ,e)
        // {
        //     cout << a<< " ";
        // }
        // cout << endl;
        cout << e << endl;
    }
    // cout << ans << endl;
    // // cout << endl;
   
}