#include<bits/stdc++.h>
#include<vector>
using namespace std;

void bucketSort(float arr[], int size) {
    vector<vector<float>>bucket(size,vector<float>());
    //  step1 buckets............

    // finding range.........
    // 
    float max_ele = arr[0];
    float min_ele = arr[0];
    for (int i=0;i<size;i++){
        max_ele=max(max_ele,arr[i]);
        min_ele=min(min_ele,arr[i]);
    }
    float range = (max_ele-min_ele)/size;


    //  step2 inserting elements into bucket
    for (int i=0;i<size;i++){
        // int index = arr[i]*size;
        int index = (arr[i]-min_ele)/range;
        //  boundary elements......
        // float diff = (arr[i] - min_ele)/range - index;
        // if (diff == 0 && arr[i]!= min_ele){
            // bucket[index-1].push_back(arr[i]);
        // }
        // else{
            bucket[index].push_back(arr[i]);
    // }
    }

    //  step3: sorting individual buckets.....
    for (int i=0;i<size;i++)
        if(!bucket[i].empty())
            sort(bucket[i].begin(),bucket[i].end());

    //  step4 : combining elements from buckets....
    int k=0;
    for (int i=0;i<size;i++)
        for (int j=0;j<bucket[i].size();j++)
            arr[k++]=bucket[i][j];
}

int main() {
    float arr[] = {0.12,0.45,1.23,0.35,0.45,0.54,2.45,0.65,0.53};
    int size = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr,size);

    for (int i=0;i<size;i++)
        cout << arr[i]<<" ";
    
    return 0;
}
