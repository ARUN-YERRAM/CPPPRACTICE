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


string Inorder(Node*root){
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




















/*write a c++ program to create a sparse matrix and print the matrix
Hint: Take input matrix as
0 0 9
5 0 8
7 0 0
Sample input-Output:
The matrix is:
0 0 9
5 0 8
7 0 0
The number of zeros in the matrix are 5
This is a sparse matrix
*/

#include<iostream>,,
using namespace std;

int main(){
    // int row;
    // int col;
    int cnt = 0;
    // cin>>row>>col;
    
    int matrix[3][3];
    
    
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    
    cout<<"The matrix is:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j] == 0){
                cnt++;
            }
            cout<<matrix[i][j]<<" ";
        } cout<<endl;
    }
    
    cout<<"The number of zeros in the matrix are ";
    cout<<cnt<<endl;
    cout<<"This is a sparse matrix";
    
    
}













































/*write a cpp program to find the second minimum node in a binary tree
    Hint:Use inbuilt queue and vectors
             2
            / \
            2  5
              / \   
              5  7
Sample Input
{2,2,5,NULL,NULL,5,7}
Output
5
*/

#include<iostream>
using namespace std;

// class Node{
//     int data;
//     Node*left;
//     Node*right;
    
//     public:
//     Node(int val){
//         data = val;
//         root->left = NULL;
//         root->right = NULL;
//     }
// };


int main() {
    
    vector<int>vec(7);
    for (int i=0;i<7;i++){
        int val;
        cin>>val;
        vec[i] = val;
    }
    // queue<int>que;
    // Node*g;
    // g.insertNode(root);
    int mini = vec[0];
    int mini2 = mini;
    for(int i=0;i<7;i++){
        
    }
    
}