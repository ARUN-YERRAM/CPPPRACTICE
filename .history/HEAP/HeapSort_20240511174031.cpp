#include<bits/stdc++.h>
using namespace std;

// 
void Heapify(int arr[],int idx,int n){
    int largest = idx;
    int left = 2*idx+1;
    int right = 2*idx+2;

    if(left < n && arr[left] > arr[largest])
        largest = left;
    if(right < n && arr[right] > arr[largest])
        largest = right;
    
    if(largest!=idx){
        swap(arr[largest],arr[idx]);
        Heapify(arr,largest,n);
    }
}
void printHeap(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void BuildMaxHeap(int arr[],int N){
    for(int i=N/2-1;i>=0;i--){
        Heapify(arr,i,N);
    }
}
int main(){

    // int n;
    int arr[] = {12,23,34,65,44,24,54,23,22,43,25,64,34};

    BuildMaxHeap(arr,13); 
    printHeap(arr,13);
    return 0;
}