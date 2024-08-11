#include<bits/sdtdc++.h>
using namespace std;

void Recrse(vector<int>t,int i,int n,int sum){
    if(i >n)return;

    if(i == n){
        int tot = 0;
        for(auto it:t){
            tot += it;
        }tot += i;
        if(tot == n){
            t.push_back(i);
        }
    }

    t.push_back(i);
    Recrse(t,i+1,n,sum);
    t.pop_back();
    Recrse(t,i+1,n,sum);
    
    return;
}
int main(){
    int t;
    cin>>n;

    long long int tot = 0;
    vector<int>t;
    for(int i=1;i<=n;i++){
        tot += i;
    }if(tot%2 != 0)cout<<"NO"<<endl;
    else{
        Recrse(t,1,n/2,0);
        cout<<"YES"<<endl;
        for(auto it:t)cout<<it<<" ";
        cout<<endl;
    }
}