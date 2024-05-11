#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    int *arr;
    int size;
    int Heap_size;

public:
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

        while(idx>0 && arr[(idx-1)/2] > arr[idx]){
            swap(arr[(idx-1)/2],arr[idx]);
            idx = (idx-1)/2;
        } 
        cout<<arr[idx]<<" is inserted into Heap"<<endl;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        } cout<<endl;
    }

    void Heapify(int idx){
        int largest = idx;
        int left = 2*idx+1;
        int right = 2*idx+2;

        if(left < size && arr[largest] > arr[left]){
            largest = left;
        }
        if(right < size && arr[largest] > arr[right]){
            largest = right;
        }

        if(largest!=idx){
            swap(arr[largest],arr[idx]);
            Heapify(largest);
        }
    }
    void Delete(){
        if(size == 0){
            cout<<"Heap Underflow"<<endl;
            return;
        }
        cout<<arr[0]<<" deleted from the heap"<<endl;
        arr[0] = arr[size - 1];
        size--;

        if(size == 0) return;

        Heapify(0);
    }
};

int main(){
    MaxHeap h1(6);
    h1.insert(2);
    h1.insert(3);
    h1.insert(3);
    h1.insert(34);
    h1.insert(334);
    h1.insert(12);
    h1.insert(345);
    h1.insert(65);
    h1.print();
    h1.Delete();
    h1.print();

    h1.Delete();
    h1.Delete();
    h1.print();
}