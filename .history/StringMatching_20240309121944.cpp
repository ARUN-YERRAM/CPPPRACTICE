#include<bits/stdc++.h>
using namespace std;
// class Solution
// {
//     public:
        vector <int> search(string pattern, string text)
        {
            vector<int> ans;
            int n = text.size();
            int m = pattern.size();

            for(int i=0; i<=n-m; i++){
                // bool flag = true;
                int j;
                for(j=0; j<m; j++)
                    if(text[i+j] != pattern[j]){
                        // flag = false;
                        break;
                    }
                // if(flag == true)
                if(j==m)
                    ans.push_back(i+1);
            }
            return ans;
    }

    // TC: O(n*m);
    // In case of Rabin CARP - O(n = m)

int main(){
    string text,pattern;
    text = "asdfgasdf";
    pattern = "asdf";
    vector<int>vec;
    vec = search(pattern,text);
    for (int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}

