#include<iostream>
#include<Queue>

using namespace std;

class BinaryTree{

    public:
    int a[];
    int top;

    BinaryTree(int root,int size){
        a = new int[size];
        a[0] = root;
        top = 0;
    }

    void setleft(int rootIndex,int ele){
        a((rootIndex*2)+1) = ele;
        top+=1;
    }
    void setRight(int rootIndex,int ele){
        a((rootIndex*2)+2) = ele;
        top+=1;
    }

    int size(){
        return top;
    }

    void printTree(){
        for(int i=0;i<6;i++){
            cout<<
        }
    }
    
};
int main(){

    return 0;
}