#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int>t;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        t.push_back(x);
    }
    sort(t.begin(),t.end());
    int tot = 0;
    int c= 0;
    for(auto it:t){
        if(it < 0){
            tot += abs(it);
        }else{
            tot -= it;
        }
        c++;
        if(c >= m)break;
    }cout<<tot<<endl;
    return 0;
}