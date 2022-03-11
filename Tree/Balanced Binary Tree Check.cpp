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
   
    bool isBalanced(TreeNode* root) {
        int ans = trav(root);
        return (ans==-1 ? false : true);
}
    int trav(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int lh = trav(root ->left);
        int rh = trav(root -> right);
        if(lh == -1 || rh ==-1)
            return -1;
        if(abs(lh-rh)>1)
            return -1;
        return 1+max(lh,rh);
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // Check if a binary tree is a balanced tree

   
}