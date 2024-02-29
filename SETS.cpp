#include<iostream>
#include<set>

using namespace std;

int main() {

    set<int,greater<int>> sets;
    // set<int>sets;
    sets.insert(1);
    sets.insert(2);
    sets.insert(3);
    sets.insert(5);
    sets.insert(6);
    sets.insert(7);


    // cout<<sets.size()<<endl;
    // sets.insert(1);
    // cout<<sets.size()<<endl;


    // ITERATOR for printing elements...
    // set<int>::iterator itr;
    // for(itr = sets.begin(); itr!=sets.end();itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;

    // Using For each Loop.........For printing elements.....

    // for(auto value:sets) {
        // cout<<value<<" ";
    // }cout<<endl;

    // For deleting elements.........

    auto itr = sets.begin();
    advance(itr,3);
    sets.erase(itr);

    sets.erase(1);
    for(auto value:sets) {
        cout<<value<<" ";
    }cout<<endl;

    auto start_itr = sets.begin();
    start_itr++;

    auto end_itr = sets.begin();
    advance(end_itr,4);

    sets.erase(start_itr,end_itr);
    for(auto value:sets) {
        cout<<value<<" ";
    }cout<<endl;


    if(sets.find(2)!= sets.end()){
        cout<<"Element is present in the Set."<<endl;
    } else{
        cout<<"Element is not present in the Set."<<endl;
    }

    

    return 0;
}