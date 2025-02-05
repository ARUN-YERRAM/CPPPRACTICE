#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>vec;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    
    int n1 = vec.size();
    if(n1 == 1){
        cout<<true<<endl;
        return 0;
    }
  
    sort(vec.begin(),vec.end());
    for(int i=0;i+1<n1;i++){
        if(abs(vec[i] - vec[i+1]) > 1)
        {
            cout<<false<<endl;
            return 0;
        }
    }
    cout<<true<<endl;
    return 0;
}