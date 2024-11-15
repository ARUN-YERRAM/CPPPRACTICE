#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<long long int>h1;
    vector<long long int>h2;
    for(int i=0;i<n;i++)
    {
        long long int a;
        cin>>a;
        h1.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        long long int a;
        cin>>a;
        h2.push_back(a);
    }
    // sort(h1.begin(),h1.end());
    // sort(h2.begin(),h2.end());
    int i = 0;
    int j = 0;
    int cnt = 0;
    while(i < n && j < m){
        while(h1[i] <= h2[j]){
            cout<<h1[i]<<endl;
            i++,j++;
            cnt++;
        }else i++;
    }
    if(cnt < m){
        while(cnt < m){
            cout<<-1<<endl;
            cnt++;
        }
    }
    return 0;
}