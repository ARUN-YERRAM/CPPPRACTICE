#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    int tot = 0;
    for(int i=0;i<n;i++)
    {   
        int b;
        cin>>b;
        tot += b;
        a.push_back(b);
    }
    sort(a.begin(),a.end(),greater<int>());

    int cnt = 0;
    int t = 0;
    for(auto it:a){
        cnt += it;
        t++;
        if(cnt > (tot-cnt)){
            break;
        }
    }


    return 0;
}
    