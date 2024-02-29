#include<iostream>
#include<Queue>

using namespace std;
// 
// // class BinaryTree{

// //     public:
// //     int a[20];
// //     int top;

// //     BinaryTree(int root,int size){
// //         a = new int[size];
// //         a[0] = root;
// //         top = 0;
// //     }

// //     void setleft(int rootIndex,int ele){
// //         a[(rootIndex*2)+1] = ele;
// //         top+=1;
// //     }
// //     void setRight(int rootIndex,int ele){
// //         a[(rootIndex*2)+2] = ele;
// //         top+=1;
// //     }

// //     int getParent(int idx){
// //         return idx[];
// //     }

// //     int size(){
// //         return top;
// //     }

// //     void printTree(){
// //         for(int i=0;i<6;i++){
// //             cout<<a[i];
// //         }
// //     }
    
// // };
// // int main(){

// //     BinaryTree* b = new BinaryTree(45);
// //     b->setleft(0,34);
// //     b->setRight(0,40);
// //     b->setleft(1,25);
// //     b->setRight(1,56);
// //     b->setleft(2,12);
// //     b->setRight(2,345);
// //     b->printTree();
// //     cout<<b->size()<<endl;


// //     return 0;
// // }



// #include<iostream>
// using namespace std;

// class BinaryTree
// {
// public:
//     int *a;
//     int top;

//     BinaryTree(int root, int size)
//     {
//         a = new int[size];
//         a[0] = root;
//         top = 0;
//     }

//     void setLeft(int rootIndex, int element)
//     {
//         a[(rootIndex * 2) + 1] = element;
//         top += 1;
//     }

//     void setRight(int rootIndex, int element)
//     {
//         a[(rootIndex * 2) + 2] = element;
//         top += 1;
//     }

//     int size()
//     {
//         return top + 1;
//     }

//     void printTree()
//     {
//         for (int i = 0; i < size(); i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }

//     void insert(int ele){

//     }
// };

// int main()
// {
//     BinaryTree *b = new BinaryTree(45, 20);
//     b->setLeft(0, 34);
//     b->setRight(0, 40);
//     b->setLeft(1, 29);
//     b->setRight(1, 16);
//     b->setLeft(2, 22);
//     b->setRight(2, 30);
//     b->printTree();
//     cout << "Size: " << b->size() << endl;
//     delete[] b->a; // Free allocated memory
//     delete b;      // Free the object
//     return 0;
// }





class BST
{
public:
    int a[20];
    int top;
    int m;

    BST(int root, int size)
    {
        a[0] = root;
        top = 0;
        m = size;
    }

    void leftnode(int le, int d)
    {
        int index = ri * 2 + 1;
        if (index >= m){
            cout << "Array Full\n";
            return;
        }
        a[index] = d;
        top++;
    }

    void rightnode(int ri, int d)
    {
        int index = ri * 2 + 2;
        if (index >= m){
            cout << "Array Full\n";
            return;
        }
        a[index] = d;
        top++;
    }

    int size()
    {
        return top + 1; // Since top starts from 0
    }

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << a[i] << " ";
        }
    }

    void insert(int element){
        if (top >= m - 1){
            cout << "Array Full\n";
            return;
        }
        a[++top] = element;
        heapifyUp(top);
    }

    void heapifyUp(int index){
        while (index > 0){
            int parentIndex = getparentindex(index);
            if (a[parentIndex] < a[index]){
                swap(a[parentIndex], a[index]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    int getparentindex(int index){
        return (index - 1) / 2;
    }
};

int main()
{
    BST b1(45, 20); 
    b1.leftnode(0,34);
    b1.rightnode(0,40);
    b1.leftnode(1,23);
    b1.rightnode(1,16);
    b1.leftnode(2,22);
    b1.rightnode(2,30);
    b1.leftnode(3,2);
    b1.display();
    cout << "\nSize: " << b1.size() << endl;
    b1.insert(52);
    b1.display();
    cout << "\nSize: " << b1.size() << endl;
    b1.insert(109);
    b1.display();
    cout << "\nSize: " << b1.size() << endl;
}