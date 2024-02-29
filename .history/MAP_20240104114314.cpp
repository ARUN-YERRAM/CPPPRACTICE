#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {
    multimap<string,int>fruits;

    fruits.insert(make_pair("Mango",12));
    fruits.insert(make_pair("Apple",123));
    fruits.insert(make_pair("Guava",1234));
    fruits.insert(make_pair("Guava",1234));
        



    for(auto it:fruits){
        cout<<"Fruit - "<<it.first<<endl;
        cout<<"Count - "<<it.second<<endl;
    }



}


// int main() {

//     unordered_map<int,string>record;
//     // map<int,string>record;

//     record.insert(make_pair(3,"ria"));
//     record[2] = "nisHitHa";
//     record[1] = "arJun";


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