#include<iostream>
#include<Queue>

using namespace std;

class BinaryTree{

    public:
    int a[20];
    int top;

    BinaryTree(int root,int size){
        a = new int[size];
        a[0] = root;
        top = 0;
    }

    void setleft(int rootIndex,int ele){
        a[(rootIndex*2)+1] = ele;
        top+=1;
    }
    void setRight(int rootIndex,int ele){
        a[(rootIndex*2)+2] = ele;
        top+=1;
    }

    int getParent(int idx){
        return idx[]
    }

    int size(){
        return top;
    }

    void printTree(){
        for(int i=0;i<6;i++){
            cout<<a[i];
        }
    }
    
};
int main(){

    BinaryTree* b = new BinaryTree(45);
    b->setleft(0,34);
    b->setRight(0,40);
    b->setleft(1,25);
    b->setRight(1,56);
    b->setleft(2,12);
    b->setRight(2,345);
    b->printTree();
    cout<<

    return 0;
}