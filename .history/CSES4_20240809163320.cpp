#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>t(n,-1);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t[i] = a;
    }

    long long int tot = 0;
    for(int i=1;i<n;i++){
        if(t[i] < t[i-1]){
            int diff = abs(t[i] - t[i-1]);
            t[i] =  + t[i];
        }
    }
    cout<<tot<<endl;
}