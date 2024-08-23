#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;

    vector<int>vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int j,k;
    int sum = 0;
    bool f = true;
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        mp[vec[i]].push_back(i+1);
    }
    for(int i=0;i<n;i++){
        sum = vec[i];
        j = i+1;
        k = n-1;

        while(j<k){
            if((sum + vec[j] + vec[k]) == x){
                f = false;
                if(sum == vec[j] && sum == vec[k])
                    cout<<mp[vec[i]][0]<<" "<<mp[vec[j]][1]<<" "<<mp[vec[k]][2]<<endl;
                else if(vec[j] == vec[k]){
                    
                }
                break;
            }
            else if((sum + vec[j] + vec[k]) < x){
                j++;
            }else k--;

            if(!f)break;
        }
    }
    if(f)cout<<"IMPOSSIBLE"<<endl;
    return 0;
}