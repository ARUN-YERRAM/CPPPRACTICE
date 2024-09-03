#include<bits/stdc++.h>
using namespace std;

void Recrse(string str,vector<string>&vec,int n,int i,string st){
    if(i == n){
        st += str[i];
        if(find(vec.begin(),vec.end(),st) == vec.end()){
            vec.push_back(st);
        }
        return;
    }
    if(i >= n)return;
    
    st += st[i];
    Recrse(str,vec,n,i+1,st);
    st.pop_back();
    Recrse(str,vec,n,i+1,st);

}
int main(){
    // int n;
    // cin>>n;
    string str;
    cin>>str;
    vector<string>vec;
    int n  = str.size();
    Recrse(str,vec,n,0,"");
    cout<< vec.size()<<endl;
    for(auto it:vec)cout<<it<<" ";
    cout<<endl;
    return 0;
}
