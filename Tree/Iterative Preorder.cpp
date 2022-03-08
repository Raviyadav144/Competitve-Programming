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
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>data;
         if(root == NULL)
            return data;
        stack<TreeNode*>st;
        st.push(root);
       
        while(!st.empty())
        {
            TreeNode* temp = st.top();
            st.pop();
            if(temp -> right != NULL)
                st.push(temp -> right);
            if(temp -> left != NULL)
                st.push(temp -> left);
            data.push_back(temp -> val);
        }
        return data;
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // Binary Tree preorder traversal

   
}