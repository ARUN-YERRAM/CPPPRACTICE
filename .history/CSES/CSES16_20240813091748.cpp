#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    vector<long long int>t;
    for(int i=0;i<n;i++){
        long long int a;
        cin>>a;
        t.emplace_back(a);
    }
    sort(t.begin(),t.end());


    long long half_sum = total_sum / 2;
    vector<int> set1, set2;
    

    for (int i = n; i >= 1; --i) {
        if (half_sum >= i) {
            set1.push_back(i);
            half_sum -= i;
        } else {
            set2.push_back(i);
        }
    }


}