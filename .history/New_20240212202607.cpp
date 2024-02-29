#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<string.h>
#include<algorithm>
#include<unordered_map>
using namespace std;


// int main(){
//     int n;
//     cout<<"Enter the Number:";
//     cin>>n;
    
//     for (int i=2;i<n;i++){
//         if(n%i==0) {
//             cout<< n<< "is Not Prime Numbers";
//             break;
//         }
//     } 
//     cout<<n<< " is Prime Number";
// }

//  ..............DYNAMIC PROGRAMMING......................
//  HAIF of CP is DP And Remaining Half is Nothing With DP.........


// int fib(int n){
//     vector<int > m(n,0);

//     if(n==0 or n==1) return n;
//     else {
//     int result =  (fib(n-1) + fib(n-2));
//     m[n] = result;
//     }
//     return m[n];
// }

// int fib(int n){
//     //  BOTTOM-UP APPROACH..... Extra space.... ITERATIVE....TABULATION.....
//     //  TOP-DOWN APPROACH....  CALL STACKSPACE.......RECURSIVE....MEMOIZATION....

//     int M[n];
//     M[0] = 0, M[1] = 1;

//     for (int i = 2; i <= n; i++) {
//         M[i] = M[i-1] + M[i-2];
//     }
//     return (M[n]);
// }

// int main() {
//     int n;
//     cin>>n;

//     cout << fib(n);
// }

// A
// F B
// J G C
// M K H D
// O N L I E



// 65
// 70 66
// 74 71 67
// 77 75 72 68
// 79 78 76 73 69



// void fun(int n){
//     if(n==21) return;
//     cout<<n<<endl;
//     fun(n+1);
//     cout<<n<<endl;

// }

// int main(){
//     int n;
//     cin>>n;
//     fun(n);
// }

// void printSubsequences(string& str, int index, string current) {
    // if (index == str.length()) {
        // Base case: reached the end of the string
        // cout << current << endl;
        // return;
    // }

    // Include the current character and recurse
    // printSubsequences(str, index + 1, current + str[index]);

    // Exclude the current character and recurse
    // printSubsequences(str, index + 1, current);
// }

// int main() {
    // string input;

    // cout << "Enter a string: ";
    // cin >> input;

    // printSubsequences(input, 0, "");

    // return 0;
// }







// int sum(int n){
    
//     // if(n==0) return 0;

//     // return n+sum(n-1);

//     if(n==1) return 1;

//     cout<<n<<endl;
//     int k = sum(n-1);
//     cout<<k<<endl;
//     return n+k;
// }

// int main() {
//     int n;
//     cin>>n;

//     cout<<sum(n);
// }


// int main() {
    // int n = 5;
    // int arr[] = {6,8,10,15,16};

    // int max_len = INT_MIN;
    // int curr_len = 1;
    // int pst_diff = arr[1]-arr[0];
    // int curr_diff = arr[1] - arr[0];
    // for (int i=2;i<n;i++){
        // curr_diff = arr[i] - arr[i-1];
        // if(curr_diff == pst_diff){
            // curr_len++;
        // }
        // else{
            // curr_len = 1;
        // }
        // max_len = max(curr_len,max_len);
        // pst_diff = curr_diff;
    // }
    // cout<<max_len<<" ";

// }


    // int arr[] = {1,2,3,4,5};
    // int maxi = INT_MIN;
    // int num = 9;
    // vector<vector<int>>res(n,vector<int>(n));
    // for (int i=0;i<5;i++){
        // for (int j=i;j<5;j++){
            // int sum = 0;
            // for (int k=i;k<=j;k++){
                // cout<<arr[k]<<"";
                // sum += arr[k];
            // } 
            // if (sum==num){
                // cout<<"true";
                // break;
                // }
            // cout<<endl;
            // }
            // maxi = max(maxi,sum);
        // }
        // cout<<endl;
    // cout<<"False";
// }
    // if (sum==num){
        // cout<<true; }
    // cout<<maxi;

    // for (int i=0;i<)
    // int arr[n];
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    // int maxi = INT_MIN;
    // for (int i = 0;i<n;i++){
    //     if(arr[i]>maxi){
    //         maxi = max(maxi,arr[i]);
    //     }
    // }
    // cout<<"maxi:"<<maxi;






// bool isPowerOfFour(int n) {
        // if (n<1) return 0;

        // while(n!=1) {
            // if(n%4!=0){
                // return 0;
            // }

            // n = n/4;
            // if (n&n-1 == 0) {
                // return 1;
                // }
            // else  return 0;
        // }
// }
// int main() {
    // int n;
    // cin>>n;
    // cout<<isPowerOfFour(n);
// }

//  STRINGS..............



// int longestOnes(string str, int k) {

//     int start = 0;
//     int end = 0;
//     int zero_count = 0;
//     int max_length = 0;

//     for(;end<str.length();end++){
//         if(str[end]=='0'){
//             zero_count++;
//         }

//         while(zero_count>k){
//             if(str[start]=='0'){
//                 zero_count--;
//             }
//             start++;  // contracting the window......
//         }

//         // zero count <= k.......
//         max_length = max(max_length,end-start+1);
//     }
//     return max_length;

// }
// int main() {

//     string str;
//     cout<<"Enter binary string: ";
//     cin>>str;

//     int k;
//     cout<<"Enter max flips: ";
//     cin>>k;

//     cout<<longestOnes(str,k);

//     return 0;

// }





// template< Template T>
// void swapValues(T &a, T &b){
//     T temp = a;
//     a = b;
//     b = temp;
// }

// template < temp T>
// class stack {
//     private:
//     T elements[100];
//     int top;

//     public:
//     stack() : top(-1) {}

//     void push(const T &value){
//         elements[++top] = value;
//     }

//     T pop(){
//         return elements[top--];
//     }
// };

// TIME COMPLEXITY : O(n) n is length of decoded string
//  SPACE COMPLEXITY : O(n) n is length of decoded string

// string decodeString(string s) {
//     string result = "";

//     //  traversing the encoded string..
//     for (int i=0;i<s.length();i++){
//         if(s[i]!=']'){
//             result.push_back(s[i]);
//         }
//         else{
//             // extract string from result....
//             string str = "";
//             while(!result.empty() && result.back()!='['){
//                 str.push_back(result.back());
//                 result.pop_back();
//             }
//             //  reversing the str
//             reverse(str.begin(),str.end());

//             //  remove the last char from result which is [.....
//             result.pop_back();

//             //  extracting the number from result....
//             string num = "";
//             while(!result.empty() && (result.back()>='0' && result.back()<='9')){
//                 num.push_back(result.back());
//                 result.pop_back();
//             }
//             reverse(num.begin(),num.end());

//             int int_num = stoi(num);

//             //  inserting string in result int_num times.......

//             while(int_num){
//                 result += str;
//                 int_num--;
//             }
//             }
//         }
//         return result;
//     }

// int main() {

//     string str;
//     cin>>str;

//     cout<<decodeString(str)<<endl;

//     return 0;
// }







//  APPROACH : 2.......

// string LongestCommonPrefix(vector<string>&str){
    
//     //  keeping first string const and comparing it with all others.........
//     string s1 = str[0];
//     int ans_length = s1.size();

//     for (int i=0;i<str.size();i++){

//         int j=0;
//         while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]){
//             j++;
//         }
//         ans_length = min(ans_length,j);  // updating length of answer string...
//     }

//     string ans = s1.substr(0,ans_length); 
//     return ans;
// }

// int main() {
//     int n;
//     cout<< "ENter no of strings: ";
//     cin>>n;

//     cout<<"Enter strings:";
//     vector<string> str(n);
//     for (int i=0;i<n;i++){
//         cin>>str[i];
//     }

//     cout<<"Longest common prefix :"<<LongestCommonPrefix(str)<<endl;
// }



//  APPROACH : 1......

// string LongestCommonPrefix(vector<string>&str){

    //  sorting array of strings.......
    // sort(str.begin(),str.end());

    // string s1 = str[0];  // first string
    // int i=0;
    // string s2 =str[str.size()-1];  // last string
    // int j=0;

    // string ans = "";
    // while(i<s1.size() && j<s2.size()){
        // if(s1[i]==s2[j]){
            // ans+= s1[i];
            // i++,j++;
        // }
        // else{
            // break;
        // }
    // }
    // return ans;

// }
// int main() {
    // int n;
    // cout<< "ENter no of strings: ";
    // cin>>n;

    // cout<<"Enter strings:";
    // vector<string> str(n);
    // for (int i=0;i<n;i++){
        // cin>>str[i];
    // }

    // cout<<"Longest common prefix :"<<LongestCommonPrefix(str)<<endl;
// }






// 
// bool isIsomorphic(string s1,string s2){
//     // 
//     vector<int> v1(128,-1);
//     vector<int> v2(128,-1);
// // 
//     if(s1.size()!=s2.size())
//         return false;
    
// // 
//     for (int i=0;i<s1.size();i++){
//         if(v1[s1[i]] != v2[s2[i]])
//             return false;
        
//         v1[s1[i]] = v2[s2[i]] = i;
//     }
//     return true;
// }
// int main() {
//     string s1,s2;
//     cin>>s1>>s2;
// // 
//     if(isIsomorphic(s1,s2))
//         cout<<"Isomorphic";
    
//     else
//         cout<<"Not Isomorphic";
    
// }









//  ANAGRAM OR NOT......

// APPROACH 2....

// bool IsAnagram(string s1,string s2) {

    // vector<int>freq(26,0);
    // 
    //  If lenghts are diff return false.....

    // if(s1.length()!=s2.length()){
        // return false;
    // }

    //  Storing frequency of char in s1 and s2.....
    // 
    // for (int i=0;i<s1.length();i++){
        // freq[s1[i]-'a']++;   // for s1 char freq increment.....
        // freq[s2[i]-'a']--;   // for s2 char freq decrement....
    // }

    //  Checking frequency of every character is 0....
    // for (int i=0;i<26;i++){
        // if(freq[i]!=0) {  // Not anagram.....
            // return false;
        // }
    // }
    // return true;
// }
// int main() {
    // string s1,s2;
    // cin >> s1>>s2;

    // cout<<IsAnagram(s1,s2);
// }




// APPROACH : 1....


// string sortStringLexi(string str){
    // vector<int> freq(26,0);

    //  storing frequency of every character.........
    // for (int i=0;i<str.length();i++){
        // int index = str[i] - 'a';
        // freq[index]++;
    // }

    //  create sorted string.......
    // int j=0;
    // for (int i=0;i<26;i++){
        // while(freq[i]--){
            // str[j++] = i + 'a';
        // }
    // } 
    // return str;
// }
// int main() {
    // string name1,name2;
    // cin>>name1>>name2;

    // string res = sortStringLexi(name1);
    // string res1 = sortStringLexi(name2);

    // if (res==res1){
        // cout<<"true";
    // }
    // else{
        // cout<<"false";
    // }
// }





// string sortStringLexi(string str){
//     vector<int> freq(26,0);

//     //  storing frequency of every character.........
//     for (int i=0;i<str.length();i++){
//         int index = str[i] - 'a';
//         freq[index]++;
//     }

//     //  create sorted string.......
//     int j=0;
//     for (int i=0;i<26;i++){
//         while(freq[i]--){
//             str[j++] = i + 'a';
//         }
//     } 
//     return str;
// }
// int main() {
//     string name;
//     cin>>name;

//     cout<<sortStringLexi(name);
// }







// int main(){
    // string name("ARUN YERRAM");
    // cout<<name;

    // getline(cin,name);
    // cout<<name;

    // char chr = 'a';
    // cout<<int(chr);

    // char array[50];
    // cin.getline(array,50);
    // cout<<array;

    // string name="ARUN YERRAM";
    // // reverse(name.begin(),name.end());
    // cout<<name<<endl;

    // cout<<name.substr(0,5);
    // string names = "college";
    // string name1 = "wallah";
    // cout<<names+name1;      // for strings + operator.......

    // char name[20] = "Software";    // for character arrays strcat() function........
    // char name1[20] = "Engineer";
    // cout<<strcat(name,name1);

    // string s = "abcd";
    // char n = 'e';
    // s.push_back(n);
    // cout<<s;
// }








/**
 * The above code is a C++ program that calculates the maximum distance between students that can be
 * achieved given a set of positions and the number of students.
 * 
 * @param pos A vector of integers representing the positions of the students on a race track. The
 * positions are sorted in ascending order.
 * @param mid The variable "mid" represents the maximum distance between two students that can be
 * placed in a row.
 * @param s The parameter `s` represents the number of students that need to be placed in the race.
 * 
 * @return The function `race` returns an integer value, which represents the maximum possible distance
 * between two students that can be achieved by placing `s` students in the given positions `pos`.
 */

// bool canPlaceStudents(vector<int> &pos, int mid, int s){
    // int studentsReqd = 1;
    // int lastPlaced = pos[0];
    // for (int i=1;i<pos.size();i++){
        // if(pos[i] - lastPlaced >= mid) {
            // studentsReqd++;
            // lastPlaced = pos[i];
            // if ( studentsReqd == s) {
                // return true;
            // }
        // }
    // } return false;
// }
// int race (vector<int> &pos, int s) {
    // int n = pos.size();
    // int lo = 1;
    // int hi = pos[n-1] - pos[0];
    // int ans = -1;
    // while(lo<=hi) {
        // int mid = lo + (hi-lo)/2;
        // if(canPlaceStudents(pos,mid,s)) {
            // ans = mid;
            // lo = mid + 1;
        // } else {
            // hi = mid - 1;
        // }
    // } return ans;

// }
// int main() {
    // int n;
    // cin >> n;
    // vector<int> arr;
    // for (int i = 0; i < n; i++) {
        // int x;
        // cin >> x;
        // arr.push_back(x);
    // }
    // int s;
    // cin >> s;
    // cout << race(arr, s);
    // return 0;
// }










/**
 * The above code is a C++ program that calculates the minimum number of chocolates that can be
 * distributed to a given number of students, given the number of chocolates in each packet.
 * 
 * @param arr A vector of integers representing the number of chocolates in each packet.
 * @param mid The "mid" parameter represents the maximum number of chocolates that can be distributed
 * to each student.
 * @param s The parameter `s` represents the number of students.
 * 
 * @return The function `distChoco` returns an integer, which represents the maximum possible value of
 * the minimum number of chocolates that can be distributed to `s` students.
 */

// bool canDistChoco(vector<int> &arr, int mid, int s) {
    // int n = arr.size();
    // int studentsReqd = 1;
    // int currSum = 0;
    // for (int i=0;i<n;i++){
        // if(arr[i] > mid) {
            // return false;
        // }
        // if(currSum + arr[i] > mid) {
            // studentsReqd++;
            // currSum = arr[i];
            // if(studentsReqd > s) return false;
        // } else {
            // currSum += arr[i]; 
        // }
    // } return true;
// }

// int distChoco(vector<int> &arr, int s) {
    // int n = arr.size();
    // int lo = arr[0];
    // int hi = 0;
    // for (int i=0;i<arr.size();i++){
        // hi += arr[i];
    // }
    // int ans = -1;
    // while(lo<=hi) {
        // int mid = lo + (hi-lo)/2;
        // if(canDistChoco(arr,mid,s)) {
            // ans = mid;
            // hi = mid -1;
        // } else{
            // lo = mid + 1;
        // }
    // } return ans;
// }
// int main(){
    // int n;
    // cin>>n;
    // vector<int>v;
    // for(int i=0;i<n;i++){
        // int x;
        // cin>>x;
        // v.push_back(x);
    // }
    // int s;
    // cin>>s;
    // cout<<distChoco(v, s);
    // return 0;
// }







//  SEARCH IN 2-D ARRAY.........

//  TIME : O(lognm)...
//  SPACE : O(1)........
// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int n = matrix.size(); // no of rows
//     int m = matrix[0].size(); // no of columns

//     int lo = 0;
//     int hi = n*m - 1;
//     while(lo<=hi) {
//         int mid = lo + (hi-lo)/2;
//         int x = mid/m;
//         int y = mid%m;
//         if(matrix[x][y] == target) {
//             return true;
//         } else if(matrix[x][y] < target) {
//             lo = mid + 1;
//         } else {
//             hi = mid - 1;
//         }
//     } return false;
// }
// int main() {
//     vector<vector<int>> a ={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//     int target = 34;
//     cout << searchMatrix(a,target);
//     return 0;
// }







// /**
//  * The function `findPeakElement` takes in a vector of integers and returns the index of a peak element
//  * in the vector.
//  * 
//  * @param input The input parameter is a vector of integers, representing an array of numbers.
//  * 
//  * @return The function findPeakElement returns the index of a peak element in the input vector.
//  */


// int findPeakElement(vector<int>&input){
//     int n = input.size() ;
//     int lo = 0;
//     int hi = n - 1;
//     while(lo<=hi) {
//         int mid = lo +  (hi-lo)/2;
//         if(mid==0){
//             if(input[mid]>input[mid+1]){
//                 return 0;
//             } else{
//                 return 1;
//             }
//         } 
//         else if (mid == n - 1){
//             if(input[mid] > input[mid-1]){
//                 return n - 1;
//             } else {
//                 return n - 2;
//             }
//         }
//         else {
//             if(input[mid] > input[mid-1] and input[mid] > input[mid+1]){
//                 return mid;
//             }
//             else if(input[mid] > input[mid-1]){
//                 lo = mid + 1;
//             } else {
//                 hi = mid - 1;
//             }
//         }
//     } return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     while (n--){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     int ans = findPeakElement(arr);
//     cout<<ans;
//     return 0;
// }











//  PEAK ELEMENT...........

// /**
//  * The function `peakElement` finds and returns the peak element in a given vector of integers.
//  * 
//  * @param input The input parameter is a vector of integers, which represents an array of numbers.
//  * 
//  * @return The function `peakElement` returns the element at the peak of the input vector.
//  */

// int peak_Element(vector<int>&vec) {
//     int lo = 0;
//     int hi = vec.size() - 1;

//     int ans = -1;
//     while(lo<=hi) {
//         int mid = lo + (hi-lo)/2;
//         if(vec[mid]>vec[mid-1]){
//             ans = max(ans,mid);
//             lo = mid + 1;
//         }
//         else{
//             hi = mid - 1;
//         }
//     } return vec[ans];
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     int ans = peak_Element(arr);
//     cout<<ans;
// }








/**
 * The above C++ code checks if the concatenation of the elements in the array is divisible by 3 and
 * prints 1 if true, and 0 if false.
 */
// int main(){
//     int arr[] = {40,50,90};
//     int n = 3;
//     string strt = "";
//     for (int i = 0;i<n;i++){
//         strt += to_string(arr[i]);
//     }
//     int res = stoi(strt);
//     if(res%3==0) cout<<1;
//     else cout<<0;
// }



/**
 * The function performs a binary search on a sorted and rotated vector to find a target element.
 * 
 * @param input A sorted and rotated vector of integers.
 * @param target The target is the value that we are searching for in the sorted and rotated vector.
 */

// int binarySearchSortedRotated(vector<int> &input, int target) {
    // int lo = 0, hi = input.size() - 1;
    // while(lo<=hi) {

        // int mid = lo + (hi-lo)/2;
        // if(input[mid] == target) return mid;
        // if(input[mid] >= input[lo]) {
            // if(target >= input[lo] and target <= input[mid]) {
                // hi = mid - 1;
            // } else {
                // lo = mid + 1; 
            // }
        // } else {
            // if(target >= input[mid] and target <= input[hi]) {
                // lo = mid + 1;
            // } else {
                // hi = mid - 1;
            // }
        // }
    // } return -1;
// }
// int main(){ 
    // int n;
    // cout<<"Enter size:";
    // cin>>n;

    // vector<int> input;
    // for (int i=0;i<n;i++){
        // int x;
        // cin>>x;
        // input.push_back(x);
    // }
    // int target;
    // cin>>target;

    // cout << binarySearchSortedRotated(input,target);
    // return 0;
// }





// int binarySearchSortedRotated(vector<int> &input, int target) {
//     int lo = 0, hi = input.size() - 1;
//     while(lo<=hi) {
//         int mid = lo + (hi-lo)/2;
//         if(input[mid] == target) return mid;
//         if(input[mid] >= input[lo]) {
//             if(target >= input[lo] and target <= input[mid]) {
//                 hi = mid - 1;
//             } else {
//                 lo = mid + 1; 
//             }
//         } else {
//             if(target >= input[mid] and target <= input[hi]) {
//                 lo = mid + 1;
//             } else {
//                 hi = mid - 1;
//             }
//         }
//     } return -1;
// }

// int main(){ 
    
//     int n;
//     cin>>n;

//     vector<int> input;
//     for (int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }
//     int target;
//     cin>>target;

//     cout << binarySearchSortedRotated(input,target);
//     return 0;
// }









// int findMinimumInSortedArray(vector<int>&input) {
    // TIME:O(logn)....
    // SPACE: O(1)...
    // if(input.size()== 1) return input[0];
    // int lo = 0, hi = input.size() - 1;
    // if(input[lo] < input[hi]){
        // return lo;
    // }
    // while(lo <= hi){
        // int mid = lo + (hi-lo)/2;
        // if(input[mid] > input[mid+1]) return mid + 1;
        // if(input[mid] < input[mid -1]) return mid - 1;
        // if(input[mid] > input[lo]){
            // lo = mid + 1;
        // } else {
            // hi = mid - 1;
        // }
        
    // } return -1;
// }
// int main(){
    // int n;
    // cin>>n;

    // vector<int> input;
    // for (int i=0;i<n;i++){
        // int x;
        // cin>> x;
        // input.push_back(x);
    // }
    // cout << findMinimumInSortedArray(input)<<"\n";
    // return 0;
// }





//  USING RECURSION...........

// int FirstOccurence(int a[],int n,int key,int i){
    // if(i==0) return -1;
    // if(key == a[i]) return i;
    // FirstOccurence(a,n,key,i-1);
// }

// int FirstOccurence(int a[],int n,int key,int i){
    // if(i==n) return -1;
    // if(key==a[i]) return i;
    // FirstOccurence(a,n,key,i+1);
    // cout<<a[i]<<" ";
// }
// int main() {
    // int a[] = {1,4,6,8};
    // cout<<FirstOccurence(a,5,6,0)<<" ";
    // return 0;
// }




//  FIRST AND LAST OCCURENCE OF THE ELEMENT..........


// int lowerbound(vector<int> &input, int target) {
//     // Time : O(logn)..
//     //  SPACE : O(1)..
// // 
//     int lo = 0, hi = input.size()-1;
//     int ans = -1;
//     while(lo<=hi) {
//         int mid = lo + (hi-lo)/2;
//         if(input[mid]>=target){
//             ans = mid;
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     } return ans;
// }
// 

// int upperbound(vector<int> &input, int target) {
//     // Time : O(logn)..
//     //  SPACE : O(1)..
// // 
//     int lo = 0, hi = input.size()-1;
//     int ans = -1;
//     while(lo<=hi) {
//         int mid = lo + (hi-lo)/2;
//         if(input[mid]>target){
//             ans = mid;
//             hi = mid - 1;  // discard right.
//         } else {
//             lo = mid + 1;
//         }
//     } return ans;
// }
// // 
// // 
// 

// int main() {
//     int n;
//     cin>>n;
//     vector<int> res;
// // 
//     // vector<int> vec(n);
//     // for (int i=0;i<n;i++){
//     //     cin>>vec[i];
//     // }
// // 
//     vector<int> input;
//     for (int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }
//     int target;
//     cin>>target;
// // 
//     int lb = lowerbound(input,target);
//     if(input[lb] != target){
//         res.push_back(-1);
//         res.push_back(-1);
//     }
//     else{
//         int ub = upperbound(input,target);
//         res.push_back(lb);
//         res.push_back(ub-1);
//     }
//     cout<<res[0]<<" "<<res[1]<<"\n";
//     return 0;
// }
// 




// SQUARE ROOT OF A NUMBER..........  

// int sqrt(int n) {
    // int lo = 1;
    // int hi = n;
    // int ans = -1;

    // while(lo<=hi) {
        // int mid = lo + (hi-lo)/2;
        // if(mid*mid>n){
            // hi = mid - 1;
            // ans = mid - 1;
        // }
        // else{
            // lo = mid + 1;
        // }
    // } return ans;
// }

// int main() {
    // int n;
    // cin>>n;

    // cout << sqrt(n);
    // return 0;
// }






// int FirstOccurence(vector<int>&arr, int target){
    // int low = 0;
    // int high = arr.size() - 1;

    // int ans = -1;

    // while(low<=high){
        // int mid = low + (high-low)/2;
        // if(arr[mid]==target){
            // ans = mid;
            // high = mid - 1;
        // }
        // else if (arr[mid]< target){
            // low = mid + 1;
        // }
        // else {
            // high = mid - 1;
        // }
    // }
    // return ans;
// }
// int main(){
    // int n;
    // cin>>n;

    // vector<int> vec(n);

    // for (int i=0;i<n;i++){
        // cin>>vec[i];
    // }

    // int target;
    // cout<<"Target element:";
    // cin>>target;

    // cout << FirstOccurence(vec,target);

    // return 0;
// }






//  BINARY SEARCH........
// TIME COMPLEXITY: O(log(n)).....
//  SPACE COMPLEXITY:O(1).....

// USING RECURSION..........
// TIME COMPLEXITY:O(logn).....
//  SPACE COMPLEXITY:O(logn)..... CALL STACK.......

// int BinarySearchRecursive(vector<int> &vec, int target,int low,int high){
//     int mid = low + (high-low)/2;
//     if(low>high){
//         return -1;
//     }
//     if(vec[mid]==target){
//         return mid;
//     }

//     else if(vec[mid]>target){
//         BinarySearchRecursive(vec,target,low,mid-1);
//     }

//     else{
//         BinarySearchRecursive(vec,target,mid+1,high);
//     }
// }
// int main(){
//     vector<int> vec{1,23,45,56,67,74,83,92,100};
//     int target;
//     cin>>target;
//     int low=0;
//     int high = vec.size() - 1;

//     cout<<BinarySearchRecursive(vec,target,low,high);
//     return 0;





// int binarySearch(vector<int>&vec, int target) {
    // int lo = 0;
    // int hi = vec.size()-1;

    // while(lo<=hi) {
        // int mid = lo + (hi-lo)/2;

        // if(vec[mid]==target) {
            // return mid;
        // }

        // else if(vec[mid]> target)  {
            // hi = mid - 1;
        // }

        // else{
            // lo = mid + 1;
        // }
    // }
    // return -1;
// }

// int main() {
    // int n;
    // cin>>n;
    // vector<int> vec(n);

    // for (int i=0;i<n;i++){
        // int x;
        // cin>>x;
        // vec[i] = x;
    // }

    // int target;
    // cout<<"Enter target:";
    // cin>>target;

    // cout<<binarySearch(vec,target);
    // return 0;
// }






//  practice....   KTH SMALLEST ELEMENT using QUICK SORT.........
//  Merge two sorted arrays.......



// void merge(int arr1[],int arr2[],int n1,int n2,int arr3[]){
//     int i=0,j=0,k=0;

//     while(i<n1 && j<n2){
//         if (arr1[i]<arr2[j]){
//             arr3[k++] = arr1[i++];
//         }
//         else{
//             arr3[k++] = arr2[j++];
//         }
//     }

//     while(i<n1){
//         arr3[k++] = arr1[i++];
//     }

//     while(j<n2){
//         arr3[k++] = arr2[j++];
//     }
// }
// int main(){
//     int arr1[] = {1,3,5,7,9};
//     int arr2[] = {2,2,3,5,5,6,6,8,10};

//     int n1 = sizeof(arr1)/sizeof(arr1[0]);
//     int n2 = sizeof(arr2)/sizeof(arr2[0]);

//     int n3 = n1+n2;
//     int arr3[n3];

//     merge(arr1,arr2,n1,n2,arr3);

//     for (int i=0;i<n3;i++){
//         cout<<arr3[i]<<" ";
//     }cout<<endl;

//     return 0;
// }





// int partition(int arr[], int l,int r){

//     int pivot = arr[r];

//     int i=l;
//     for (int j=l;j<r;j++){
//         if(arr[j]<pivot){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//     }
//     swap(arr[i],arr[r]);
//     return i;
// }

// int kthSmallest(int arr[],int l,int r,int k){
//     if(k>0 && k<=r-l+1){

//         int pos = partition(arr,l,r); //  position of pivot element.

//         if(pos-l==k-1){
//             return arr[pos];
//         }
//         else if(pos-l>k-1){
//             return kthSmallest(arr,l,pos-1,k);
//         }
//         else{
//             return kthSmallest(arr,pos+1,r,k-pos+l-1);
//         }
//     }
//     return INT_MAX;
// }
// int main(){
//     int arr[] = {3,5,2,1,4,7,8,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 2;

//     cout << kthSmallest(arr , 0 ,n-1 ,k)<<endl;
// }






//  BUCKET SORT...............


//  TIME COMPLEXITY: 
//  for avg case: O(n+k)....
//  for worst case: O(n**2)...

//  SPACE COMPLEXITY: O(n+k).......


// void bucketSort(float arr[], int size) {
//     vector<vector<float>> bucket(size,vector<float>());
//     //  step1

//     // finding range.........
//     float max_ele = arr[0];
//     float min_ele = arr[0];
//     for (int i=0;i<size;i++){
//         max_ele=max(max_ele,arr[i]);
//         min_ele=min(min_ele,arr[i]);
//     }
//     float range = (max_ele-min_ele)/size;


//     //  step2 inserting elements into bucket
//     for (int i=0;i<size;i++){
//         // int index = arr[i]*size;
//         int index = (arr[i]-min_ele)/range;
//         //  boundary elements......
//         float diff = (arr[i] - min_ele)/range - index;
//         if (diff = 0 && arr[i]!= min_ele){
//             bucket[index-1].push_back(arr[i]);

//         }
//         else{
//             bucket[index].push_back(arr[i]);
//     }
//     }

//     //  step3: sorting individual buckets.....
//     for (int i=0;i<size;i++){
//         if(!bucket[i].empty()){
//             sort(bucket[i].begin(),bucket[i].end());
//         }
//     }

//     //  step4 : combining elements from buckets....
//     int k=0;
//     for (int i=0;i<size;i++){
//         for (int j=0;j<bucket[i].size();j++){
//             arr[k++]=bucket[i][j];
//         }
//     }


// }
// int main() {
//     float arr[] = {0.12,0.45,1.23,0.35,0.45,0.54,2.45,0.65,0.53};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     bucketSort(arr,size);

//     for (int i=0;i<size;i++){
//         cout << arr[i]<<" ";
//     }
//     return 0;
// }















// 
//  RADIX SORT.....  on digits ....
// 
//  TIME COMPLEXITY : O(d*(n )).....
//  SPACE COMPLEXITY : O(n)....
// 
//  if disparity b/w numbers is large then we can use this sort instead of Count sort...
// 
void countSort(vector<int> &v, int pos){
// 
    int n = v.size();
    // create  freq array
    vector<int> freq(10,0);
    for (int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
// 
    //  cumulative freq
    for (int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }
// 
    //  ans array
    vector<int> ans(n);
    for (int i=n-1;i>=0;i--){
        ans[--freq[(v[i]/pos)%10]]=v[i];
    }
// 
    // copy it to original array..
    for (int i=0;i<n;i++){
        v[i]=ans[i];
    }
}
// 
// 
void radixSort(vector<int> &v){
// 
    int max_ele = INT_MIN;
    for (auto x:v){
        max_ele = max(x,max_ele);
    }
// 
    for (int pos = 1;max_ele/pos > 0;pos*=10){
        countSort(v,pos);
    }
}
// 
int main() {
    int n;
    cin>>n;
// 
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
// 
    radixSort(v);
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
// 





// COUNT SORT..........


// if -ve numbers then subtract least -ve from it at start and then add to the ans array at last... to get final answer.
//  if disparity b/w numbers is less use this sort ........

//  TIME COMPLEXITY: O(3*n + max_ele).....  so   max_ele , should be order of n(size)... so use this sort..
//  SPACE COPLEXITY: O(n+k(max_ele)).......  stable algorithm......... 



void countSort(vector<int>&a){
    int maxi = INT_MIN;
    for(auto it:a){
        maxi = max(maxi,it);
    }

    vector<int>freq(maxi+1,0);

    for(int i=1;i<maxi;i++){
        freq[i] = freq[i-1];
    }
}


















.








// 
int main(){ 
    int n;
    cin>>n;
    vector<int>a(n);
 
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    countSort(a);

    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}














// QUICK SORT...................


int partition (int arr[], int l, int r) {

    int pivot = arr[r];
    int i = l - 1;
    int j = l;

    for (;j<r;j++) {
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[r]);
    return i+1;
}

void Quick_Sort(int arr[] , int l , int r){
    if (l>=r)  return ;

    int pivot = partition(arr,l,r);
    Quick_Sort(arr,l,pivot-1);
    Quick_Sort(arr,pivot+1,r);
}

int main() {

    int arr[] = {20, 12, 35, 16, 18, 30};
    int n = sizeof(arr)/ sizeof(arr[0]);

    Quick_Sort(arr,0,n-1);
    for (int i=0;i<n;i++) {
        cout<<arr[i] <<" ";
    }cout<<endl;
}






// 
//  MERGESORT............
// 
// void merge(int arr[],int lo,int mid,int hi){
    // int an = mid - lo + 1;
    // int bn = hi - mid;
// 
    // int a[an], b[bn];
// 
    // for(int i=0;i<an;i++){
        // a[i] = arr[lo+i];
    // }
    // for(int j=0;j<bn;j++){
        // b[j] = arr[mid+1+j];
    // }
// 
    // int i = 0;
    // int j = 0;
    // int k = lo;
// 
    // while(i<an && j<bn){
        // if(a[i] < b[j]){
            // arr[k++] = a[i++];
        // } else{
            // arr[k++] = b[j++];
        // }
    // }
// 
    // while(i<an){
        // arr[k++] = a[i++];
    // } 
// 
    // while(j<bn){
        // arr[k++] = b[j++];
    // }
// }
// void mergesort(int arr[],int lo,int hi){
    // if(lo>=hi) return;
// 
    // int mid = (lo+hi)/2;
// 
    // mergesort(arr,lo,mid);
    // mergesort(arr,mid+1,hi);
// 
    // merge(arr,lo,mid,hi);
// }



// int main(){

//     int arr[] = {1,3,5,8,7,6,2};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     mergesort(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } 
// }





//  Practice swapzerostolast  and lexographical qsn......



// void selectionSort(char fruit[][60], int n) {

//         for (int i = 0;i<n-1;i++) {

//             int min_idx = i;
//             for (int j = i+1;j<n;j++) {
//                 if(strcmp(fruit[min_idx],fruit[j]) >0) {
//                     min_idx = j;
//                 }
//             }

//             if (i!=min_idx) {
//                 swap(fruit[i],fruit[min_idx]);
//             }
//         }
//         return;
// }
// int main() {
//     char arr[][60] = {"papaya","lime","watermelon","apple","banana","mango","kiwi"};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     selectionSort(arr,n);

//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// void SwapZerosToLast(vector<int>&vec) {
//     int n = vec.size();

//     for (int i = n-1;i>=0;i--){
//         int j = 0;
//         bool flag = false;
//         while (j!=i) {
//             if(vec[j]==0 && vec[j+1]!=0){
//                 swap(vec[j],vec[j+1]);
//                 flag = true;
//             }
//             j++;
//         }
//         if(!flag) break;
//     }
//     return;
// }
// int main() {
//     int n;
//     cin>>n;

//     vector<int>vec(n);

//     for (int i=0;i<n;i++){
//         cin>>vec[i];
//     }

//     SwapZerosToLast(vec);

//     for (int i=0;i<n;i++) {
//         cout<<vec[i]<<" ";
//     }
// }







//  PRACTICE...........


// void Bubble_Sort(vector<int>&vec){
//     int n = vec.size();

//     for (int i=0;i<n-1;i++){
//         for (int j=0;j<n-i-1;j++){
//             if (vec[j] < vec[j+1]){
//                 swap(vec[j],vec[j+1]);
//             }
//         }
//     }
// }

// void Selection_Sort(vector<int>&vec){
//     int n = vec.size();

//     for (int i = 0;i<n;i++){
//         int min_idx = i;

//         for(int j = i+1;j<n;j++){
//             if (vec[j] < vec[min_idx]){
//                     min_idx = j;
//             }
//             if (min_idx != i) {
//                 swap(vec[i],vec[min_idx]);
//             }
//         }
//     }
// }
// void Insertion_Sort(vector<int> &vec){
    // int n = vec.size();
// 
    // for (int i=1;i<n;i++){
        // int curr_ele = vec[i];
// 
        // int j = i - 1;
// 
        // while (j>=0 && vec[j] > curr_ele){
            // vec[j+1] = vec[j];
            // j--;
        // }
        // vec[j+1] = curr_ele;
    // }
// }

// int main(){
    // int n;
    // cin>>n;

    // vector<int>arr(n);
// 
    // for (int i=0;i<arr.size();i++){
        // cin>>arr[i];
    // }
// 
    // Bubble_Sort(arr);
    // Selection_Sort(arr);
    // Insertion_Sort(arr);
// 
    // for (int i=0;i<arr.size();i++){
        // cout<<arr[i]<<" ";
    // }
// }












//  INSERTION SORT..... 

// void Insertion_Sort(vector<int>&vec){
//     int n = vec.size();

//     for (int i=1;i<n;i++){
//         int curr_ele = vec[i];

//         int j = i - 1;
//         while(j>=0 && vec[j] > curr_ele){
//             vec[j+1] = vec[j];
//             j--;
//         }
//         vec[j+1] = curr_ele;
//     }
//     return;
// }

//  TIME COMPLEXITY : O(n^2).
// SPACE COMPLEXITY : O(1).

// int main() {
//     int n;
//     cin>>n;

//     vector<int>arr;

//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     Insertion_Sort(arr);

//     for (int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }










// SELECTION SORT......


// void Selection_Sort(vector<int>&vec){
//     int n = vec.size();

//     for (int i=0;i<n;i++){
//         int min_idx = i;
//         for (int j=i+1;j<n;j++){
//             if(vec[j]<vec[min_idx]){
//                 min_idx = j;
//             }
//         }
//         if(min_idx!=i){
//             swap(vec[i],vec[min_idx]);
//         }
//     }

// }

// TIME COMPLEXITY : O(n^2).

//  SPACE COMPLEXITY : O(1).

// int main(){
//     int n;
//     cin>>n;
//     vector<int>vec(n);

//     for (int i=0;i<n;i++){
//         cin>>vec[i];
//     }

//     Selection_Sort(vec);

//     for(int i = 0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
// }









// BUBBLE SORT............


// void Bubble_Sort(vector<int>&vec){
//     bool flag = false;
//     int n = vec.size();
//     for (int i=0;i<n-1;i++){
//         for (int j=0;j<n-1-i;j++){
//             if (vec[j]>vec[j+1]){
//                 flag = true;
//                 swap(vec[j],vec[j+1]);
//             }
//         }
//         if (!flag) break;
//     }
// }

//  Time COMPLEXITY: O(n^2).
//  SPACE COMPLEXITY: O(1).


// int main(){
//     int n;
//     cout<<"Enter size of vector array:";
//     cin>>n;

//     vector<int>vec(n);

//     for (int i=0;i<n;i++){
//         cin>>vec[i];
//     }

//     Bubble_Sort(vec);

    // int m = vec.size();
    // for (int i=0;i<m-1;i++){
    //     for (int j=0;j<m-1-i;j++){
    //         if (vec[j]>vec[j+1]){
    //             swap(vec[j],vec[j+1]);
    //         }
    //     }
    // }

//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
// }










// bool func(int n){
//     int res = n*n;
//     int ans = n;
//     while(n>0 and res>0){
//         int last = n%10;
//         int lasts = res%10;
//         if(last!=lasts) return false;
//         n = n/10;
//         res = res/10;
//     }
//     return true;
//     }

// int main(){
//     int m,n;
//     cin>>m>>n;

//     for (int i=m;i<=n;i++){
//         if(func(i)) cout<<i<<endl;
//     }
// }









// bool prime(int n){
//     for (int i = 1;i*i<=n;i++){
//         if (n%i==0){
//             return false;}
//     }
//     return true;
// }

// bool palindrome(int n){
//     int ans = 0;
//     int res = n;
//     while(n>0){
//         int last = n%10;
//         ans = ans*10 + last;
//         n = n/10;
//     }
//     if (ans == res){
//         return true;
//     }
//     else return false;
// }

// int main(){
//     int m,n;
//     cin>>m>>n;
//     // vector<int>vec;
//     for (int i=m;i<=n;i++){
//         if(prime(i) && palindrome(i)){
//                 cout<<i<<"\n";
//             }
//         }
//         // cout<<i<<" ";
//     }










// Recursion....



// void f(string &str, int i,string result ,vector<string> &li, vector<string> &v){
//     if (i == str.size()) {
//         li.push_back(result);
//         return ;
//     }
//     int digit = str[i] - '0';
//     if (digit <= 1) {
//         f(str, i+1 , result , li , v);
//         return ;
//     }
//     for (int j = 0 ; j < v[digit].size();j++){
//         f(str, i+1 , result + v[digit][j], li, v);
//     }
//     return ;
// }

// int main(){
//     vector<string> v(10);
//     v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//     string str = "23";
//     vector<string> li;
//     f(str, 0, "",li,v);
//     for(int i = 0;i<li.size();i++){
//         cout<<li[i]<<" ";
//     }
//     return 0;
// }







// void f(string &str,int i,string result,vector<string> &li){
//     if (i == str.length()) {
//         li.push_back(result);
//         return ;
//     }

//     f(str, i+1, result + str[i], li);
//     f(str, i+1, result, li);
// }
// int main(){
//     vector<string> res;
//     string str = "abc";
//     f(str, 0 , "",res);
//     for (int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
//     return 0;
// }







// bool f(int *arr,int n,int i,int x){

//     if(i==n){
//         return false;
//     }
//     return ((arr[i]==x) || f(arr,n,i+1,x));
// }
// int main(){

//     int arr[] = {5,4,1,8,6};
//     int n = 5;
//     int x = 18;
//     bool result = f(arr,n,0,x);
//     if(result) cout<<"YES";
//     else cout<<"NO";
//     return 0;
// }







// void f(int *arr,int n,int i,int sum,vector<int>&result){
//     if(i==n){
//         result.push_back(sum);
//         return;
//     }
//     f(arr,n,i+1,sum+arr[i],result);
//     f(arr,n,i+1,sum,result);
// }

// int main(){
//     int arr[] = {2,4,5};
//     int n = 3;
//     vector<int>result;
//     f(arr,n,0,0,result);
//     for (int i=0;i<result.size();i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }






// int f(int i,int j,int m,int n){
//     if (i==m-1 && j==n-1) return 1;
//     if (i>=m || j>=n) return 0;
//     return f(i+1,j,m,n) + f(i,j+1,m,n);
// }
// int main(){

//     cout<<f(0,0,2,3);

//     return 0;
// }




// practice.....

// int fact(int n){
//     if (n==0) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = 0;
//     while(n>0){
//     int res = fact(n);
//     ans += res;
//     n--;
//     }

//     cout<<ans;
// }

// practice......





// int f(int *h,int n,int i){

//     if(i == n-1) return 0;
//     if (i == n-2) return f(h,n, i+1) + abs(h[i] - h[i+1]);

//     return min(f(h, n, i+1) + abs(h[i] - h[i+1]) , f(h , n , i+2) + abs(h[i] - h[i+2]));
// }

// int main() {
//     int arr[] = {10,30,40,20};
//     int n = 4;
//     cout<<f(arr,n,0);

//     return 0;
// }





// int pwr(int p,int q){
//     if (q==0) return 1;
//     if (q%2==0) {
//         int result = pwr(p, q/2);
//         return result * result;
//     }
//     else {
//         int result = pwr(p,(q-1)/2);
//         return p *  result * result;
//     }
// }
// int f(int n,int d){

//     if (n==0) return 0;
//     return pwr(n%10, d) + f(n/10, d);
// }
// int main(){
//     int n;
//     cin>>n;

//     int no_of_digits = 0;
//     int temp = n;
//     while (temp > 0){
//         temp = temp / 10;
//         no_of_digits++;
//     }

//     int result = f(n,no_of_digits);
//     if(result == n){
//         cout << "Yes";
//     } else{
//         cout <<"NO";
//     }
//     return 0;
// }




// int gcd(int a,int b){
//     if(b > a) return gcd(b,a);
//     if(b == 0) return a;
//     return gcd(b,a%b);
// }


// int main(){
//     int m,n;
//     cin>>m>>n;
//     int x = gcd(m,n);
//     cout << x <<"\n";
//     return 0;
// }



// int f(int n){

//     if (n==0) return 0;

//     return f(n-1) + ((n%2== 0)? (-n) : (n));
// }
// int main(){
//     int num;
//     cin>>num;
//     cout<<f(num)<<"\n";
//     return 0;
// }



// void f(int num,int k){
    
//     if(k==0) return ;
//     // cout << (num*k)<<" ";
//     f(num , k-1);
//     cout << (num*k)<<" ";
// }
// int main(){
//     int m,n;
//     cin>>m>>n;
//     f(m,n);
//     return 0;
// }



// int f(int n){
//     // cout<<n<<" ";
//     if(n==0) return 0;
//     f(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     f(n);
//     return 0;
// }



// bool f(int num,int *temp){
//     if(num >= 0 and num <= 9){
//         int lastDigitOfTemp = (*temp) % 10;
//         (*temp) /= 10;
//         return (num == lastDigitOfTemp);
//     }
//     bool result = (f(num/10,temp) and (num%10) == ((*temp) % 10));
//     (*temp) /= 10;
//     return result;
// }

// int main(){
//     int num = 12321;
//     int anotherNum = num;
//     int *temp = &anotherNum;
//     cout<<f(num,temp);
//     return 0;
// }



// string f(string &s, int idx, int n){
//     if(idx == n) return "";
//     string curr = "";
//     curr += s[idx];
//     return ((s[idx] == 'a')? "" : curr) + f(s ,idx + 1 ,n);
// }
// int main(){
//     string s = "abcax";
//     int n = 5;
//     cout<<f(s,0,n);
//     return 0;
// }



// int f(int *arr,int idx,int n){
    // if (idx == n-1) return arr[idx];
    // return arr[idx] + f(arr,idx+1,n);
// }

// int main(){
    // int arr[] = {2,3,5,20,1};
    // int n = 5;
    // cout<<f(arr,0,n);
    // return 0;
// }




// int f(int *arr,int idx, int n){
    // if (idx == n-1){
        // return arr[idx];
    // }
    // return max(arr[idx] , f(arr,idx+1,n));
// }

// int main(){
    // int n;
    // cin>>n;

    // int arr[n];

    // for (int i=0;i<n;i++){
        // cin>>arr[i];
    // }
    // 
    // cout<<f(arr,0,n);
    // return 0;
// }

// int  sort(int *arr,int n){
//     if(n==5) return 0;

//     // int min = arr[idx-1];


//     bool flag = sort(arr+1,n+1);
//     // if(min<=arr[idx+1] && flag) return true;
//     // bool flag = sort(arr);
//     // else return false;
//     return arr[0];
// }

// int main() {
//     int n = 1;
//     int arr[n] = {1,3,2,6,5};

//     cout<<sort(arr,n);
// }

// void f(int *arr,int idx,int n){
    // if(idx == n) return ;

    // cout << arr[idx]<<"\n";

    // f(arr,idx+1,n);
// }
// int main(){
    // int n;
    // cin>>n;

    // int arr[n];

    // for (int i=0;i<n;i++){
        // cin>>arr[i];
    // }
    // f(arr,0,n);
    // return 0;
// }



// int pwr(int p,int q) {
    // if (q==0) return 1;
    // if(q%2==0){
        // int res = pwr(p,q/2);
        // return res*res;
    // }
    // else{
        // int res = pwr(p,(q-1)/2);
        // return p*res*res;
    // }
// }

// int main(){
    // int p,q;
    // cin>>p>>q;

    // int res = pwr(p,q);
    // cout<<res<<endl;
    // return 0;
// }


// int pwr(int p,int q){
//     if (q==0) return 1;
//     return p*pwr(p,q-1);
// }

// int main(){
//     int p,q;
//     cin>>p>>q;

//     int result = pwr(p,q);
//     cout<<result<<endl;
//     return 0;
// }



// int SumOfDigits(int n){
//     if (n<=9 || n>=0) return n;
//     return SumOfDigits(n/10) + n%10;
// }
// int main(){
//     int n;
//     cin >> n;

//     int result  = SumOfDigits(n);
//     cout<<result<<endl;
//     return 0;
// }



// int fact(int n){
//     if (n==0) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     int res = fact(n);
//     cout<<res<<endl;
// }



// int fib(int n){
    // if (n==0 or n==1) return n;
    // return fib(n-1)+fib(n-2);
// }
// int main(){
    // int n;
    // cin>>n;

    // int res = fib(n);
    // cout<<res<<endl;
// }







// POINTERS...........

// void EvenandOdd(int *ptr,int n){
//     for (int i=0;i<n;i++){
//         if ((ptr[i])%2==0){
//             (ptr[i])=0;
//         }
//         else{
//             (ptr[i])=1;
//         }
//     }
// }
// int main(){
//     int arr[] = {23,26,3,4,5};
//     // for (int i=0;i<4;i++){
//     //     cout<<*(arr+i)<<endl;
//     // }
//     // cout<<arr<<endl;
//     // cout<<&arr[1]<<endl;
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
//     int n = 5;
//     int *ptr = arr;
//     cout<<ptr[1]<<" "<<arr[1]<<endl;

    // EvenandOdd(ptr,n);
    // for (int i=0;i<n;i++){
    //     cout<<*(arr+i)<<" ";
    // }cout<<endl;
// }




// void FirstandLastidx(string name,char ch,int *first,int *last){
//     for (int i=0;i<name.size();i++){
//         if (name[i]==ch){
//             *first = i;
//             break;
//         }
//     }
//     for (int i=name.size()-1;i>=0;i--){
//         if (name[i]==ch){
//             *last = i;
//             break;
//         }
//     }
// }
// int main(){
//     string name = "aacdab";
//     char ch = 'a';
//     int first = -1;
//     int last = -1;

//     FirstandLastidx(name,ch,&first,&last);

//     cout<<"First index: "<<first<<endl<<"Second Index "<<last<<endl;
//     // cout<<"First index: "<<first<<endl<<"Second Index "<<last<<endl;
// }






// void swap(int *a,int *b){
//         int temp = *a;
//         *a = *b;
//         *b = temp;
//     }
// int main(){
//     // int a = 10;
//     // int *ptr = &a;
//     // cout<<a<<" "<<ptr <<" "<< &a <<" "<< *ptr;
//     // int arr[5] = {1,2,3,4,5};
//     // int *ptr = &arr[0];
//     // cout<<arr<<endl;
//     // cout<<*ptr++<<"\n";
//     // cout<<(*ptr)++<<endl;
//     // cout<<arr[1]<<endl;
//     // cout<<ptr<<"\n";

//     // cout<<*++ptr<<endl;
//     // cout<<++(*ptr)<<endl;
    
//     // for (int i=0;i<5;i++){
//     //     cout<<arr[i]<<" ";
//     // }

//     int a = 10;
//     int b = 20;
//     int *ptr1 = &a;
//     int *ptr2 = &b;

//     swap(ptr1,ptr2);

//     cout<<a<<" "<<b<<endl;
//     cout<<*ptr1<<" "<<*ptr2<<endl;
//     cout<<ptr1<<" "<<ptr2<<endl;
//     cout<<&a<<" "<<&b<<endl;
    
// }






// int main(){
//     int n;
//     cin>>n;
//     int res = 0;
//     int ans = n;
//     int power = 1;
//     while(n > 0){
//         int last = n%10;
//         last *= power;
//         power *= 2;
//         res += last;
//         n = n/10;
//     }
//     cout << res << endl;
// }




// int main(){

//     int i = 36;
//     for (int i=0;i<6;i++){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<i;
// }

//     switch (n){
//         case 1:
//             cout<<"one";
//             break;

//         case 2:
//             cout<<"two";
//             // break;

//         case 3:
//             cout<<"three";
//             // break;
        
//         case 4:
//             cout<<"four";
//             // break;

//         default:
//             cout<<"invalid";
//     }



//  3rd APPROACH .BOTH row and column wise PREFIX SUM......


// int rectangleSum(vector<vector<int>> &matrix,int l1,int r1,int l2,int r2){
    
//     int sum = 0;

//      // prefix sum array row-wise
//     for (int i=0;i<matrix.size();i++){
//         for (int j=1;j<matrix[0].size();j++){
//             matrix[i][j]+= matrix[i][j-1];
//         }
//     }

//     // prefix sum array column-wise
//     for(int i=1;i<matrix.size();i++){
//         for (int j=0;j<matrix[i].size();j++){
//             matrix[i][j]+= matrix[i-1][j];
//     }
// }

//   printing prefix sum 2d array.
    // for (int i=0;i<matrix.size();i++){
    //     for (int j=0;j<matrix[i].size();j++){
    //         cout<<matrix[i][j]<<" ";
    //     }cout<<endl;
    // }

    // int top_sum=0,left_sum=0,topleft_sum = 0;
    // if(l1!=0) top_sum = matrix[l1-1][r2];
    // if(r1!=0) left_sum = matrix[l2][r1-1];
    // if(l1!=0 && r1!=0) topleft_sum = matrix[l1-1][r1-1];

    // sum = matrix[l2][r2] - top_sum - left_sum + topleft_sum;
    // for(int i=l1;i<=l2;i++){
    //     if (r1!=0){
    //         sum+=matrix[i][r2]-matrix[i][r1-1];
    //     }
    //     else{
    //         sum+=matrix[i][r2];
    //     }
    // }
//     return sum;
// }



// int main(){
//     int n;
//     int m;
//     cin>>n>>m;

//     vector<vector<int>> matrix(n,vector<int>(m));

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>matrix[i][j];
//         }
//     }

//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
//     }

//     int sum = rectangleSum(matrix,l1,r1,l2,r2);
//     cout<<sum<<" ";
//     return 0;
// }




//  2 : APPROACH .ONLY row wise PRREFIX SUM.

// int rectangleSum(vector<vector<int>> &matrix,int l1,int r1,int l2,int r2){

//     int sum = 0;
//     for (int i=0;i<matrix.size();i++){
//         for (int j=1;j<matrix[0].size();j++){
//             matrix[i][j]+= matrix[i][j-1];
//         }
//     }
// //  printing prefix sum array row-wise.
//     for (int i=0;i<matrix.size();i++){
//         for (int j=0;j<matrix[i].size();j++){
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
//     }
//     for(int i=l1;i<=l2;i++){
//         if (r1!=0){
//             sum+=matrix[i][r2]-matrix[i][r1-1];
//         }
//         else{
//             sum+=matrix[i][r2];
//         }
//     }
//     return sum;
// }


// int main(){
//     int n;
//     int m;
//     cin>>n>>m;

//     vector<vector<int>> matrix(n,vector<int>(m));

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>matrix[i][j];
//         }
//     }

//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
//     }

//     int sum = rectangleSum(matrix,l1,r1,l2,r2);
//     cout<<sum<<" ";

//     return 0;
// }



//  1. APPROACH :

// int rectangleSum(vector<vector<int>> &matrix,int l1,int r1,int l2,int r2){
//     int sum = 0;
//     for (int i=l1;i<=l2;i++){
//         for (int j=r1;j<=r2;j++){
//             sum += matrix[i][j];
//         }
//     }
//     return sum;
// }
// int main(){
//     int n;
//     int m;
//     cin>>n>>m;

//     vector<vector<int>> matrix(n,vector<int>(m));

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>matrix[i][j];
//         }
//     }

//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
//     }

//     int sum = rectangleSum(matrix,l1,r1,l2,r2);
//     cout<<sum<<" ";

//     return 0;
// }






//  Creating spiral matrix of input size.


// vector<vector<int>> createSpiralMatrix(int n){

//     vector<vector<int >> matrix(n,vector<int>(n));

//     int left = 0;
//     int right = n-1;

//     int top = 0;
//     int bottom = n-1;

//     int direction = 0;
//     int value = 1;

//     while(left<=right and top<=bottom){
//         if (direction==0){
//             for(int i=left;i<=right;i++){
//                 matrix[top][i]=value++;
//             }
//             top++;
//         }
//         else if(direction==1){
//             for (int i=top;i<=bottom;i++){
//                 matrix[i][right]=value++;
//             }
//             right--;
//         }
//         else if(direction==2){
//             for (int i=right;i>=left;i--){
//                 matrix[bottom][i]=value++;
//             }
//             bottom--;
//         }
//         else{
//             for (int i=bottom;i>=top;i--){
//                 matrix[i][left]=value++;
//             }
//             left++;
//         }
//         direction = (direction+1)%4;
//     }
//     return matrix;
// }

// int main(){

//     int n;
//     cin>>n;

//     vector<vector<int>> matrix(n,vector<int>(n));

//     matrix = createSpiralMatrix(n);
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
//     }
// }



// Spiral Order  Traversal.

// void spiralOrder(vector<vector<int>> matrix){
//     int left = 0;
//     int right = matrix[0].size()-1;

//     int top = 0;
//     int bottom = matrix.size()-1;

//     int direction = 0;

//     while(left <= bottom and top <= bottom){
//         if(direction==0){
//             for (int col=left;col<=right;col++){
//                 cout<<matrix[top][col]<<" ";
//             }
//             top++;
//         }

//         else if(direction==1){
//             for (int row=top;row<=bottom;row++){
//                 cout<<matrix[row][right]<<" ";
//             }
//             right--;
//         }
//         else if (direction==2){
//             for (int col=right;col>=left;col--){
//                 cout<<matrix[bottom][col]<<" ";
//             }
//             bottom--;
//         }
//         else{
//             for (int row=bottom;row>=top;row--){
//                 cout<<matrix[row][left]<<" ";
//             }
//             left++;
//         }
//     direction = (direction+1)%4;
//     }
// }


// int main(){

//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> matrix(n,vector<int>(m));

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
//     }
//     spiralOrder(matrix);
// }


//  Failed program to print spiral order using arrays.



// void fun(int arr,int m,int n){
//     int left = 0;
//     int right = n - 1; 

//     int top = 0;
//     int bottom = m - 1;

//     while (left<=right && top<=bottom){
//         for (int i=left;i<=right;i++){
//             cout<<arr[top][i]<<" ";
//         }
//         top++;
//         for (int i=top;i<=bottom;i++){
//             cout<<arr[i][right]<<" ";
//         }
//         right--;
//         for (int i=right;i>=left;i--){
//             cout<<arr[bottom][i]<<" ";
//         }
//         bottom--;
//         for (int i=bottom;i>=top;i--){
//             cout<<arr[i][left]<<" ";
//         }
//         left++;
//     }
// }
// int main(){
//     int m;
//     int n;
//     cin>>m>>n;
//     int arr[m][n];

//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     fun(arr,m,n);
// }




//  Three sum problem .




//  To find no of pairs whose sum is exactly a number.  

// int main(){

//     int arr1[] = {1,2,3,4,5,6};
//     int n = 6;
//     int x = 7;

//     int i = 0;
//     int j = n - 1;
//     int count = 0;
//     while (i < j){
//         if (arr1[i] + arr1[j] == x){
//             count += 1;
//             i++;
//             j--;
//         }
//         else if(arr1[i] + arr1[j] > x){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }

//     cout << count << " ";
// }





//  To return squares of elements in increasing order  using vectors and arrays.


// int main(){
//     int arr1[] = {-4,-3,-1,0,2,10};
//     int n = 6;
//     // vector<int> vec(n,0);
//     // int ind = vec.size()-1;
//     int res[n];
//     int ind = n - 1;

//     int i = 0;
//     int j = n - 1;

//     while (i <= j && ind >=0){
//         if (abs(arr1[i]) > abs(arr1[j])){
//             res[ind] = arr1[i]*arr1[i];
//             ind--;
//             i++;
//         }
//         else{
//             res[ind] = arr1[j]*arr1[j];
//             j--;
//             ind--;
//         }
//     }

//     for (int i=0;i<n;i++){
//         cout << res[i] <<" ";
//     }
// }



//  To find if their exists a pair whose difference is exactly  x.

// int main(){
//     int arr1[] = {5,10,15,20,25};
//     int n = 5;
//     int x = 50;

//     int i = 0;
//     int j = n-1;
//     bool flag = false;
//     while (i < n && j < n){
//         if (arr1[j] - arr1[i] == x){
//             flag = true;
//             break;
//         }
//         else if (arr1[j] - arr1[i] > x){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     if (flag == true){
//         cout << "Yes";
//     }
//     else{
//         cout << "No";
//     }
// }


//  To find pair exists whose sum is exactly to a number or not.

// int main(){

//     int arr1[] = {-1,0,1,2,3};
//     int n = 5;
//     int x = 6;
    
//     int i = 0;
//     int j = n-1;
//     bool flag = false;

//     while (i < j){
//         if (arr1[i] + arr1[j] == x){
//             // cout << "Yes";
//             flag = true;
//             break;
//         }
//         else if (arr1[i] + arr1[j] < x){
//             i++;
//         }
//         else{
//             j--;
//         }
//     }
//     // cout << "No";
// // }
//     if (flag == true){
//         cout << "Yes";
//     }
//     else{
//         cout << "No";
//     }
// }




//  Merge two sorted Arrays in increasing order.

// int main(){
//     int arr1[] = {1,3,5};
//     int arr2[] = {2,4,6};
//     int m = 3;
//     int n = 3;

//     int ans[m+n];
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while (i < m && j < n){
//         if (arr1[i] < arr2[j]){
//             ans[k] = arr1[i];
//             k++;
//             i++;
//         }
//         else{
//             ans[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     while (i < m){
//         ans[k] = arr1[i];
//         k++;
//         i++;
//     }

//     while (j < n){
//         ans[k] = arr2[j];
//         k++;
//         j++;
//     }

//     for (int i=0;i<m+n;i++){
//         cout<<ans[i]<<" ";
//     }
// }


//  FAILED PROGRAM FOR MERGING TWO SORTED ARRAYS.


// int main(){
//     int i = 0;
//     int j = 0;
//     int m = 4; int n = 5;
//     int arr_1[m] = {1,6,7,10};

//     int arr_2[n] = {0,1,3,8,11};

//     // int m = sizeof(arr_1)/sizeof(arr_1[0]);
//     // int n = sizeof(arr_2)/sizeof(arr_2[0]); 

//     vector<int>vec(m+n);

//     while(i<=m && j<=n){
//         if (arr_1[i] == arr_2[j]){
//             // vec.insert(vec.begin()+i,arr_1[i]);
//             vec.push_back(arr_1[i]);
//             i++;
//             // vec.insert(vec.begin()+j,arr_2[j]);
//             vec.push_back(arr_2[j]);
//             j++;
//         }
//         else if(arr_1[i] < arr_2[j]){
//             // vec.insert(vec.begin()+i,arr_1[i]);
//             vec.push_back(arr_1[i]);
//             i++;
//         }
//         else if (arr_1[i] > arr_2[j]){
//             // vec.insert(vec.begin()+j,arr_2[j]);
//             vec.push_back(arr_2[j]);
//             j++;
//         }
//         // else if  (j==m-1){
//         //     vec.push_back(arr_2[j]);
//         //     }
        
//         // if (i==m-1 || j==n-1){
//         //     vec.push_back(arr_1[i]);
//         //     vec.push_back(arr_2[j]);
//         //     break;
//         // }
//     }
//     for (int i=m+n;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }cout<<endl;
// }






// Rotate 90 degree.  

// void rotateArray(vector<vector<int>> &vec){
//     int n = vec.size();
//     // Transpose.
//     for (int i=0;i<n;i++){
//         for (int j=0;j<i;j++){
//             swap(vec[i][j],vec[j][i]);
//         }
//     }

//     // Reverse Every row.
//     for (int i=0;i<n;i++){
//         reverse(vec[i].begin(),vec[i].end());
//     }
//     return ;

// }

// int main(){

//     int n; 
//     cin >> n;

//     vector<vector<int >> vec(n,vector<int> (n));

//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             cin>>vec[i][j];
//         }
//     } 

//     rotateArray(vec);
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             cout<<vec[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




//  Second Approach.

// int leftMostOneRow(vector<vector<int>> &V){
    
//     int leftMostOne = -1;
//     int maxOnesRow = -1;
//     int j = V[0].size() - 1;
//     while(j>=0 && V[0][j]==1){
//         leftMostOne = j;
//         maxOnesRow = 0;
//         j--;
//     }

//     for (int i=1;i<V.size();i++){

//         while(j>=0 && V[i][j]==1){
//             leftMostOne = j;
//             j--;
//             maxOnesRow = i;
//         }
//     }
//     return maxOnesRow - 1;
// }



//  First Approach

// int maximumOnesRow(vector<vector<int>> &V){
//     int maxOnes = INT_MIN;
//     int maxOnesRow = -1;
//     int columns = V[0].size(); 

//     for (int i = 0 ; i < V.size() ; i++){
//         for (int j = 0;j<V[i].size();j++){
//             if (V[i][j]==1){
//                 int numberOfOnes = columns - j;
//                 if(numberOfOnes > maxOnes){
//                     maxOnes = numberOfOnes;
//                     maxOnesRow = i;
//                 }
//                 break;
//             }
//         }
//     }
//     return (maxOnesRow - 1);
// }


// int main(){
//     int n,m;
//     cin >> m>>n;

//     vector<vector<int>> vec(n,vector<int>(m));

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin >> vec[i][j];
//         }
//     }

//     // int res = maximumOnesRow(vec);
//     int res = leftMostOneRow(vec);
//     cout << res << endl;

// }




// Pascal's Triangle. 1st Approach.

// vector<vector<int>> pascalTriangle(int n){

//     vector<vector<int>>pascal(n);

//     for (int i=0;i<n;i++){
//         pascal[i].resize(i+1);

//         for (int j=0;j<i+1;j++){
//             if (j==0 || j==i){
//                 pascal[i][j] = 1;
//             }
//             else{
//             pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
//             }
//         }
//     }
//     return pascal;
// }
// int main(){
//     int n;
//     cin>>n;

//     vector<vector<int>>ans;
//     ans = pascalTriangle(n);

//     for (int i=0;i<ans.size();i++){
//         for (int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }cout<<endl;

//     }
// }



// // Pascal's Triangle

// vector<vector<int>> generatePascalsTriangle(int numRows) {
//     vector<vector<int>> triangle;
//     if (numRows <= 0) {
//         return triangle;
//     }
    
//     triangle.push_back({1});
//     for (int i = 1; i < numRows; i++) {
//         vector<int> row(i + 1, 1);
//         for (int j = 1; j < i; j++) {
//             row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//         }
//         triangle.push_back(row);
//     }
//     return triangle;
// }

// int main() {
//     int numRows ;
//     cin>>numRows ;
//     vector<vector<int>> pascalsTriangle = generatePascalsTriangle(numRows);
    
//     // Print Pascal's Triangle
//     for (const auto& row : pascalsTriangle) {
//         for (const auto& num : row) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }



//  Transpose Matrix.

// int main(){
//     int m,n;
//     cin>>m>>n;

//     int array[m][n];
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             cin>>array[i][j];
//         }
//     }

//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             cout<<array[i][j]<<" ";
//         }cout<<endl;
//     }

//     int transpose[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             transpose[i][j] = array[j][i];
//         }
//     }

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<transpose[i][j]<<" ";
//             }cout<<endl;
//         }
//     }



//  Matrix Multiplication using vectors.


// void matrixMultiplication() {
//     int r1, c1, r2, c2;

//     // Get dimensions of the first matrix
//     cout << "Enter the dimensions of the first matrix (rows columns): ";
//     cin >> r1 >> c1;

//     // Get dimensions of the second matrix
//     cout << "Enter the dimensions of the second matrix (rows columns): ";
//     cin >> r2 >> c2;

//     if (c1 != r2) {
//         cout << "Matrix multiplication is not possible for these dimensions" << std::endl;
//         return;
//     }

//     vector<vector<int>> A(r1, vector<int>(c1));
//     vector<vector<int>> B(r2, vector<int>(c2));
//     vector<vector<int>> C(r1, vector<int>(c2, 0));

//     // Get elements of the first matrix
//     cout << "Enter the elements of the first matrix:" << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             cin >> A[i][j];
//         }
//     }

//     // Get elements of the second matrix
//     cout << "Enter the elements of the second matrix:" << std::endl;
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             cin >> B[i][j];
//         }
//     }

//     cout << "First matrix Elements:" << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             cout << A[i][j]<<" ";
//         }cout<<endl;
//     }


//     cout << "Second matrix Elements:" << endl;
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             cout << B[i][j]<<" ";
//         }cout<<endl;
//     }

//     // Perform matrix multiplication
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             for (int k = 0; k < c1; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     // Print the result
//     cout << "Resultant matrix after multiplication:" << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     matrixMultiplication();
//     return 0;
// }




//  Matrix Multiplication using arrays.

// void matrixMultiplication() {
//     int r1, c1, r2, c2;

//     // Get dimensions of the first matrix
//     std::cout << "Enter the dimensions of the first matrix (rows columns): ";
//     std::cin >> r1 >> c1;

//     // Get dimensions of the second matrix
//     std::cout << "Enter the dimensions of the second matrix (rows columns): ";
//     std::cin >> r2 >> c2;

//     if (c1 != r2) {
//         std::cout << "Matrix multiplication is not possible for these dimensions" << std::endl;
//         return;
//     }

//     int A[r1][c1];
//     int B[r2][c2];
//     int C[r1][c2];

//     // Get elements of the first matrix
//     std::cout << "Enter the elements of the first matrix:" << std::endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             std::cin >> A[i][j];
//         }
//     }

//     // Get elements of the second matrix
//     std::cout << "Enter the elements of the second matrix:" << std::endl;
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             std::cin >> B[i][j];
//         }
//     }
//     cout << "First matrix Elements:" << endl;

//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             std::cout << A[i][j]<<" ";
//         }cout<<endl;
//     }
//     cout << "\nSecond matrix Elements:" << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             std::cout << A[i][j]<<" ";
//         }cout << endl;
//     }
//     // Perform matrix multiplication
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             C[i][j] = 0;
//             for (int k = 0; k < c1; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

    // Print the result

//     std::cout << "Resultant matrix after multiplication:" << std::endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             std::cout << C[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }
// }

// int main() {
//     matrixMultiplication();
//     return 0;
// }




// Failed Program for multiplication of matrices.


// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// #include<cmath>
// using namespace std;

// int main(){
//     int r1,c1;
//     cin>>r1,c1;

//     int A[r1][c1]; 
//     for (int i=0;i<r1;i++){
//         for (int j=0;j<c1;j++){
//             cin>>A[i][j];
//         }
//     }

//     for (int i=0;i<r1;i++){
//         for (int j=0;j<c1;j++){
//             cout<<A[i][j];
//         }
//     }

//     int r2,c2;
//     cin>>r2,c2;

//     int B[r2][c2];
//     for (int i=0;i<r2;i++){
//         for (int j=0;j<c2;j++){
//             cin>>B[i][j];
//         }
//     }

//     for (int i=0;i<r2;i++){
//         for (int j=0;j<c2;j++){
//             cout<<B[i][j];
//         }
//     }

//     if (c1!=r2){
//         cout<<"Matrix Multiplication is not Possible for this Input";
//     }

//     int C[r1][c2];

//     for (int i=0;i<r1;i++){
//         for (int j=0;j<c2;j++){
//             // int value = 0;
//             C[i][j] = 0;
//             for (int k=0;k<r2;k++){
//                     // value += A[i][k]*B[k][j];
//                     C[i][j] += A[i][k]*B[k][j];
//             }
//             // C[i][j] = value;
//         }
//     }

//     for (int i=0;i<r1;i++){
//         for (int j=0;j<c2;j++){
//             cout<<C[i][j]<<" ";
//         }cout<<endl;
//     }
// }





// int main(){
//     int n;
//     cin>>n;

//     vector<int>v(n+1,0);
//     for (int i=1;i<=n;i++){
//         cin>>v[i];
//     }

//     // calculate prefix sum array
//     for (int i=1;i<=n;i++){
//         v[i] += v[i-1];
//     }

//     int q;
//     cout<<"Enter Queries"<<endl;
//     cin>>q;
//     while(q--){
//         int l,r;
//         cin>>l>>r;

//         int ans = 0;
//         ans  = v[r]-v[l-1];
//         cout<<ans<<endl;
//     }
// }



// bool CheckPrefix_Sum(vector<int>v){
//     int Total_Sum = 0;
//     for (int i=0;i<v.size();i++){
//         Total_Sum += v[i];
//     }
//     int P_sum = 0;
//     for (int i=0;i<v.size();i++){
//         P_sum += v[i];
//         if (P_sum == Total_Sum - P_sum){
//                 return true;
//         } 
//     }
//     return false;
// }


// int main(){
//     int n;
//     cin>>n;

//     vector<int>v;
//     for (int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     cout<<CheckPrefix_Sum(v)<<endl;
// }


// void prfix(vector<int>&v){
//     int sum = 0;
//     for (int i=0;i<v.size();i++){
//         sum+=v[i];
//         v[i] = sum; 
//     }
//     return ;
// }


// int main(){
//     int n;
//     cin>>n;

//     vector<int>v;
//     for (int i=0;i<n;i++){
//         int ele;cin>>ele;
//         v.push_back(ele);
//     }

//     prfix(v);

//     for (int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
// }



// void sortedSquaredArray(vector<int>&v){
//     vector<int>ans;
//     int left_ptr = 0;
//     int right_ptr = v.size()-1;

//     while(left_ptr<=right_ptr){
//         if(abs(v[left_ptr])<abs(v[right_ptr])){
//             ans.push_back(v[right_ptr]*v[right_ptr]);
//             right_ptr--;
//         }
//         else{
//             ans.push_back(v[left_ptr]*v[left_ptr]);
//             left_ptr++;
//         }
//     }
//     reverse(ans.begin(),ans.end());
//     for (int i=0;i<v.size();i++){
//         cout<<ans[i]<<" ";
//     }cout<<endl;
// }


// int main(){
//     int n;
//     cin>>n;

//     // int arr[] = {1,2,3,4,5}; 
//     vector<int>v;
//     for (int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     sortedSquaredArray(v);
// }


// void sortedByParity(vector<int>&v){
//     int left_ptr = 0;
//     int right_ptr = v.size()-1;

//     while(left_ptr<right_ptr){
//         if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
//             swap(v[left_ptr],v[right_ptr]);
//             left_ptr++; right_ptr--;
//         }
//         if(v[left_ptr]%2==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]%2==1){
//             right_ptr--;
//         }
//     }
// }


// int main(){
//     int n;
//     cin>>n;

//     vector<int>v;
//     for (int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     sortedByParity(v);
//     for (int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
// }



// void sortedZerosAndOnes(vector<int>&v){
//     int left_ptr = 0;
//     int right_ptr = v.size()-1;
    
//     while(left_ptr<right_ptr){
//         if(v[left_ptr]==1 && v[right_ptr]==0){
//             v[left_ptr++]=0;
//             v[right_ptr--]=1;
//         }
//         if(v[left_ptr]==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]==1){
//             right_ptr--;
//         }
//     }
//     // return ;
// }


// int main(){
//     vector<int>v;
//     int n;
//     cin>>n;

//     for (int i=0;i<n;i++){
//         int ele;cin>>ele;
//         v.push_back(ele);
//     }

//     sortedZerosAndOnes(v);
//     for (int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
// }


// void sortedZerosAndOnes(vector<int>&v,int count){
//     for (int i=0;i<v.size();i++){
//         if(i<count){
//             v[i]=0;
//         }
//         else{
//             v[i] = 1;
//         }
//     }
// }


// int main(){
    
//     vector<int>v;
//     int n;
//     cin>>n;

//     for (int i=0;i<n;i++){
//         int ele;cin>>ele;
//         v.push_back(ele);
//     }

//     int count = 0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0){
//             count++;
//         }
//     }

//     sortedZerosAndOnes(v,count);

//     for (int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
    
// }


    // int n;
    // cin>>n;

    // vector<int>v(n);
    // for (int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // const int N = 1e5 + 10;
    // vector<int>freq(N,0);
    // for (int i=0;i<n;i++){
    //     freq[v[i]]++;
    // }

    // cout<<"Enter Queries: ";
    // int q;
    // cin>>q;

    // while(q--){
    //     int queryelement;
    //     cin>>queryelement;
    //     cout<<freq[queryelement]<<endl;
    // }

    // int main(){
    //     vector<int>v={1,2,3,4,5};
    //     int k = 2;
    //     k = k%v.size();

    //     reverse(v.begin(),v.end());
    //     reverse(v.begin(),v.begin()+k);
    //     reverse(v.begin()+k,v.end());

    //     for (int a:v){
    //         cout<<a<<" ";
    //     }cout<<endl;

    // }
    // int array[] = {1,2,3,4,5};
    // int n = 5;
    // int k = 2;
    // int ansarray[5];
    // int j = 0;
    // for (int i=n-k;i<n;i++){
    //     ansarray[j++] = array[i];
    // }

    // for (int i=0;i<=k;i++){
    //     ansarray[j++] = array[i];
    // }

    // for (int i=0;i<n;i++){
    //     cout<<ansarray[i]<<" ";
    // }



// int secondlargest(int array[],int size){
//     int max = INT_MIN;
//     int second_max = INT_MIN;

//     for (int i=0;i<size;i++){
//         if (array[i]>max){
//             max = array[i];
//         }
//     }

//     for (int i=0;i<size;i++){
//         if (array[i]>second_max and array[i]<max){
//             second_max = array[i];
//         }
//     }
//     return second_max;
// }

// int main(){
//     int array[] = {1,4,2,9,6,8,9,7,9};
//     int size  =7;
//     int res = secondlargest(array, size);
//     cout<<"Second lasgest element: "<<res;
// }
// int lrgstele(int array[],int size){
//         int max = INT_MIN;
//         int maxindex = -1;
//         for (int i=0;i<size;i++){
//             if(array[i]>max){
//                 max = array[i];
//                 maxindex = i;
//             }
//         }
//     return maxindex;
// }
// int main(){

//     int array[] = {2,4,3,5,7,6,9,8,9};
//     int size = 8;

//     int res = lrgstele(array,8);
//     cout<<array[res]<<endl;
//     // array[res] = -1;
//     int lrgstEle = array[res];
//     for (int i=0;i<size;i++){
//         if (array[i]==lrgstEle){
//             array[i] = -1;
//         }
//     }
//     int idxscndlrgst = lrgstele(array,8);
//     cout<<array[idxscndlrgst]<<endl;
//     cout<<array;
//     return 0;

    // int arr[] = {1,4,3,6,5,9,8,7,9};
    // int size = 9;

    // int first_max = arr[0];
    // // int second_max = 0;

    // for (int i=0;i<size;i++){
    //     if (arr[i]>first_max){
    //             first_max = arr[i];
    //             // arr[i] = -1;
    //     }
    //     arr[i] = -1;
    // }

    // for (int i=0;i<size;i++){
    //     for (int j=i+1;j<size;j++){
    //         if (arr[j] > first_max){
    //             first_max = arr[j];
    //             second_max = first_max;
    //         }
    //         else if (arr[j]<first_max and second_max>arr[j]){
    //             second_max = arr[j];
    //         }
    //         else{
    //             continue;
    //         }
    //     }
    // }

    // cout<<second_max<<endl;


    // int arr[] = {1,3,5,3,1,7,5};
    // // int res = 0;
    // int size = 11;
    // int count = 0;
    // for (int i=0;i<size;i++){
    //     // int count = 0;
    //     for (int j=i+1;j<size;j++){
    //         if (arr[i]==arr[j]){
    //             arr[i]=arr[j]=-1;
    //             // count+= 2;
    //         }
    //     }
    // //     if (count<2){
    // //         cout<<arr[i]<<" ";
    // // }
    // int unique = 0;
    // for (int i=0;i<size;i++){
    //     if (arr[i]>0){
    //         unique = arr[i];
    //     }
    // }
    // cout<<unique<<endl;
    // }

    // for (int i=0;i<size;i++){
    //     res = res ^ arr[i];
    // }
    // cout<<"Unique Element: "<<res<<endl;



    // int arr[] = {3,4,2,5,7,1};
    // int target_sum = 9;
    // int size = 6;
    // int triplets = 0;
    // for (int i=0;i<size;i++){
    //     for (int j=i+1;j<size;j++){
    //         for (int k=j+1;k<size;k++){
    //             if (arr[i]+arr[j]+arr[k]==target_sum){
    //                 triplets++;
    //             }   
    //         }
    //     }
    // }
    // cout<<triplets<<endl;

    // int arr[] = {3,4,6,7,1,0};
    // int target_sum = 7;
    // int size = 7;
    // int doublets = 0;

    // for (int i=1;i<size;i++){
    //     for (int j=i+1;j<size;j++){
    //         if(arr[i]+arr[j]==target_sum){
    //             doublets++;
    //         }
    //     }
    // }
    // cout<<doublets<<endl;

    // int arr[]={1,3,2,4,6,5,7,5};
    // int sum = 0;
    // for (int i=0;i<=7;i++){
    //     if (i%2==0){
    //         sum += arr[i];
    //     }
    //     else{
    //         sum -= arr[i];
    //     }
    // }
    // cout<<"Total sum: "<<sum<<endl;

    // int arr[]={1,7,3,4,5,5};
    // bool flag = 0;
    // for (int i=1;i<6;i++){
    //     if (arr[i]>=arr[i-1]){
    //         flag = 1;
    //     }
    //     else{
    //         flag = 0;
    //         break;
    //     }
    // }
    // if (flag){
    //     cout<<"Array sorted"<<endl;
    // }
    // else{
    //     cout<<"Array not sorted"<<endl;
    // }

    // vector<int>v(6);
    // for (int i=0;i<v.size();i++){
    //     cin>>v[i];
    // }

    // cout<<"Enter x:";
    // int x;
    // cin>>x;

    // int count = 0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]>x){
    //         count++;
    //     }
    // }
    // cout<<"count: "<<count<<endl;

    // vector<int>v(6);
    // for (int i=0;i<v.size();i++){
    //     cin>>v[i];
    // }
    // cout<<"Enter x:";
    // int occur = 0;
    // int x;
    // cin>>x;

    // for (int ele:v){
    //     if(ele==x){
    //         occur++;
    //     }
    // }
    // cout<<"occurence: "<<occur<<endl;


    // vector<int>v(6);
    // for (int i=0;i<6;i++){
    //     cin>>v[i];
    // }
    // cout<<"Enter x:";
    // int x;
    // cin>>x;

    // int occur = -1;
    // // for (int i=0;i<v.size();i++)  from first traverse.
    // for (int i=v.size()-1;i>=0;i--){   
    //     if (v[i]==x){
    //         occur = i;
    //         break;
    //     }
    // }
    // cout<<"occurence: "<<occur<<endl;


//     vector<int>v; 

//     for (int i=0;i<5;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele); 
//     }

// for (int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;

// v.insert(v.begin()+2,100);
// for (int ele:v){
//     cout<<ele<<" ";
// }
// cout<<endl;
// v.erase(v.end()-2);

// int index = 0;
// while(index<v.size()){
//     cout<<v[index++]<<" ";
//     // index++;
// }
// cout<<endl;

   // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    
    // v.push_back(1);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;

    // v.push_back(3);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;

    // v.resize(5);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;

    // v.resize(10);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;

    // v.resize(12);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;

    // v.pop_back();
    // v.pop_back();

    // cout<<"Size"<<v.size()<<endl;
    // cout<<"Capacity"<<v.capacity()<<endl;

// int main(){
//     int n;
//     cin>>n;
//     int arr[] = {121,2,3,4,6536,64,67};

//     cout<<arr[0];
//     for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//         cout<<arr[i]<<" ";
//     }
// }
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    // int size = sizeof(arr)/sizeof(arr[0]);

    // for (int idx=0;idx<size;idx++){
    //     cout<<arr[idx]<<endl;
    // }

    // for (int ele:arr){
    //     cout<<ele<<endl;
    // }

    // int index = 0;
    // while(index<size){
    //     cout<<arr[index]<<endl;
    //     index++;
    // }

    // char vowels[5];
    // int index = 0;
    // int size = 5;
    // for (int i=0;i<5;i++){
    //     cin>>vowels[i];
    // }


    // for (char &ele:vowels){
    //     cin>>ele;
    // }
    // int size = sizeof(vowels)/sizeof(vowels[0]);

    // for (char ele:vowels){
    //     cout<<ele<<endl;
    // }

    // while (index<size){
    //     cin>>vowels[index];
    //     index++;
    // }
    // int index = 0;
    // while(index<size){
    //     cout<<vowels[index]<<endl;
    //     index++;
    // }

    // for (int i=0;i<size;i++){
    //     cout<<vowels[i]<<endl;
    // }

    // int arr[]={1,3,5,3,5,67};
    // int key;
    // cin>>key;
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int ans = -1;
    // for (int i=0;i<size;i++){
    //     if(arr[i]==key){
    //         ans = i;
    //         break;
    //     }
    // }
    // cout<<ans;
    // return 0;





    // for (int i=1;i<=2*n;i++){
    //     if (i<=n){
    //         for (int j=1;j<=n-i;j++){
    //             cout<<" ";
    //         }
    //         for (int j=1;j<=i;j++){
    //             cout<<"*"<<" ";
    //         }
    //     }
    //     if (i>n){
    //         for (int j=1;j<=i-n-1;j++){
    //             cout<<" ";
    //         }
    //         for (int j=1;j<=2*n-i+1;j++){
    //             cout<<"*"<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=2*n-1;i++){
    //     if (i<=n){
    //         for (int j=1;j<=i;j++){
    //             cout<<"*";
    //         }
    //         for (int j=1;j<=2*n-2*i;j++){
    //             cout<<" ";
    //         }
    //         for (int j=1;j<=i;j++){
    //             cout<<"*";
    //         }
    //     }
    //     if (i>n){
    //         for (int j=1;j<=2*n-i;j++){
    //             cout<<"*";
    //         }
    //         for (int j=1;j<=2*i-2*n;j++){
    //             cout<<" ";
    //         }
    //         for (int j=1;j<=2*n-i;j++){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=2*n;i++){
    //     if (i<=n){
    //         for (int j=1;j<=n-i+1;j++){
    //             cout<<"*";
    //         }
    //         for (int j=1;j<=2*(i-1);j++){
    //             cout<<" ";
    //         }
    //         for (int j=1;j<=n-i+1;j++){
    //                 cout<<"*";
    //         }
    //     }
    //     if (i>n){
    //         for (int j=1;j<=(2*i-2*n)/2;j++){
    //             cout<<"*";  
    //         }
    //         for (int j=1;j<=2*n-(2*i-2*n);j++){
    //             cout<<" ";
    //         }
    //         for (int j=1;j<=(2*i-2*n)/2;j++){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;

    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<i;j++){
    //         cout<<" ";
    //     }
    //     for (int j=2*n-2*i+1;j>0;j--){
    //         cout<<"*"<<"";
    //     }
    //     cout<<endl;
    // }
    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for (int j=1;j<=i;j++){
    //         cout<<j<<"";
    //     }
    //     if (i>=2){
    //         for (int j = i;j>1;j--){
    //             cout<<j-1<<"";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;

    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for (int j=1;j<=2*i-1;j++){
    //         cout<<"*"<<"";
    //     }
    //     cout<<endl;
    // }

// void add(int &,int &);

// int add(a,b){
//     int a = 11;
//     int b = 22;
//     cout<<a<<" "<<b<<endl;;
//     cout<<a+b<<" "<<a*b<<" "<<pow(a,b)<<"\n";
//     return pow(a,b);
// }

// void add(int &m,int &n){
//     m = 11;
//     n = 22;
//     cout<<m<<" "<<n<<endl;;
//     cout<<m+n<<" "<<m*n<<" "<<"\n";
//     // return pow(a,b);
// }

// int add(int &a,int &b,int c = 345){
//     a = 11;
//     b = 22;
//     cout<<a<<" "<<b<<endl;;
//     cout<<a+b<<" "<<a*b<<" "<<pow(a,b-20)<<"\n";
//     return a+b+c;
// }

// int fun(int m,int n){
// 	int result = m+n;
// 	return result;
// }

// string func(string ans){
// 	return ans + "bjmhgy";
// }
    
// int fun(int m){
//     return pow(m,2);
// }

// float fun_rad(int r){
//     float ans = 3.14*pow(r,2);
//     return ans;
// }

// float fun_circum(int r){
//     float ans = 2*3.14*r;
//     return ans;  
// }

// void fun_odd(int,int);
// bool fun_prime(int);
// int binarySearch(int [],int);

    // int target;
//     cin>>target;
//     int arr[] = {1,3,4,5,6,8,9};
//     // int target = 7;
    
//     int res = binarySearch(arr,target);
//     if (res!=-1){
//         cout<<res;
//     }
//     else{
//         cout<<-1;
//     }
//     cout << "Element found at index " << res << endl;
// }
//     // code for binary search in arrays
//     int binarySearch(int arr[],int target){
//         int low = 0;
//         int len = sizeof(arr)/sizeof(arr[0]);
//         int high = len - 1;
//         int mid;
        
//         while (low <= high) {
//             mid = (low + (high-low)) / 2;
        
//             if (arr[mid] == target) {
//                 return mid;
//                 break;
//             } else if (arr[mid] < target) {
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }
//         }
//     }
    // print the output position of array  element in above code





    // for (int i=1;i<=n;i++){
    //     for (int j=0;j<=2*n-2*i;j++){
    //         cout<<" ";
    //     }
    //     for (int j=1;j<=2*i-1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // int num = 65;

    // for (int i=1;i<=n;i++){
    //     for (int j=n-i;j>0;j--){
    //         cout<<" ";
    //     }
    //     for (int j=1;j<=i;j++){
    //         cout<<char(num+j-1)<<"";
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=n;i++){
    //     for (int j=n-i;j>0;j--){
    //         cout<<" ";
    //     }
    //     for (int j=1;j<=i;j++){
    //         cout<<j<<"";
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=n;i++){
    //     for(int j=n-i;j>0;j--){
    //         cout<<" "<<"";
    //     }
    //     for (int j=1;j<=i;j++){
    //         cout<<i<<"";
    //     }
    //     cout<<"\n";
    // }

    // for (int i=1;i<=n;i++){
    //     for (int j=n-i;j>0;j--){
    //         cout<<" "<<"";
    //     }
    //     for (int j=1;j<=i;j++){
    //         cout<<"*"<<"";
    //     }
    //     cout<<endl;
    // }

    // vector<int>vectors(10);
    // int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
    // for (int i=0;i<sizeof(arr);i++){
    //         cout<<arr[i]<<" ";
    // }
    // cout<<V.begin();


// bool fun_prime(int);
// int main(){
//     int a,b;
//     cin>>a>>b;

//     for (int i=a;i<=b;i++){
//         bool res = fun_prime(i);
//         if (res==true){
//             cout<<i<<" ";
//         }
//     }
// }  

// bool fun_prime(int n){
//     int count = 0;
//     for (int j=2;j*j<=n;j++){
//         if (n%j==0){
//             count++;
//         }
//     } 
//     if (count>1) return false;
//     else return true;
// }


// void fun_odd(int,int);
// int main(){
//     int a,b;
//     cin>>a>>b;

//     fun_odd(a,b);

// }
// void fun_odd(int n,int m){
//     for (int i=n;i<=m;i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//     }
// }


    // int r;
    // cin>>r;

    // float res1 = fun_rad(r);
    // float res2 = fun_circum(r);
    // cout<<"Area"<<" "<<res1<<endl<<"Circumference"<<" "<<res2<<endl;
// }

    // int n;
    // cin>>n;

    // for (int i=1;i<=n;i++){
    //     int res = fun(i);
    //     cout<<res<<" ";
    // }


    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n - i; j++) {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < 2 * i + 1; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int a;
	// int b;
	// string chr;
	// cin>>chr;
	// cin>>a;
	// cin>>b;

	// cout<<fun(a,b)<<endl;

	// string res1 = func(chr);

	// cout<<res1<<endl;
	

    // int A = 65;

	// for (int i=1;i<=n;i++){
	// 	for (int j=n;j>=n-i+1;j--){
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// for (int i=1;i<=n;i++){
	// 	for (int j=1;j<=n-i+1;j++){
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<endl;
	// }

    // for(int i =0;i<n;i++){
    //     for (int j = 0;j<i+1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<i+1;j++){
    //         cout<<char(A+i)<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = n - i + 1; j <= n; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++) {
    //     for (int j = i; j > 0; j--) {
    //         cout<< j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i =1;i<=n;i++){
    //     for (int j = n-i+1;j<=n;j++){
    //         cout<<j<<" "; 
    //     }
    //     cout<<endl;
    // }

    // for (int i =1;i<=n;i++){
    //     for (int j=i;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=n;i++){
    //     for (int j=n;j>=n-i+1;j--){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;

    // for (int i = 0;i<n;i++){
    //     for (int j=0;j<i+1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

// void add(int& , int&);

// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;

//     add(a,b);
//     cout<<a<<" "<<b<<endl;
//     // cout<<res<<endl;
//     // cout<<res<<" "<<endl;
// }

// void add(int &a,int &b){
//     a = 11;
//     b = 22;
//     cout<<a<<" "<<b<<endl;;
//     cout<<a+b<<" "<<a*b<<" "<<pow(a,b-20)<<"\n";
//     // return pow(a,b);
// }


// int add(&a,&b){
//     int a = 11;
//     int b = 22;
//     cout<<a<<" "<<b<<endl;;
//     cout<<a+b<<" "<<a*b<<" "<<pow(a,b)<<"\n";
//     return pow(a,b);
// }

// void add(int &m,int &n){
//     m = 11;
//     n = 22;
//     cout<<m<<" "<<n<<endl;;
//     cout<<m+n<<" "<<m*n<<" "<<"\n";
//     // return pow(a,b);
// }



    // int age;
    // cin>>age;
    // if (age < 18){
    //     if(age<=12){
    //         cout<<"CHILD"<<endl;
    //     }
    //     else{
    //         cout<<"Age must be greater than 18"<<endl;
    //     }
    // }
    // else{
    //     cout<<"Eligible To Vote"<<endl;
    // }

    // age>=18? cout<<"Eligible To Vote"<<endl:cout<<"Not Eligible To Vote"<<endl;
    // cout<<age<<endl;
    // cout<<(2^8);

//     int num;
//     cin>>num;

//     if (num%2==0 or num%3==0){
//         cout<<"Good"<<endl;
//     }
//     else{
//         cout<<"Bad"<<endl;
//     }

    // int day;
    // cin>>day;
    // char character;

    // switch(day){
    //     case 1:
    //     cout<<"Monday"<<endl;
    //     break;

    //     case 2 :
    //     cout<<"Tuesday"<<endl;
    //     break;

    //     case 3:
    //     cout<<"Wednesday"<<endl;
    //     break;

    //     default :
    //     cout<<"Invalid"<<endl;
    // int i=0;
    // for (;i<=9;i++){
    //     cout<<i+1<<endl;
    // }
    // int n;
    // cin>>n;
    // int i =1;
    // int sum =0;
    // while(i<=n){
    //     sum += i ;
    //     i++;
    // }
    // cout<<sum<<endl;

    // for(int i=0,j=5; i<=5,j>=0;i++,j--){
    //     cout<<i<<endl;
    // }
    // int i=0;
    // // do{
    // //     cout<<i+1<<endl;
    // //     i++;
    // // }while(i<=5);

    // for(int i=1;i<=5;i++){
    //     cout<<i<<endl;
    // }
    // cout<<i<<endl;

    // int n;
    // cin>>n;

    // for (int i=1;i<=10;i++){
    //     cout<<n*i<<endl;
    // }

    // cout<<"Hey Striver"<<"\n";
    // cout<<"Hey Striver"<<"\n";

    // int x,y;
    // cin>>x>>y;
    // cout<< x<<y<<endl;

    // long x = 12342523;
    // cout<<x;

    // string str;
    // getline(cin,str);
    // cout<<str;
    
    // long double x = 123.5643564647637;
    // cout<<x;

    // int arr[3];
    // cin>>arr[0] >> arr[1]>>arr[2] >> arr[3];
    // cout<<arr;

    // int n;
    // cin>>n;
    // for (int i = 1;i<=n;i++){
    //     if (i%4==0)
    //         cout<<i<<" ";
    // }
    // return 0;

    
    // for (int i=0;i<=50;i++){
    //     if (i==25 or i== 30) 
    //         continue;
    
    // cout<<i*i<<" ";
    // }

    // int n,m;
    // cin>>n>>m;

    // for (int i=0;i<m;i++){
    //     for (int j=0;j<n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0;i<n;i++){
    //     for (int j = 0;j<m;j++){
    //         if (i==0 || i==n-1 || j==0 || j==m-1)
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n,m;
    // cin>>n>>m;

    // for (int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for (int j=0;j<2*i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }

    // for (int i=1;i<=n;i++){
    //     for (int j=i;j<=m;j++){
    //         cout<<j<<" ";
    //     }
    //     for (int j=i,k=1;j>1;j--,k++){
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=m;j++){
    //         if (i==1 || i==n) 
    //             cout<<j;
    //         else
    //             cout  
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=m;j++){
    //         if((i+j)%2==0)
    //             cout<<"1";
    //         else
    //             cout<<"2";
    //     }
    //     cout<<endl;
    // }

    // for (int i=0;i<=n;i++){
    //     for (int j=0;j<n-1;j++){
    //         cout<<" ";
    //     }
    //     for (int j=1;j<n;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=m;j++){
    //         if ((i+j)%2==0)
    //             cout<<"1";
    //         else    
    //             cout<<"2";
    //     }
    //     cout<<"\n";
    // }

//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for (int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for (int j=1;j<i;j++){
//             cout<<j;
//     }
//     cout<<endl;

// }

    // for (int i=0;i<=2*n-1;i++){
    //     for (int j=0;j<=2*m-1;j++){
    //         int left = j;
    //         int top = i;
    //         int bottom = 2*n-2-i;
    //         int right = 2*n-2-j;
    //         cout<<n-min(min(left,right),min(top,bottom));
    //     }
    //     cout<<endl;
    // }

// Two Sum
// Roman to Integer
// Palindrome Number
// Maximum Subarray
// Remove Element
// Contains Duplicate
// Add Two Numbers
// Majority Element
// Remove Duplicates from Sorted Array
// Practice them in a row for better understanding and please Upvote the post for more questions.










































































































































































































































































































































































































































































































































































































































































































