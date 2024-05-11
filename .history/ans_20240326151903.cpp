#include<bits/stdc++.h>
using namespace std;
// 
int main(){
    string str;
    cin>>str;
    vector<string>result;

            vector<string>comb(string  digits){
            if(digits.size() == 0) cout<<"";
            vector<string>vec;
            solve(digits,vec,0,"");
            for(int i=0;i<vec.size();i++){
                cout<<vec[i]<<" ";
            }
        }
    result = comb(str);


        string func(char x){
            if(x  == '2') return "abc";
            else if(x == '3') return "def",
            else if(x == '4') return "ghi",
            else if(x == '5') return "jkl",
            else if(x == '6') return "mno",
            else if(x == '7') return "pqrs",
            else if(x == '8') return "tuv",
            else if(x == '9') return "wxyz",
            return "";
        }

        void solve(string digits,vector<string>&ans,int idx,string res){
            if(idx == digits.size()) ans.push_back(res);

            string temp = func(digits[idx]);
            for(int i=0;i<temp.size();i++){
                solve(digits,ans,idx+1,res+temp[i]);
            }
        }

        // vector<string>comb(string  digits){
        //     if(digits.size() == 0) cout<<"";
        //     vector<string>vec;
        //     solve(digits,vec,0,"");
        //     for(int i=0;i<vec.size();i++){
        //         cout<<vec[i]<<" ";
        //     }
        // }
        return 0;
}


