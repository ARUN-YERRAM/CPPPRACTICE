#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int>Dsz;
    vector<int>Asz;
    // vector<int>
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        Dsz.push_back(a);
    }

    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        Asz.push_back(a);
    }

    sort(Asz.begin(),Asz.end());
    // 4 3 5
// 60 45 80 60
// 30 60 75
    sort(Dsz.begin(),Dsz.end());
    long long int tot = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(Dsz[j] >= Asz[i] - k && Dsz[j] <= Asz[i]+k){
                tot++;
                Dsz.erase(Dsz.begin()+j);
                break;
            }else if(Dsz[j] > Asz[i] + k)break;
        }
    }cout<<tot<<endl;
    return 0;
}
