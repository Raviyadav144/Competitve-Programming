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
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>trav;
        stack<TreeNode*>st1;
        if(root == NULL)
            return trav;
        st1.push(root);
        while(!st1.empty())
        {
            root = st1.top();
            trav.push_back(root -> val);
            st1.pop();
            if(root -> left != NULL)
                st1.push(root -> left);
            if(root -> right != NULL)
                st1.push(root -> right);
            
        }
        reverse(trav.begin(),trav.end());
        return trav;
        
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // Iterative post order traversal

   
}