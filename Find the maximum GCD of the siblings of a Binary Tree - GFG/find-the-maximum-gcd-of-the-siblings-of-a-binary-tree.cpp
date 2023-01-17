//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

// } Driver Code Ends
//User function Template for C++

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


class Solution
{
public:
    

    int gcd(int a, int b)
    {
        // int result = min(a, b);
        // while (result > 0) {
        //     if (a % result == 0 && b % result == 0) {
        //         break;
        //     }
        //     result--;
        // }
        
        return __gcd(a, b); 
    }
    
    void traverse(Node* root, int& maxi, int& ans){
        if(root==NULL){return;}
        if(root->left!=NULL && root->right!=NULL){
            int temp = gcd(root->left->data, root->right->data);
            if(temp>maxi){
                maxi = temp;
                ans = root->data;
            }
            else if(temp == maxi){
                ans = max(ans, root->data);
            }
        }
        traverse(root->left, maxi, ans);
        traverse(root->right, maxi, ans);
    }

    int maxGCD( Node* root)
    {
        //code here
        int ans = 0;
        int maxi = 0;
        traverse(root, maxi, ans);
        return ans;
    }
};




//{ Driver Code Starts.
int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string treeString;
		getline(cin,treeString);
		Node* root = buildTree(treeString);
		Solution ob;
		cout<<ob.maxGCD(root)<<endl;
    }
    return 0;
}

// } Driver Code Ends