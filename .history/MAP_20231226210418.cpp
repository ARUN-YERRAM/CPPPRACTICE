#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {
    multimap<string,int>fruits;

    multimap.insert(make_pair("Mango",12));
    multimap.insert(make_pair("Apple",123));
    multimap.insert(make_pair("Guava",1234));

    for(auto it:fruits){
        cout<<"Fruit - "
    }



}


// int main() {

//     unordered_map<int,string>record;
//     // map<int,string>record;

//     record.insert(make_pair(3,"ria"));
//     record[2] = "nishitha";
//     record[1] = "arjun";
//     record[1] = "arun";

//     for(auto pair:record){
//         cout<<pair.first<<" "<<pair.second<<endl;
//     }


//     return 0;
// }

//  //////////////////////PROBLEM://///////////////////////////
// int main() {
//     int n;
//     cin>>n;

//     vector<int> input(n);

//     for(int i=0;i<n;i++){
//         cin>>input[i];
//     }

//     map<int,int>freq;

//     for(int i=0;i<n;i++){
// //      Storing frequency of every element in input array
//         freq[input[i]]++;
//     }

//     int sum = 0;
//     // pair : element, frequency...
//     for(auto pair:freq){
//         if(pair.second>1){
//             sum+=pair.first;
//         }
//     }

//     cout<<"ANS- "<<sum<<endl;


    


//     return 0;
// }