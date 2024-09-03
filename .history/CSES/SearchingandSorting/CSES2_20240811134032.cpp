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
        for(int j=0;j<Dsz.size();){
            if(Dsz[j] >= Asz[i] - k && Dsz[j] <= Asz[i]+k){
                tot++;
                Dsz.erase(Dsz.begin()+j);
                j = 0;
                break;
            }else if(Dsz[j] > Asz[i] + k)break;
            else j++;
        }
    }
    10 10 10
// 90 41 20 39 49 21 35 31 74 86
// 14 24 24 7 82 85 82 4 60 95
    cout<<tot<<endl;
    return 0;
}
