#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int A[] = {1,2,3,4,6};
    int count = 0;
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                cout<<A[k];
            } cout<<endl;
            count++;
        }
    }
    cout<<count<<endl;
}







// A circular prime is a prime number with the property that the number generated at each intermediate step when cyclically permuting its digits will be prime. For example, 1193 is a circular prime, since 1931, 9311 and 3119 are also prime.

// bool isPrime(int);

// int main() {
//     int n;
//     cin>>n; 
//     string number = to_string(n);
//     int length = number.size();
//     int temp = n;
//     // int rem = 0;
//     int i = 0;
//     bool flag = true;

//     while(i<length){
//         cout<< temp<<endl;
//         if(isPrime(temp)!= true){
//             cout<< n <<"is not circular prime"<<endl;
//             flag=false;
//             break;
//         }
//         int rem = temp%10;
//         temp = rem*pow(10,length-1) + round(temp/10);
//         i++;
//     }
//     if(flag != false){
//         cout<<n<<"is circular prime";
//     }   
//     return 0;
// }

// bool isPrime(int n){
//     if(n>=2){
//         for(int i=2;i<=sqrt(n);i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//     }
//     else{
//         return false;
//     }
//     return true;
// }



// int main() {
//     int n;
//     cin>>n;

//     int temp = n*n;
//     // int rem = 0;
//     int lastD = 0;
//     int i = 0;

//     while(temp){
//         int rem = temp%10;
//         lastD = lastD + rem*pow(10,i);
//         temp = temp/10;
//         i++;
//         if(lastD == n){
//             cout<<"AutoMorphic number"<<endl;
//             break;
//         }
//     }
//     cout<<"Not AutoMorphic Number"<<endl;
// }











// bool prime(int a);
// bool palindrome(int n);

// int main() {

//     for(int i=0;i<=2000;i++){
//         if(prime(i) and palindrome(i)) {
//             cout << i << endl;
//         }
//     }
// }

// bool prime(int n){
//     if(n>=2){
//         for(int i=2;i<=sqrt(n);i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//     }
//     else{
//         return false;
//     }
//     return true;
// }

// bool palindrome(int n){
//     int temp = n;
//     int ans = 0;

//     while(temp){
//         int last = temp%10;
//         ans = ans*10 + last;
//         temp = temp/10;
//     }

//     if(n == ans) return true;
//     return false;
// }





// int fact(int);

// int main() {

//     int n;
//     cin>>n;
//     int sum = 0;
//     int i=0;
//     while(i<n){
//         sum = sum + fact(i+1);
//         i = i + 1;
//     }
//     cout<<sum<<endl;
// }

// int fact(int n){
//     if(n==0 or n==1) return 1;
//     else  return n*fact(n-1);
// }