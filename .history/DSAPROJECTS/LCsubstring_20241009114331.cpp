#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "abcde";
    string s2 = "abdce";
    int n = s1.size();
    int m = s2.size();
    
    cout<<Recrse(s1,s2,n,m);
}