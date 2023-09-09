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
    int t;
    cin >> t;
    while(t--)
    {
        char goals[11];
       for(int i =1;i<=10;i++)
        cin >> goals[i];
        int parity = -1;
        for(int i = 1;i<=10;i++)
        {
            if(goals[i]=='1')
            {
                if(i&1)
                {
                    parity = 1;
                }
                else
                    parity = 0;
                break;
            }
        }
        if(parity == -1)
        {
            cout << 6 << endl;
            continue;
        }
        for(int i =1;i<=10;i++)
        {
            if(goals[i]=='?')
            {
                if(i%2==parity)
                    goals[i]='1';
                else
                    goals[i]='0';
            }
        }
        int count = 0;
        int odd = 0;
        int even = 0;
        bool check = false;
        for(int i =1 ;i<=8;i++)
        {   
            if(goals[i]=='1')
            {
                if(i&1)
                    odd++;
                else
                    even++;
            }
            
            if(abs(even-odd)>((10-i)/2))
            {   
                cout << i << endl;
                check = true;
                break;

            }


        }
        
        if(!check)
        {   
            if(abs(odd-even)<=1) 
            cout << 10 << endl;
        else
            cout << 9 <<endl; 
        }
    }
    
}

