#include<bits/stdc++.h>
#include <iostream>   
#include <fstream>      
#include <string>      
#include <vector>      
#include <map>          
#include <unordered_map>
#include <algorithm>    
#include <functional>   
#include <memory>       
using namespace std;



ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);



int main(){
    int t;
    cin>>t;

    while(t-->0){
        int n;
        cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        string str;
        cin>>str;
        // vector<string>t1;
        map<int,int>mp;
        // map<string,int>mp;

        vector<int>t1(n,0);
        vector<int>t2(n,0);

        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            t1[i] = k;
        }
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            t2[i] = k;
        }
    }
    return 0;
}


