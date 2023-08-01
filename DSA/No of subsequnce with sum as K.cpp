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

int subseq(int i, vector<int> &ans , int n , vector<int>&v , int sum , int k, int &count)
{
    if(i==n)
    {
        if(sum==k)
        {
            ++count;
        }
        return count; 
    }
    ans.push_back(v[i]);
    sum+=v[i];
    subseq(i+1, ans, n, v, sum , k, count );
    ans.pop_back();
    sum-=v[i];
    subseq(i+1 , ans, n,v, sum , k, count);
    return count;
}

int main() 
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    vector<int>v(n); 
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
    }
    vector<int>ans;
    int count = 0 ;
    subseq(0 ,ans , n, v , 0, k, count);
    cout << count << endl;


};



