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
    int maxSum = INT_MIN ;
    int trav(TreeNode* node)
    {
        if(node == NULL)
            return 0;
        int ls = max(0 , trav(node -> left));
        int rs = max(0 , trav(node -> right));
        // ls = ls < 0 ? 0 : ls;
        // rs = rs < 0 ? 0 : rs;
        maxSum = max(maxSum , node -> val + ls + rs);
        
        return (node -> val + max(ls , rs));
    }
    int maxPathSum(TreeNode* root) {
        trav(root);
        return maxSum;
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // Maximum Path Sum

   
}