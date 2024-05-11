#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    int *arr,;
    int size;
    int Heap_size;

    MaxHeap(int n){
        Heap_size = n;
        size = 0;
        arr = new int[n];
    }

    void insert(int val){
        if(size == Heap_size){
            cout<<"Heap is OverFlow"<<endl;
            return;
        }

        arr[size] = val;
        int idx = size;
        size++;

        while(idx>0 && arr[(idx-1)/2] < arr[idx]){
            swap(arr[(idx-1)/2],arr[idx]);
            idx = (idx-1)/2;
        } 
        cout<<arr[idx]<<"is deleted form heap"<<endl;
    }
};

int main(){
    MaxHeap h1(6);
    h1.insert(2);
    h1.insert(3);
    h1.insert(3);
    h1.insert(34);

}