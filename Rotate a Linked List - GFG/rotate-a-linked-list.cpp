//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }
        int len = 0;
        Node* curr = head;
        queue<int> st;
        for( ; curr!=NULL; curr = curr->next){
            len++;
            if(k+1 == len){
                break;
            }
            st.push(curr->data);
        }
        if(len == st.size()){
            return head;
        }
        Node* newHead = curr;
        Node* prev = NULL;
        while(curr != NULL){
            prev = curr;
            curr = curr->next;
            len++;
        }
        while(!st.empty()){
            Node* temp =new Node( st.front());
            prev->next = temp;
            prev = prev->next ;
            st.pop();
        }
        return newHead;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends