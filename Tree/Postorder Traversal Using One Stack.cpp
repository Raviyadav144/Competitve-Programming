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
        TreeNode* curr = root;
        stack<TreeNode*>st;
        TreeNode* temp = NULL;
        while(curr != NULL || !st.empty())
        {
            if(curr != NULL)
            {
                st.push(curr);
                curr = curr -> left;
            }
            else
            {
                temp = st.top() -> right;
                if(temp == NULL)
                {
                    temp = st.top();
                    st.pop();
                    trav.push_back(temp -> val);
                    while(!st.empty() && temp == st.top() -> right)
                    {
                        temp = st.top();
                        st.pop();
                        trav.push_back(temp -> val);
                    }
                }
                else
                    curr = temp ;
            }
        }
        return trav;
        
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // Iterative post order traversal one stack

   
}