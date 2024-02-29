#include<iostream>
#include<set>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;

    vector<int>vec1(n);
    vector<int>vec2(m);

    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }

    for(int i=0;i<m;i++){
        cin>>vec2[i];
    }

    set<int>sets;

    for(int i=0;i<n;i++){
        sets.insert(vec1[i]);
    }

    int sum = 0;
    for(int i=0;i<m;i++){
        if(sets.find(vec2[i]))
    }

}


// int main(){

//     set<string>set_name;

//     int n;
//     cin>>n;

//     while(n--){
//         string i;
//         cin>>i;

//         set_name.insert(i);
//     }

//     for(auto it:set_name){
//         cout<<it<<" ";
//     }cout<<endl;
// }