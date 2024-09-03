#include<bits/stdc++.h>
using namespace std;

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

        bubble(arr,n);
        
        return 0;
}

