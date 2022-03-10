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
    
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int lh = maxDepth(root -> left);
        int rh = maxDepth(root -> right);
        return 1+ max(lh, rh);
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // Max Depth of a Binary Tree

   
}