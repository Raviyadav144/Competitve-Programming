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

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>pre , in , post;
    if(root == NULL)
        return ans;
    BinaryTreeNode<int>* temp = NULL;
    stack<pair<BinaryTreeNode<int>* ,int>>st;
 
    st.push({root, 1});
    while(!st.empty())
    {
        temp = st.top().first;
        int num = st.top().second;
        st.pop();
        if(num==1)
        {
            pre.push_back(temp -> data);
            ++num;
            st.push({temp , num});
            if(temp -> left != NULL)
                st.push({temp -> left , 1});
        }
        else if(num==2)
        {
            in.push_back(temp -> data);
            ++num;
            st.push({temp, num});
            if(temp -> right != NULL)
                st.push({temp -> right , 1});
        }
        else
        {
            post.push_back(temp -> data);
        }
       
        
    }
        ans.push_back(in);
        ans.push_back(pre);
        ans.push_back(post);
        return ans;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // All three traversal in one function

   
}