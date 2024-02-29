#include<iostream>
using namespace std

oid Insertion_Sort(vector<int> &vec){
    int n = vec.size();

    for (int i=1;i<n;i++){
        int curr_ele = vec[i];

        int j = i - 1;

        while (j>=0 && vec[j] > curr_ele){
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = curr_ele;
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for (int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    // Bubble_Sort(arr);
    // Selection_Sort(arr);
    Insertion_Sort(arr);

    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
