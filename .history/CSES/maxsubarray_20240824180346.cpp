#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a,b;
    cin>>n>>a>>b;

    vector<long long int>t;
    for(int i=0;i<n;i++){
        long long int e;
        cin>>e;
        t.push_back(e);
    }

    long long int maxi = INT_MIn;

    int i = 0;
    int j = 0;
    long long int sum = 0;
    while(i<n && j<n){
        // sum += t[j];

        if(j-i+1 < a){
        sum += t[j];
        maxi = max(maxi,sum);
            j++;
        }
        else if((j - i+1) >= a && (j-i+1) <= b){
        sum += t[j];

            maxi = max(maxi,sum);
            j++;
        } else{
            sum -= t[i];
            i++;
        }
    }cout<<maxi<<endl;
    return 0;

    // 8 1 2
// -1 3 -2 5 3 -5 2 2
}