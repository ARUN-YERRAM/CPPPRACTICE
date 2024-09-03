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

// void Merge(vector<int>&arr,int n){

// }
int main(){
        int n = 5;
        // cin>>n;
        vector<int>arr = {3,5,2,4,1};

        // selection(arr,n);
        // bubble(arr,n);
        Insertion(arr,n);

        for(auto it:arr)cout<<it<<" ";

        return 0;
}

