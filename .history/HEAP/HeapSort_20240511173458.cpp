#include<bits/stdc++.h>
using namespace std;
void BuildMaxHeap(int arr[],int N){
    for(int i=N/2-1;i>=0;i--){
        Heapify();
    }
}
int main(){

    // int n;
    int arr[] = {12,23,34,65,44,24,54,23,22,43,25,64,34};

    BuildMaxHeap(arr,13); 
    return 0;
}