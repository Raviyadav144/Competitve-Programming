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

map<char,bool>m;
map<char,int>ma;
void word(int j , string a,string b)
{   vector<char>vc;
    for(auto &it:m)
    {
        if(it.second == false)
            vc.push_back(it.first);
    }
    int ind =0;
    for(int i=0;i<26;++i)
    {
        if(a[i]=='?')
        {
            a[i] = vc[ind];
            ind++;
        }
    }
    
    string ans = b.substr(0,j)+ a +b.substr(j+26);
    for(int i =0;i<ans.size();i++)
    {
        if(ans[i]=='?')
            ans[i] = 'A';
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;
    cin >> a;
  
    string b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i =0;i<=25;++i)
    {
        m[b[i]] = false;
    }
    
    if(a.size()<26)
    {
        cout << -1 <<endl;
        return 0;
    }
   
    int ques = 0;
    for(int i = 0;i<26;++i)
    {
       
        if(a[i]=='?')
            ques++;
        else
        {
            ma[a[i]]++;
            m[a[i]] = true;
        }
    }
    if(ma.size()+ques == 26)
    {
        word(0,a.substr(0,26),a);
        return 0;
    }
    int j = 26;
    for(int i=1;i<a.size()-25;++i)
    {   
        if(a[i-1]!='?')
        {
            if(ma[a[i-1]]==1)
            {
                ma.erase(a[i-1]);
                m[a[i-1]] = false;
            }
            else
                ma[a[i-1]]--;
        }
        else
            ques--;
        if(a[j]=='?')
            ques++;
        else
        {
            ma[a[j]]++;
            m[a[j]] = true;
        }
        if(ma.size()+ques == 26)
        {
            word(i,a.substr(i,26),a);
            return 0;
        }
        j++;
    }
    cout << -1 << endl;
}

