#include<iostream>
using namespace std;

class Node{
    int data;
    Node * left;
    Node *  right;

    Node(int val){
        data = val;
        Node*left = NULL;
        Node*right = NULL;
    }
}

int main(){

    Node * left = new Node(1);
    Node * sec = new Node(2);



    return 0;
}