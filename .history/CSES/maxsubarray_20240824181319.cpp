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

    long long int maxi = INT_MIN;

    int i = 0;
    int j = 0;
    long long int sum = 0;
    while(i<n && j<n){

        sum += t[j];

        // Ensure the window size is within the range [a, b]
        if (j - i + 1 > b) {
            sum -= t[i++];
        }

        if (j - i + 1 >= a) {
            maxi = max(maxi, sum);
        }
        j++;
        // sum += t[j];

        // if(j-i+1 < a){
        // sum += t[j];
        // // maxi = max(maxi,sum);
        //     j++;
        // }
        // else if((j - i+1) >= a && (j-i+1) <= b){
        // sum += t[j];

        //     maxi = max(maxi,sum);
        //     j++;
        // } else{
        //     sum -= t[i];
        //     // maxi = max(maxi,sum);
        //     i++;
        // }
    }
    while(j-i > b){
        sum -= t[i];
        maxi = max(maxi,sum);
        i++;
    }
    cout<<maxi<<endl;
    return 0;
    // 10 5 6
// -70 17 -37 -57 -20 73 76 54 17 54
    // 8 1 2
// -1 3 -2 5 3 -5 2 2
}
