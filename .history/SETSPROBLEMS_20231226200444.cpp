#include<iostream>
#include<set>
#include<vector>
#include<cctype>
#include<algorithm>
using namespace std;

bool checkAllAlphabets(string &s) {
    
    if(s.length()<26){
        return false;
    }

    transform(s.begin(),s.end(),s.begin(),::tolower);

    set<char> alphabets;

    for(auto it:s){
        alphabets.insert(it);
    }

    return (alphabets.size()==26);

}
int main() {
    string name = "abcdefghIjKlMNOPQRSTUV"
    // getline(cin,name);

    if(checkAllAlphabets(name)){
        cout<<"String has all alphabets";
    } else{
        cout<<"String not has all alphabets";
    }

    return 0;
}

// ................Sum of two vectors of common elements..........

// int main() {
//     int n,m;
//     cin>>n>>m;

//     vector<int>vec1(n);
//     vector<int>vec2(m);

//     for(int i=0;i<n;i++){
//         cin>>vec1[i];
//     }

//     for(int i=0;i<m;i++){
//         cin>>vec2[i];
//     }

//     set<int>sets;

//     for(int i=0;i<n;i++){
//         sets.insert(vec1[i]);
//     }

//     int sum = 0;
//     for(int i=0;i<m;i++){
//         if(sets.find(vec2[i])!=sets.end()){
//             sum+=vec2[i];
//         }
//     }
//     cout<<sum<<endl;

// }


//  Input names in set and print unique names.........


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