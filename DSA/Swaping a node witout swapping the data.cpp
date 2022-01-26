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


struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        Node* head1 = new Node(-1);
        Node* temp2 = head1;
        Node* temp = head;
        if(temp-> next == NULL)
        return head;
        Node* temp1 = temp -> next;
        
        while(temp -> next ->next != NULL)
        {
           Node *temp3 = temp1 -> next;
           temp2 -> next = temp1;
           temp2  = temp2 -> next;
           temp2 -> next= temp;
           temp = temp3;
           if(temp -> next == NULL)
           {
                temp2 = temp2 -> next;
                temp2 -> next = temp;
                return head1 -> next;
           }
           temp1 = temp -> next;
           temp2 = temp2 -> next;
           
        }
        temp2 -> next = temp -> next;
        temp2 = temp2 -> next;
        temp2 -> next = temp;
        temp2 -> next -> next  =NULL;
        return head1 -> next;
        
    }
};

// { Driver Code Starts.

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        map<Node*, int> mp;
        mp[head] = head->data;
        for (int i = 0; i<n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
            mp[tail] = tail->data;
        }
        struct Node *failure = new Node(-1);
        Solution ob;
        head = ob.pairWiseSwap(head);
        int flag = 0;
        struct Node *temp = head;
        while(temp){
            if(mp[temp] != temp->data){
                flag = 1;
                break;
            }
            temp = temp->next;
        }
        if(flag)
            printList(failure);
        else
            printList(head);
    }
    return 0; 
}
  // } Driver Code Ends