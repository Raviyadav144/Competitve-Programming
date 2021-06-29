#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"


int main()
{
    int n;
    cin >> n;
    

    ll count=0;

    while(n--)

        {   
            ll val;
            cin >> val;
            if(val ==1)
            {
                count++;
                continue;
            }
            set<ll>divisors;
           
            ll de =2;
            for(int i=de;i*i<=val;i++)
            {
               if(val%i==0)
               {
                divisors.insert(i);
             
                de = (2*i);
                if(i!=(val/i))
                    divisors.insert(val/i);
               }
            }
           
            
            if(divisors.empty())
            {
                count+=(val+1);
                continue;
            }
            
            
            ll div =1;
            fora(e,divisors)
            {
                if(val%e==0 && (e%div==0))
                {   
                    count+=(val/e);
                    
                    div=e; 
                         
                }
            }
            count+=(val+1);

        }
        
    cout << count << endl ;
    
}

