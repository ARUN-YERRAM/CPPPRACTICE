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
        Insertion(arr,n);
        Merge_sort(arr,0,n);


        for(auto it:arr)cout<<it<<" ";

        return 0;
}

