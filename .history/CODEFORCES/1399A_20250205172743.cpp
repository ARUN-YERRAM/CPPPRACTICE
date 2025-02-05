#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t-- > 0){
        int n;
        cin>>n;

        vector<int>vec;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }

        int n1 = vec.size();
        // if(n1 == 1){
        //     cout<<true<<endl;
        //     return 0;
        // }
        bool f = false;
        sort(vec.begin(),vec.end());
        for(int i=0;i+1<n1;i++){
            if(abs(vec[i] - vec[i+1]) > 1)
            {
                // cout<<false<<endl;
                f = true;
                break;
                // return 0;
            }
        }
        if(!f)
            cout<<true<<endl;
        else cout<<false<<endl;
        // return 0;
    }return 0;
}