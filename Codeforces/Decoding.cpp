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
    int n ;
    cin >> n;
    string word;
    cin >> word;
    string enc;
    int i = 0;
    while(i<n)
    {   
        if(n&1)
        {
            if(i&1)
            enc = word[i]+enc;    
            else
                enc = enc+word[i];
            i++;
        }
        else
        {
            if(i&1)
            enc = enc+word[i];    
            else
                enc =word[i]+enc ;
            i++;
        }
        
    }
    cout << enc << endl;

}