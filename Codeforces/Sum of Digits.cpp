#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
//#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)



    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string num ;
    cin >> num;
    if(num.length() ==1)
    {
        cout << 0 << endl;
        return 0;
    }
    int count=0;
    int zero = 0;
    while(num.length()!=1)
    {   
        ll sum=0;
        count++;
       
        for(int i=0;i<num.length();++i)
        {
            sum+=(num[i]-'0');
      
        }
        ostringstream str1;
        str1 << sum;
        num=str1.str();
    }
    cout << count << endl;
}

