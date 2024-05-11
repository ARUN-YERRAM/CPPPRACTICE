#include<bits/stdc++.h>
using namespace std;

// ##     
// ##

// ##..
// ##..
// ..##
// ..##

// ##..##
// ##..##
// ..##..
// ..##..
// ##..##
// ##..##

// ##..##..
// ##..##..
// ..##..##
// ..##..##
// ##..##..
// ##..##..
// ..##..##
// ..##..

int main(){
    int n;
    // cin>>n;

    // for(int i=0;i<2*n;i++){
    //     for(int j=0;j<2*n;j++){
    //         if(n%2 == 1){
    //         if(i == j || (i+j) == n-1 || i+j == n){
    //             cout<<"#";
    //             }
    //         }
    //         else{
    //             if(i == j)
    //                 cout<<"#";
    //             else if(i+j == 2*n-1){
    //                 cout<<".";
    //             }
    //         }
    //     }


    //     } cout<<endl;    
        n = 3;
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            // cout<<"#";
            if(n%2 == 1){
            if(i == j || i+j == 2*n -1) cout<<"#";
            // }
            else if((i+j == 2*n/2) || i+j == 2*n/2 - 1){
                cout<<".";
            }
            else if(i>=n && j<n){
                cout<<".";
            } 

            else if(j>=n && i<n) cout<<".";
            else cout<<"#";
            }   
            else{
                if(i == j || i+j == 2*n -1) cout<<"#";
            // }
            else if((i+j == n+1) || i+j == n ){
                cout<<".";
            }
            else if(i>=n && j<n){
                cout<<".";
            } 

            else if(j>=n && i<n) cout<<".";
            else cout<<"#";
            }
        }cout<<endl;
    }
    }
