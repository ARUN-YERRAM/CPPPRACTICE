#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            if(n%2 == 1)
            if(i == j || i+j == n-1){
                cout<<"#";
            }
            else if(i == j){
                cout<<"#";
            }




        }
    }
}