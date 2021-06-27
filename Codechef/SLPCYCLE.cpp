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
    vector <ll> v(n);
    fora(e,v)
    cin >> e;

    ll count=0;
    fora(val,v)
    {
       ll val1 = val;
       if(val==1)
       {
         count++;
         continue;
       }
       for(int i=2;i*i<=val;i++)
       {	
       		if(val%i==0)
       		{
       			while(val%i==0)
       			{	
       				val/=i;
       				if(val*i==val1)
       					count+=1;
       				else
       					count+=val;
       				
       			}
       			
       		}
       		if(val>1)
       			{
       				count+=val;
       			}
       		count+=val1;
       }

     } 
    cout << count ;
    
}

