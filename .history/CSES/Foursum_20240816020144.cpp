#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,x;
    cin>>n>>x;
 
    vector<long long int>vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int j,k;
    long long int sum = 0;
    bool f = true;
    map<long long int,vector<long long int>>mp;
    for(long long int i=0;i<n;i++){
        mp[vec[i]].push_back(i+1);
    }
    sort(vec.begin(),vec.end());
    for(long long int i=0;i<n;i++){
        for(int m = i+1;m<n;m++){
        sum = vec[i];
        j = m+1;
        k = n-1;
// 2 7 5 1
// 1 2 3 4
 
// 1 2 5 7
// 4 1 3 2
        while(j<k){
            if((sum + vec[m] + vec[j] + vec[k]) == x){
                f = false;
                if((sum == vec[j]) && (sum == vec[k]) && sum == vec[m]){
                    cout<<mp[vec[m]][0]<<" "<<mp[vec[j]][1]<<" "<<mp[vec[k]][2]<<mp[vec[i]][3]<<endl;
                    break;
                }
                else if((sum == vec[m]) && (sum == vec[j]) && sum!=vec[k]){
                    cout<<mp[vec[i]][0]<<" "<<mp[vec[i]][1]<<" "<<mp[vec[i]][2]<<mp[vec[k]][0]<<endl;
                    break;
                }else if((sum == vec[j]) && (sum == vec[k]) && sum!=vec[m]){
                    cout<<mp[vec[i]][0]<<" "<<mp[vec[j]][0]<<" "<<mp[vec[k]][0]<<mp[vec[m]][0]<<endl;
                }else if((sum == vec[m]) && (sum == vec[k]) && sum!=vec[j]){
                    cout<<mp[vec[i]][0]<<" "<<mp[vec[m]][0]<<" "<<mp[vec[k]][0]<<mp[vec[j]][0]<<endl;
                }
                else if((sum == vec[j]) && (sum != vec[k]) && sum!=vec[m]){
                    cout<<mp[vec[i]][0]<<" "<<mp[vec[j]][1]<<" "<<mp[vec[k]][0]<<mp[vec[m]][0]<<endl;
                }
                else if((sum == vec[k]) && (sum != vec[j]) && sum!=vec[m]){
                    cout<<mp[vec[i]][0]<<" "<<mp[vec[k]][1]<<" "<<mp[vec[j]][0]<<mp[vec[m]][0]<<endl;
                }
                else if((sum == vec[m]) && (sum != vec[k]) && sum!=vec[j]){
                    cout<<mp[vec[i]][0]<<" "<<mp[vec[m]][1]<<" "<<mp[vec[k]][0]<<mp[vec[m]][0]<<endl;
                }
                else if((vec[k] == vec[j]) && (sum != vec[j]) && vec[m]!=vec[j]){
                    cout<<mp[vec[k]][0]<<" "<<mp[vec[j]][1]<<" "<<mp[vec[i]][0]<<mp[vec[m]][0]<<endl;
                }
                else if((vec[m] == vec[j]) && (sum != vec[j]) && vec[k]!=vec[j]){
                    cout<<mp[vec[m]][0]<<" "<<mp[vec[j]][1]<<" "<<mp[vec[i]][0]<<mp[vec[k]][0]<<endl;
                }
                else{
                    cout<<mp[vec[i]][0]<<" "<<mp[vec[j]][0]<<" "<<mp[vec[k]][0]<<endl;
                    break;
                }
                break;
            }
            else if((sum + vec[j] + vec[k]) < x){
                j++;
            }else k--;
 
            if(!f)break;
        }if(!f)break;
    }
}
    if(f)cout<<"IMPOSSIBLE"<<endl;
    return 0;
}