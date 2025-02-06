#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {   
        int b;
        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());

    
    return 0;
}
    