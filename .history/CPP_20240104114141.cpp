#include<iostream>
#include<string>
using namespace std;


//  subArray with given sum


// C++ library headers


// <algorithm>	<iomanip>	<list>	<queue>	<string>
// <bitset>	<ios>	<locale>	<set>	<strstream>
// <complex>	<iosfwd>	<map>	<sstream>	<typeinfo>
// <deque>	<iostream>	<memory>	<stack>	<utility>
// <exception>	<istream>	<new>	<stdexcept>	<valarray>
// <fstream>	<iterator>	<numeric>	<streambuf>	<vector>
// <functional>	<limits>	<ostream>







// void RecPractice(int n) {
//     if(n==0) {
//         cout<<n<<endl;
//         return;
//     }

//     cout<<n<<endl;
//     RecPractice(n-2);
//     cout<<n<<endl;


// }

// int main() {
//     int n;
//     cin>>n;

//     if(n%2==1) n-=1;
//     RecPractice(n);
//     return 0;
// }







// void RecPrint(int n,int i){
//     if(i==n) {
//         cout<<n<<endl;
//         return;
//     }
//     cout<<i<<endl;
//     RecPrint(n,i+1);
//     // cout<<i<<endl;
// }


// int main() {
//     int n;
//     cin>>n;
//     int i=1;
//     RecPrint(n,i);
//     return 0;
// }






//  BINARY SEARCH..........

// BRecursion(int arr[], int first, int last, int ele) {
//     int mid = first + (last-first)/2;

//     if(first>last) return -1;

//     if(arr[mid] == ele) return mid;

//     else if(arr[mid] > ele) return BRecursion(arr,first,mid-1,ele);

//     else return BRecursion(arr,mid+1,last,ele);

// }
// int main() {
//     int arr[] = {-10, -5, 2, 3, 7, 8, 9}; // sorted array
//     int n = sizeof(arr) / sizeof(arr[0]) -1;
//     int ele = 767;
//     int first = 0;
//     int last = n;
//     cout<<BRecursion(arr,first,last,ele);
// }



//  LINEAR SEARCH............
// bool RTraverse(int arr[], int first,int last, int ele) {
//     if(first>last) return 0;

//     if(arr[first] == ele) return first;

//     else return RTraverse(arr,first+1,last,ele);
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int x = 23;
//     int first = 0;
//     int last = sizeof(arr)/sizeof(arr[0]);
//     cout<<RTraverse(arr,first,last,x);
// }


// void LowerToUpper(string &str,int first, int last){
//     if(first>last) return;

//     str[first] = 'A' + str[first] - 'a';
//     LowerToUpper(str,first+1,last);
// }
// int main() {

//     string str;
//     cin>>str;
//     int last = str.length()-1;
//     int first = 0;
//     LowerToUpper(str,first,last);
//     cout<<str;
// }


// void ReverseStr(string & str, int first, int last){
//     if(first>last) return;

//     char c = str[last];
//     str[last] = str[first];
//     str[first] = c;
//     // swap(str[first], str[last]);

//     ReverseStr(str,first+1,last-1);
// }


// int main() {
//     string str;
//     getline(cin,str);
//     int first = 0;
//     int last = str.length()-1;
//     ReverseStr(str,first,last);
//     cout<<str<<endl;
// }



// bool RecursePalindrome(string str,int start,int end) {
//     if(start>=end) return 1;

//     if(str[start]!=str[end]) return 0;

//     return RecursePalindrome(str,start+1,end-1);
// }
// int main() {
//     string str;
//     cin>>str;
//     int start = 0;
//     int end = str.length()-1;

//     cout<<RecursePalindrome(str,start,end);
// }

// int Count(string str, int first,int last){
//     if(first>=last) return 0;

//     if(str[first] == 'a' || str[first] == 'e' || str[first] == 'i' || str[first] == 'o' || str[first] == 'u'){
//         return 1 + Count(str,first+1,last);
//     }

//     else{
//         return Count(str,first+1,last);
//     }
// }
// int main() {
//     string str;
//     cin>>str;
//     int last = str.length()-1;
//     int first = 0;

//     cout<< Count(str,first,last);
// }