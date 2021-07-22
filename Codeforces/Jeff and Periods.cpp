#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    map<int , vector<int>>m;
    for(int i =0;i<n;i++)
    {
        int a ;
        cin >> a;
        if(n==1)
        {   cout << 1 << endl;
            cout << a <<  " "<< 0;
            return 0; 
        }
        m[a].push_back(i);

    }
    int count =0;
    vector<pair<int , int>>ans;
    fora(key, m)
    {
        if(key.second.size()==1)
        {   count++;
            ans.push_back({key.first,0});
            
        }
        else if(key.second.size()==2)
        {   count++;
            ans.push_back({key.first,key.second[1]-key.second[0]});
            
        }
        else
            {   bool check = false;
                
                for(int i =2;i<key.second.size();i++)
                {
                    if(key.second[i]+key.second[i-2] != 2*(key.second[i-1]))
                    {
                        check = true;
                        break;
                    }
                }
                if(!check)
                {   
                    count++;
                    ans.push_back({key.first,key.second[1]-key.second[0]}) ;
                }

            } 
    }
    cout << count << endl;
    fora(e,ans)
    cout << e.first <<" "<<e.second << endl;
    
}

