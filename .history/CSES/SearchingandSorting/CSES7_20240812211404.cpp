#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>t;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t.emplace_back(a);
    }

    sort(t.begin(),t.end());
    int i = 0,j = n-1;
    while(i<j){
        if((t[i] + t[j]) == k){
            cout<<t[i]<<" "<<t[j]<<endl;
            break;
        }
        else if(t[i] + t[j] > k)j--;
        else i++;
    }return 0;
}