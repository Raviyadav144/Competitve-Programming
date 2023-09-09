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
    int dia = 0;
    int trav(TreeNode* root )
    {
        if(root == NULL)
            return 0;
        int lh = trav(root -> left );
        int rh = trav(root -> right );
        dia = max(dia , lh+rh);
        return  (1 + max(lh,rh));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        
        trav(root);
        return dia;

    }
    
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // Diameter of a Binary Tree

   
}