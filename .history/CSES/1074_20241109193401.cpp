#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<long long int>t;
    for(int i=0;i<n;i++){
        long long int a;
        cin>>a;
        t.push_back(a);
    }
    long long int tot = 0;

    sort(t.begin(),t.end());

    


    cout<<tot<<endl;


    return 0;
}