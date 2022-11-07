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
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i = 0 ;i<k;++i)
        {
            pq.push(-1 * nums[i]);
        }
        for(int i = k ; i<nums.size();++i)
        {
            if(-1 * nums[i] < pq.top())
            {
                pq.pop();
                pq.push(-1 * nums[i]);
            }
        }
        return -1 * pq.top();
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // input for the fucntion
    vector<int>v;
    int n ;
    cin>> n;
    while(n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    Solution sol;;
    int ans = sol.findKthLargest(v, 3);
    cout << ans << endl;
   
}