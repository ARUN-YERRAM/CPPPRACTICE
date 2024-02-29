/*write a program to perform the insertion of elements 10, 5, 15, 3, 7, 12, 18
and search a node 7 in a binary search tree.
Hint:

             10
            /  \
           5     15
          / \   /  \
         3   7  12 18
         
Sample Input:10, 5, 15, 3, 7, 12, 18
Sample output:
Inserting keys into the BST:
Inserted key 10. BST Inorder: 10 
Inserted key 5. BST Inorder: 5 10 
Inserted key 15. BST Inorder: 5 10 15 
Inserted key 3. BST Inorder: 3 5 10 15 
Inserted key 7. BST Inorder: 3 5 7 10 15 
Inserted key 12. BST Inorder: 3 5 7 10 12 15 
Inserted key 18. BST Inorder: 3 5 7 10 12 15 18 
Searching for key 7 in the BST:
Node with key 7 found in the BST.
*/




#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node*left;
    Node*right;
    
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};


void Inorder(Node*root){
    if(root==NULL) return;
    
    Inorder(root->left);
    
    cout<<root->val<<" ";
    
    Inorder(root->right);
}

int main(){
    
    // vector<int>vec(7);
    
    // for(int i=0;i<7;i++){
    //     int val;
    //     cin>>val;
        
    //     vec[i] = val;
    // }
    
    // Node* root = new Node(10);
    // root->left = new Node(5);
    // root->right = new Node(15);
    // root->left->left = new Node(3);
    // root->left->right = new Node(7);
    // root->right->left = new Node(12);
    // root->right->right = new Node(18);
    
        Node* root = new Node(10);
        cout<<"Inserted key 10"<<"."<<" BST Inorder: "<<Inorder(root)<<endl;
        
        root->left = new Node(5);
        cout<<"Inserted key 5"<<"."<<" BST Inorder: "<<Inorder(root)<<endl;
       
         root->right = new Node(15);
        cout<<"Inserted key 15"<<"."<<" BST Inorder: "<<Inorder(root)<<endl;
          
        root->left->left = new Node(3);
        cout<<"Inserted key 3"<<"."<<" BST Inorder: "<<Inorder(root)<<endl;
        
        root->left->right = new Node(7);
        cout<<"Inserted key 7"<< "." << " BST Inorder: "<<Inorder(root)<<endl;

        root->right->left = new Node(12);
        cout<<"Inserted key 12"<<"."<<" BST Inorder: "<<Inorder(root)<<endl;
    
        root->right->right = new Node(18);
        cout<<"Inserted key 18"<<"."<<" BST Inorder: "<<Inorder(root)<<endl;
   
}