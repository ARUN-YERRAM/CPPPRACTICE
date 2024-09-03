#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    long long int cnt = 0;
    long long int maxi = 0;

    int i = 0;
    while(i<str.size()){
        char ch = str[i];
        while(i<str.size() && ch == str[i]){
            cnt++;
        }maxi = max(amxi,cnt);
    }
}