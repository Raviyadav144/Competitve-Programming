#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
        int countWords(string list[], int n)
        {   
            int count =0; 
           unordered_map <string , int> m;
           for(int i=0; i<n ; i++)
           {
           		m[list[i]]++;
           }
           for(auto x: m)
           {
           	if(x.second ==2)
           		count ++;
           }
          return count;

        }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        
        Solution ob;    
        cout << ob.countWords(list, n) << endl;;
    }
    
    
}