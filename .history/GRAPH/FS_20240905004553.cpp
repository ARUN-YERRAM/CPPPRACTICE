#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    set<string>help = {"1","2","3","4",
    "5",
    
    };
    set<string>st;
    int n = str.size();
    for(int i=0;i<n;i++){
        for(int j = i;j<n;j++){
            string s = str.substr(i,j-i+1);
            if(st.find(s) != st.end()){
                st.insert(s);
            }
        }
    }
    cout<<st.size()<<endl;
    return 0;
}