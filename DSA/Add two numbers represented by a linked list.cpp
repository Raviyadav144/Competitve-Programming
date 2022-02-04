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


/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
string toInt(Node* head)
{
    Node * temp = head;
    string a = "";
    while(temp != NULL)
    {
        a+=to_string(temp -> data);
        temp = temp -> next;
    }
   
    return a;
}

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        string a = toInt(first);
        string b = toInt(second);
        string ans = "";
        int carry = 0;
        if(b.size() > a.size())
        swap(a,b);
    
        int i = a.size()-1 , j = b.size()-1;
        while(j>=0)
        {
            ans = to_string(((a[i]-'0' + b[j]-'0') + carry)%10) + ans ;
            
            if(((a[i]-'0' + b[j]-'0') + carry) > 9)
                carry = (a[i]-'0' + b[j]-'0' +carry)/10;
            else
            carry = 0;
            --j;
            --i;
        }
       
        while(i>=0)
        {
            ans = to_string((a[i]-'0' + carry)%10)+ans;
            if(((a[i]-'0' + carry))> 9)
                carry = ((a[i]-'0' + carry)/10);
            else
                carry = 0;
            --i;
        }
        if(carry)
            ans = to_string(carry) + ans;
        Node* dummy = new Node(-1);
        Node * temp = dummy;\
        int k = 0;
        while(k != ans.size())
        {
            temp -> next = new Node(ans[k]-'0');
            ++k;
            temp = temp -> next;
        }
        return dummy -> next;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends