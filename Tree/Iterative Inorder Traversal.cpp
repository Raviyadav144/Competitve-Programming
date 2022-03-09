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
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>trav;
        stack<TreeNode*>st;
      
        while(true)
        {
            if(root != NULL)
            {
                st.push(root);
                root = root -> left;
            }
            else   
            {
                if(st.empty())
                    break;
                root = st.top();
                st.pop();
                trav.push_back(root -> val);
                root = root -> right;
            }
        }
        return trav;
        
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // Iterative in order traversal

   
}