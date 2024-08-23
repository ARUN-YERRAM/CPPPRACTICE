#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<long long int>vec;

    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        vec.push_back(x);
    }
    long long int tot = vec[0];
    long long int maxi = INT_MIN;
    for(int i=1;i<n;i++){
        // maxi = max(maxi,tot);
        tot += vec[i];
        // maxi = max(maxi,tot);

        if(tot < 0)tot = 0;
    }cout<<maxi<<endl;
}

// 8
// -1 3 -2 5 3 -5 2 2

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long int> vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    long long int tot = 0;
    long long int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        tot += vec[i];
        maxi = max(maxi, tot);

        if(tot < 0) tot = 0;
    }

    cout << maxi << endl;
    return 0;
}
