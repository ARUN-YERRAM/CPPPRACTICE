#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int>mp={1,2};

    mp.insert(3);
    mp.insert(34);
    mp.insert(5);

    for(auto it:mp){
        cout<<it<<" ";
    }cout<<endl;

    mp.erase(34);
    mp.erase(mp.begin(),)
}
