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

string strToint(string a)
{
    reverse(all(a));
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        string  c  , d;
        cin >> c >> d;
        string a = strToint(c);
        string b = strToint(d);
        int x = a.size() , y = b.size();
        int val = abs(x-y);
        int iter = max(a.size() , b.size());
        string zeros  = "";
        
        if(a.size()!=b.size())
        {
            for(int i = 0;i<val;++i)
            {
                zeros+="0";
            }
            if(a.length()<b.length())
                 a = zeros+a;
            else
                b = zeros+b;
        }
        int carry = 0;
        string ans = "";
        
        for(int i =iter-1 ;i>=0;--i)
        {
            int sum = a[i]-'0' + b[i]-'0';

            sum+=carry;
            carry = sum/10;
            
            int digit = sum%10;
            //cout << sum  << endl;
            ans+=(to_string(digit));
        }
        if(carry!=0)
        {
            ans+=(to_string(carry));
        }
        string final_ans = "";
        bool check = false;
        for(int i =0 ;i<ans.size();++i)
        {
            if(ans[i]=='0' && !check)
                continue;
            else
            {
                check = true;
                final_ans+=(ans[i]);
            }
        }
        cout << final_ans << endl;
    }
}