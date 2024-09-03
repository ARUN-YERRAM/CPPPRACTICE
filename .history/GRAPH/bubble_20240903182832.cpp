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
    int n1 = mid - l + 1; 
    int n2 = r - mid;      

    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    int i = 0; 
    int j = 0; 
    int k = l; 

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

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}
void Merge_sort(vector<int>&arr,int l,int r){

    if(l >= r)return;

    int mid = (l+r)/2;

    Merge_sort(arr,l,mid);
    Merge_sort(arr,mid+1,r);
    Merge(arr,l,mid,r);
}

int partition(vector<int>&arr,int l,int r){
    int pivot = arr[r]; // Pivot element
    int i = l - 1; // Index of the smaller element

    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    // Place the pivot element in its correct position
    std::swap(arr[i + 1], arr[r]);

    return i + 1; // Return the partitioning index
}
void Quick_sort(vector<int>&arr,int l,int r){
    if (l < r) {
        // Partition the array and get the partition index
        int pi = partition(arr, l, r);

        // Recursively sort elements before and after partition
        Quick_sort(arr, l, pi - 1);
        Quick_sort(arr, pi + 1, r);
    }
}
int main(){
        int n = 5;
        // cin>>n;
        vector<int>arr = {3,5,2,4,1};

        // selection(arr,n);
        // bubble(arr,n);
        // Insertion(arr,n);
        Merge_sort(arr,0,n);
        Quick_sort(arr,0,n);


        for(auto it:arr)cout<<it<<" ";

        return 0;
}

