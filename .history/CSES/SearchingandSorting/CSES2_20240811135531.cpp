#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,k;
    cin>>n>>m>>k;

    vector<long long int>Dsz;
    vector<long long int>Asz;
    // vector<int>
    for(long long int i=0;i<n;i++){
        long long int a;
        cin>>a;
        Dsz.push_back(a);
    }

    for(long long int i=0;i<m;i++){
        long long int a;
        cin>>a;
        Asz.push_back(a);
    }

    sort(Asz.begin(),Asz.end());
    // priority queue????
    // 4 3 5
// 60 45 80 60
// 30 60 75
    sort(Dsz.begin(),Dsz.end());

    #include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, m, k;
    cin >> n >> m >> k;

    vector<long long int> Dsz(n);
    vector<long long int> Asz(m);

    for(long long int i = 0; i < n; i++) {
        cin >> Dsz[i];
    }

    for(long long int i = 0; i < m; i++) {
        cin >> Asz[i];
    }

    sort(Dsz.begin(), Dsz.end());
    sort(Asz.begin(), Asz.end());

    long long int i = 0, j = 0, tot = 0;

    while (i < n && j < m) {
        if (Dsz[i] >= Asz[j] - k && Dsz[i] <= Asz[j] + k) {
            // If Dsz[i] is within the range of Asz[j], count the match
            tot++;
            i++;
            j++;
        } else if (Dsz[i] < Asz[j] - k) {
            // If Dsz[i] is too small, move to the next element in Dsz
            i++;
        } else {
            // If Dsz[i] is too large, move to the next element in Asz
            j++;
        }
    }

    cout << tot << endl;
    return 0;
}

//     long long int tot = 0;
//     for(long long int i=0;i<Asz.size();i++){
//         for(long long int j=0;j<Dsz.size();j++){
//             if(Dsz[j] >= Asz[i] - k && Dsz[j] <= Asz[i]+k){
//                 tot++;
//                 Dsz.erase(Dsz.begin()+j);
//                 Asz.erase(Asz.begin()+i);
//                 i--;
//                 // j = 0;
//                 break;
//             }else if(Dsz[j] > Asz[i] + k){
//                 // j++;
//                 break;
//             }
//             // else j++;
//         }
//     }
//     // 10 10 10
// // 90 41 20 39 49 21 35 31 74 86
// // 14 24 24 7 82 85 82 4 60 95
//     cout<<tot<<endl;
//     return 0;
}
