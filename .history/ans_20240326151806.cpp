#include<bits/stdc++.h>
using namespace std;
// 
int main(){
    string str;
    cin>>str;

    conmb(str);

//     map<int,string>maps = {
//         {2,"abc"},
//         {3,"def"},
//         {4,"ghi"},
//         {5,"jkl"},
//         {6,"mno"},
//         {7,"pqrs"},
//         {8,"tuv"},
//         {9,"wxyz"}
//         };

//         int num = stoi(str);
//         int rev = 0;
//         int i = 0;
//         while(num){
//             int last = num%10;
//             rev *= last+ pow(10,i);
//             i++;
//             num /= 10;
//         }
//         while(rev!=0){
//             int last = rev%10;

//             for(int i=0;i<)
//         }



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

        vector<string>comb(string  digits){
            if(digits.size() == 0) cout<<"";
            vector<string>vec;
            solve(digits,vec,0,"");
            for(int i=0;i<vec.size();i++){
                cout<<vec[i]<<" ";
            }
        }
        return 0;
}


