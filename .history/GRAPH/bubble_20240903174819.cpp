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
        }swap(a);
    }
}
void bubble(vector<int>&arr,int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
        int n;
        cin>>n;
        vector<int>arr = {3,5,2,4,1};

        selection(arr,n);
        bubble(arr,n);

        return 0;
}
