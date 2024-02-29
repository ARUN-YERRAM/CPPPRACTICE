//  .............Hashing is used in unordered set and unordered map also..............

#include<iostream>
#include<list>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

class Hashing{

    vector<list<int>>hashtable;
    int buckets; 

    public:
        Hashing(int size){

            buckets = size;
            hashtable.resize(size);
        }

        int hashValue(int key){

            return key%buckets; // division method
        }

        void addKey(int key) {
            int idx = hashValue(key);
            hashtable[idx].push_back(key);
        }

        list<int>::iterator searchKey(int key){

            int idx = hashValue(key);

            return find(hashtable[idx].begin(),hashtable[idx].end(),key);

        }

        void deleteKey(int key) {

            int idx = hashValue(key);
            auto it = searchKey(key);

            if(it != hashtable[idx].end()){ // key is present....

                hashtable[idx].erase(it);

                cout<<key<<" is deleted"<<endl;
            }
            else{
                cout<<"key is not present in the hashtable"<<endl;
            }
        }
    };

int main() {

    Hashing h(10);

    h.addKey(5);
    h.addKey(23);
    h.addKey(123);
    h.addKey(1);

    h.deleteKey(23);
    h.deleteKey(23);

    return 0;
}

