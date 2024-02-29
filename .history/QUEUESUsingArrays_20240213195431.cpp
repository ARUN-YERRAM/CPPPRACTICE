#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#include<bitset>
#include<math.h>
#include<cmath>
#include<numeric>
#include<string>
#include<stdlib.h>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<list>
#include<unordered_set>
#include<deque>
#include<random>
#include<chrono>
#include<stack>
#include<cctype>
#include<cstring>
#include<string>
#include<sstream>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data = data;
        this->next = NULL;
    }
};
class Queue{
    Node* head;
    Node*tail;

    public:
    Queue() {
        this->head = NULL;
        this->tail = NULL;
    }

    void enqueue(int data) {
        Node* new_node = new Node(data);
        if(this->head == NULL) {
            // If LL is empty..........
            this->head = this->tail = new_node;
        }
    }
}
