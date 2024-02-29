#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<string.h>
#include<algorithm>
#include<unordered_map>
using namespace std;

// class Array
// {
// public:
//     int size;
//     int *a;
    
//     Array()
//     {
//         this->size = 1;
//         a = new int[size];
//         a[0] = 0;
//     }

//     void printArray()
//     {
//         for (int i = size - 1; i >= 0; i--)
//         {
//             cout << a[i] << "X^" << i << ' ';
//         }
//         cout << endl;
//     }

//     void insArr(int pos, int item)
//     {
//         if (pos >= size)
//         {
//             int *b = new int[pos + 1];
//             for (int i = 0; i < size; i++)
//             {
//                 b[i] = a[i];
//             }
//             for (int i = size; i < pos; i++)
//             {
//                 b[i] = 0;
//             }
//             a = b;
//             a[pos] = item;
//             this->size = pos + 1;
//         }
//         else
//         {
//             a[pos] = item;
//         }
//     }

//     void addPolynomials(Array &B)
//     {
//         int newSize = max(this->size, B.size);
//         int *result = new int[newSize];

//         for (int i = 0; i < newSize; i++)
//         {
//             result[i] = this->a[i] + B.a[i];
//         }

//         delete[] this->a;
//         this->a = result;
//         this->size = newSize;
//     }
// };

// int main()
// {
//     Array A, B;
//     string user_inp;
    

//     cout << "Enter coefficients for the first polynomial:\n";
//     do
//     {
//         int pos, ele;
//         cout << "Enter the degree: ";
//         cin >> pos;
//         cout << "Enter the coefficient: ";
//         cin >> ele;
//         A.insArr(pos, ele);
//         A.printArray();
//         cout << "Do you want to enter a new coefficient? (Y/N) ";
//         cin >> user_inp;
//     } while (user_inp != "n");

//     cout << "\nEnter coefficients for the second polynomial:\n";
//     do
//     {
//         int pos, ele;
//         cout << "Enter the degree: ";
//         cin >> pos;
//         cout << "Enter the coefficient: ";
//         cin >> ele;
//         B.insArr(pos, ele);
//         B.printArray();
//         cout << "Do you want to enter a new coefficient? (Y/N) ";
//         cin >> user_inp;
//     } while (user_inp != "n");


//     cout << "\nResultant Polynomial after addition:\n";
//     A.addPolynomials(B);
//     A.printArray();

//     return 0;
// }








// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// #include<cmath>
// #include<string.h>
// #include<algorithm>
// #include<unordered_map>

// using namespace std;

// #include <bits/stdc++.h>
// using namespace std;
// class Array
// {
// public:
//     int size;
//     int *a;
//     Array()
//     {
//         this->size = 1;
//         a = new int[size];
//         a[0] = 0;
//     }
//     void printArray()
//     {
//         for (int i = size - 1; i >= 0; i--)
//         {
//             cout << a[i] << "X^" << i << ' ';
//         }
//         cout << endl;
//     }
//     void insArr(int pos, int item)
//     {
//         if (pos >= size)
//         {
//             int *b = new int[pos + 1];
//             for (int i = 0; i < size; i++)
//             {
//                 b[i] = a[i];
//             }
//             for (int i = size; i < pos; i++)
//             {
//                 b[i] = 0;
//             }
//             a = b;
//             a[pos] = item;
//             this->size = pos + 1;
//         }
//         else
//         {
//             a[pos] = item;
//         }
//     }
// };

// int main()
// {
//     Array A;
//     string user_inp;
//     cout << "Do you want to enter a new co-efficient?(Y/N) ";
//     cin >> user_inp;
//     while (user_inp != "n")
//     {
//         int pos, ele;
//         cout << "Enter the degree: ";
//         cin >> pos;
//         cout << "Enter the co-efficient: ";
//         cin >> ele;
//         A.insArr(pos, ele);
//         A.printArray();
//         cout << "Do you want to enter a new co-efficient?(Y/N) ";
//         cin >> user_inp;
//     }
//     A.printArray();
// }

// class Array{
//     int capacity;
//     int size = 4;
//     string datatype;
//     int a[];
//     public:
//         Array(int capacity, int size, int b[]){
//             this-> capacity = capacity;
//             this-> size = size;
//             int *a =  new int[capacity];
//             for (int i=0;i<size;i++){
//                     *(a+i) = b[i];
//             }
//         }
//         Array() {
//             size = 10;
//             capacity = 8;
//         }

//         void insert(int index, int element) {
//             if(size == capacity){
//                 cout<<"Can't insert new element";
//             }

//             a[size] = element;
//             size++;
//         };

//         // void delete(int index, int element){
            
//         // }

//         void printArray() {
//             for (int i=0;i<size;i++){
//                 cout<<a[i]<<" "<<endl;
//                 // break;
//             }
//         }

//         void printPolynomial(){
//             cout<<"Print Polynomial"<<endl;

//             string ans = "";
            
//             while(cin>>ans && (ans == "y")){
//                 int coeff = 0, degree = 0;
//                 cout<<"Enter the coefficient";
//                 cin>>coeff;
//                 cout<<"Enter degree";
//                 cin>>degree;

//             }
//         }
// };
// int main() {
//     int s[] = {23,34,4,56,78};
//     Array a(6,5,s);
//     a.printArray();
//     a.insert(1,900);
//     a.printArray();
//     a.insert(2,100);
//     a.printArray();
//     a.insert(3,456);
//     // a.delete(2,100);
// } 




// // class Solution {
// // public:
// // int getMaxFreq(int n, int A[]) {
// //         // Create an unordered_map to store the frequency of each element
// //         unordered_map<int, int> map;

// //         // Iterate through the array and update the frequency for A[i]-1 and A[i]+1
// //         for (int i = 0; i < n; ++i) {
// //             map[A[i] - 1] = map[A[i] - 1] + 1;  // Increment frequency for A[i]-1
// //             map[A[i] + 1] = map[A[i] + 1] + 1;  // Increment frequency for A[i]+1
// //         }

// //         // Find the maximum frequency in the map
// //         int ans = 0;
// //         for (const auto& kv : map) {
// //             ans = max(kv.second, ans);
// //         }

// //         return ans;
// //     }

// // int main() {
// //     // Example usage:
// //     int n = 5;
// //     int A[] = {1, 2, 3, 4, 5};

// //     int result = getMaxFreq(n, A);

// //     cout << "Maximum Frequency: " << result << endl;

// //     return 0;
//     // }
// // };

// // int main() {
// //     // Example usage:
// //     int n = 5;
// //     int A[] = {1, 2, 3, 4, 5};

// //     int result = getMaxFreq(n, A);

// //     cout << "Maximum Frequency: " << result << endl;

// //     return 0;
// // }

// // class Fruit{
// //     public:
// //         string name;
// //         string color;  
// // };
// // int main() {

// //     Fruit apple;
// //     apple.name = "Apple";
// //     apple.color = "Red";
// //     cout << "Name of the fruit is :"<<apple.name<<endl;  // Outputs Apple

// //     Fruit *mango = new Fruit();
// //     mango->name = "mango";
// //     mango->color = "Yellow";
// //     cout<<mango->color<<" "<<mango->name<<endl;

// //     return 0;
// // }



// class Rectangle {int main() {}
//     public:
//         int l;
//         int b;

//         Rectangle(){
//             l = 0;
//             b = 0;
//         }

//         Rectangle(int x, int y){
//             l = x;
//             b = y;
//         }

//         Rectangle(Rectangle& r){
//             l = r.l;
//             b = r.b;
//         }

//         ~Rectangle(){ // Destructor...
//             cout<<"Destructor is Called"<<endl;
//         }
// };
    
// int main() {

//     //  Constructor  default...
//     Rectangle *r4 = new Rectangle();
//     cout<<r4->l<<" "<<r4->b<<endl;

//     delete r4;

    
//     Rectangle r(3,5);
//     cout<<r.l<<" "<<r.b<<endl;

//     // Constructor parametrized....
//     Rectangle r2(2,5);
//     cout<<r2.l<<" "<<r2.b<<endl;

//     // Constructor copy     
//     Rectangle r3 = r;
//     cout<<r3.l<<" "<<r3.b<<endl;

//     Rectangle r1 = r2;
//     cout<<r1.l<<" "<<r1.b<<endl;
// }

// // class ABC{
// //     int x;

// //     public:

// //         void set(int n){
// //             x = n;
// //         }

// //         int get(){
// //             return x;
// //         }
// // };

// // int main() {
// //     ABC obj1;
// //     obj1.set(7890);
// //     cout<<obj1.get();
// // }














// // int main() {
// //     int count=0;
// //     int arr[3][3] = {{1,0,0},{0,2,0},{2,0,0}};
// //     for (int i = 0;i<3;i++){
// //         for (int j=0;j<3;j++){
// //             if(arr[i][j]!=0){
// //                 arr[0][i] = i;
// //                 arr[1][i] = j;
// //                 arr[2][i] = arr[i][j];
// //                 count++;
// //             }
// //         }
// //     }


// //     cout<<count;
// // }



int main(){
    // a = {{1,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,5,0,0,0,2},{}};
    int A[3][3] = {
        {1,0,2},
        {0,4,0},
        {0,0,0}
    };
    int count_nonzero = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]!=0){
                count_nonzero++;
            }
        }
    }
    int sparse[3][count_nonzero];
    int i = 0;
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            if( A[r][c]!=0){
                sparse[0][i]=r;
                sparse[1][i]=c;
                sparse[2][i]=A[r][c];
                i++;
            }
        }
    }
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            cout<<sparse[r][c]<<" ";
        }
        cout<<endl;
}

}




// // class Employee {  //Class Declaration
// //     public:
// //         string id, name;
// //         int years;  //experience (in years)
        
// //         Employee(string id, string name, int years) {
// //             this->id = id;
// //             this->name = name;
// //             this->years = years;
// //         }
        
// //         void work() {
// //             cout << "Employee: " << this->id << " is working\n";
// //         }
// // };

// // int main()
// // {
// //     //Class Instantiation (Direct)
// //     Employee emp("GFG123", "John", 3);
    
// //     //Class Instantiation (Indirect)
// //     Employee *emp_ptr = new Employee("GFG456", "James", 4);
    
// //     cout << "Employee ID: " << emp.id << endl;
// //     cout << "Name: " << emp.name << endl;
// //     cout << "Experience (in years): " << emp.years << endl;
    
// //     emp.work();
// //     cout << endl;
    
// //     cout << "Employee ID: " << emp_ptr->id << endl;
// //     cout << "Name: " << emp_ptr->name << endl;
// //     cout << "Experience (in years): " << emp_ptr->years << endl;
    
// //     emp_ptr->work();
// //     return 0;
// // }







// // class Employee {  //Class Declaration
// //     public:
// //         string id, name;
// //         int years;  //experience (in years)
        
// //         Employee(string id, string name, int years) {
// //             this->id = id;
// //             this->name = name;
// //             this->years = years;
// //         }
        
// //         //Prototype Declaration
// //         void work();
// // };

// // //Outside-class definition
// // void Employee::work() {
// //     cout << "Employee: " << this->id << " is working\n";
// // }

// // int main()
// // {
// //     //Class Instantiation (Direct)
// //     Employee emp("GFG123","John",3);
    
// //     emp.work();
// //     return 0;
// // }



// // class Solution {
// // public:
// //     int minPairSum(vector<int>& nums) {
        
// //         sort(nums.begin(),nums.end());

// //         int i = 0;
// //         int j = nums.size() - 1;
// //         int len = nums.size();

// //         int ans = INT_MIN;
// //         int sum = 0;

// //         for (int i=0;i<len/2;i++){
// //             int sum = nums[i]+nums[j];

// //             int ans = max(ans,sum);
// //             j--;
// //         }
// //         return ans;
// //     }
// // };




// // class Cars{
// // public:
// //     int weight;
// //     int height;
// //     float MILAJ;
// //     string colour;
// // };

// // int main(){

// //     Cars XUV;
// //     XUV.weight = 150;
// //     XUV.colour = "RED";
// //     XUV.MILAJ = 2.5;
// //     cout<<XUV.weight<<endl<<XUV.colour<<endl<<XUV.MILAJ<<endl;

// //     /* The above code is declaring a pointer variable `car` of type `Cars` and initializing it with a
// //     new instance of the `Cars` class. */
    
// //     Cars *car = new Cars();
// //     car->weight = 150;
// //     car->height = 50;
// //     car->MILAJ = 2.5;
// //     cout<<car<<endl;
// //     cout<<endl<<car->weight<<endl<<car->height<<endl<<car->MILAJ;


// //     return 0;
// // }




// // // Define a class called Car
// // class Car {
// // public:
// //     // Class attribute (shared by all instances of the class)
// //     static std::string fuelType;

// //     // Constructor method (called when an object is created)
// //     Car(std::string make, std::string model, int year) {
// //         // Instance attributes (specific to each instance)
// //         this->make = make;
// //         this->model = model;
// //         this->year = year;
// //         this->isRunning = false;  // Additional attribute to track the car's running state
// //     }

// //     // Instance method (defines behavior associated with an instance)
// //     void startEngine() {
// //         if (!isRunning) {
// //             std::cout << "The " << year << " " << make << " " << model << "'s engine is now running." << std::endl;
// //             isRunning = true;
// //         } else {
// //             std::cout << "The engine is already running." << std::endl;
// //         }
// //     }

// //     void stopEngine() {
// //         if (isRunning) {
// //             std::cout << "The " << year << " " << make << " " << model << "'s engine is now stopped." << std::endl;
// //             isRunning = false;
// //         } else {
// //             std::cout << "The engine is already stopped." << std::endl;
// //         }
// //     }

// //     void displayInfo() {
// //         std::cout << year << " " << make << " " << model << ", Fuel Type: " << fuelType << std::endl;
// //     }

// // private:
// //     // Instance attributes (accessible only within the class)
// //     std::string make;
// //     std::string model;
// //     int year;
// //     bool isRunning;
// // };

// // // Initialize the class attribute
// // std::string Car::fuelType = "Petrol";

// // int main() {
// //     // Create instances of the 'Car' class
// //     Car car1("Toyota", "Camry", 2022);
// //     Car car2("Honda", "Accord", 2023);

// //     // Accessing and modifying instance attributes
// //     std::cout << car1.getMake() << std::endl;  // Output: Toyota
// //     car2.setYear(2024);

// //     // Accessing class attribute
// //     std::cout << Car::fuelType << std::endl;  // Output: Petrol

// //     // Calling instance methods
// //     car1.startEngine();  // Output: The 2022 Toyota Camry's engine is now running.
// //     car2.stopEngine();   // Output: The 2023 Honda Accord's engine is now stopped.

// //     // Displaying information about the cars
// //     car1.displayInfo();  // Output: 2022 Toyota Camry, Fuel Type: Petrol
// //     car2.displayInfo();  // Output: 2024 Honda Accord, Fuel Type: Petrol

// //     return 0;
// // }



// // class Car {
// // public:
// //     // Class attribute (shared by all instances of the class)
// //     static string fuelType;

// //     // Constructor method (called when an object is created)
// //     Car(string make, string model, int year) {
// //         // Instance attributes (specific to each instance)
// //         this->make = make;
// //         this->model = model;
// //         this->year = year;
// //         this->isRunning = false;  // Additional attribute to track the car's running state
// //     }

// //     // Getter methods for private attributes
// //     string getMake() const {
// //         return make;
// //     }

// //     string getModel() const {
// //         return model;
// //     }

// //     int getYear() const {
// //         return year;
// //     }

// //     // Setter method for a private attribute
// //     void setYear(int year) {
// //         this->year = year;
// //     }

// //     // Instance method (defines behavior associated with an instance)
// //     void startEngine() {
// //         if (!isRunning) {
// //             std::cout << "The " << year << " " << make << " " << model << "'s engine is now running." << endl;
// //             isRunning = true;
// //         } else {
// //             std::cout << "The engine is already running." << endl;
// //         }
// //     }

// //     void stopEngine() {
// //         if (isRunning) {
// //             cout << "The " << year << " " << make << " " << model << "'s engine is now stopped." << endl;
// //             isRunning = false;
// //         } else {
// //             cout << "The engine is already stopped." << endl;
// //         }
// //     }

// //     void displayInfo() const {
// //         std::cout << year << " " << make << " " << model << ", Fuel Type: " << fuelType << endl;
// //     }

// // private:
// //     // Instance attributes (accessible only within the class)
// //     string make;
// //     string model;
// //     int year;
// //     bool isRunning;
// // };

// // // Initialize the class attribute
// // string Car::fuelType = "Petrol";

// // int main() {
// //     // Create instances of the 'Car' class
// //     Car car1("Toyota", "Camry", 2022);
// //     Car car2("Honda", "Accord", 2023);

// //     // Accessing and modifying instance attributes
// //     cout << car1.getMake() << std::endl;  // Output: Toyota
// //     car2.setYear(2024);

// //     // Accessing class attribute
// //     cout << Car::fuelType << endl;  // Output: Petrol

// //     // Calling instance methods
// //     car1.startEngine();  // Output: The 2022 Toyota Camry's engine is now running.
// //     car2.stopEngine();   // Output: The 2023 Honda Accord's engine is now stopped.

// //     // Displaying information about the cars
// //     car1.displayInfo();  // Output: 2022 Toyota Camry, Fuel Type: Petrol
// //     car2.displayInfo();  // Output: 2024 Honda Accord, Fuel Type: Petrol

// //     return 0;
// // }


