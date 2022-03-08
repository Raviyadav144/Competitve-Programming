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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>trav;
        queue<TreeNode*> q;
        if(root == NULL)
            return trav;
        q.push(root);
        while(!q.empty())
        {
            vector<int>level;
            int n = q.size();
            for(int i= 0; i< n;++i)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp -> left != NULL)
                    q.push(temp -> left);
                if(temp -> right != NULL)
                    q.push(temp -> right);
                level.push_back(temp -> val);
                
                    
            }
            trav.push_back(level);
        }
        return trav;
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // Binary Tree Level traversal

   
}