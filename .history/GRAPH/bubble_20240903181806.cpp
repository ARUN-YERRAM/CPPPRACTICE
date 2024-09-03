#include<bits/stdc++.h>
using namespace std;

void selection(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        int minidx = i;
        int mini = arr[i];

        for(int j=i+1;j<n;j++){
            if(arr[j] < mini){
                mini = arr[j];
                minidx = j;
            }
        }swap(arr[i],arr[minidx]);
    }
}
void bubble(vector<int>&arr,int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            } 
            // !f break 
        }
    }
}

void Insertion(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        int ele = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > ele){
            // swap(arr[j],arr[j+1]);
            arr[j+1] = arr[j];
            j--;
        }arr[j+1] = ele;
    }
}

void Merge(vector<int>&arr,int l,int mid,int r){
    int n1 = mid - l + 1; // Length of the left half
    int n2 = r - mid;      // Length of the right half

    // Create temporary arrays to hold the two halves
    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into the original array
    int i = 0; // Initial index of the left half
    int j = 0; // Initial index of the right half
    int k = 0; // Initial index of the merged array

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of leftArr, if any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy any remaining elements of rightArr, if any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}
void Merge_sort(vector<int>&arr,int l,int r){

    if(l > r)return;

    int mid = (l+r)/2;

    Merge_sort(arr,l,mid);
    Merge_sort(arr,mid+1,r);
    Merge(arr,l,mid,r);
}
int main(){
        int n = 5;
        // cin>>n;
        vector<int>arr = {3,5,2,4,1};

        // selection(arr,n);
        // bubble(arr,n);
        // Insertion(arr,n);
        Merge_sort(arr,0,n);


        for(auto it:arr)cout<<it<<" ";

        return 0;
}

