#include<iostream>
#include<map>
#include<vector>

using namespace std;


//  PROBLEM:
int main() {
    int n;
    cin>>n;

    vector<int> input(n);

    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    map<int,int>freq;

    for(int i=0;i<n;i++){
//      Storing frequency of every element in input array
        freq[input[i]]++;
    }

    int sum = 0;
    // pair : element, frequency...
    for(auto pair:freq){
        if(pair.second>1){
            sum+=pair.first;
        }
    }

    cout<<"ANS- "<<sum<<endl;


    


    return 0;
}