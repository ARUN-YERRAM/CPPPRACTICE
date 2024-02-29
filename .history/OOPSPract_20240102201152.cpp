#include<iostream>
using namespace std;
class student{
    public:
        string name;
        int age;
        int weight;
        string city;

        void setname(){
            name = "Arjun";
        }
        void setage(){
            age = 2000000;
        }

    };

int main() {
    student s1;
    // s1.name = "ARUN";
    // s1.age = 19;
    // s1.weight = 57;
    // s1.city = "Hyderabad";

    // cout<<s1.name<<" "<<s1.age<<" "<<s1.weight<<" "<<s1.city<<endl;

    s1.setname();
    s1.setage();
    cout<<s1.name<<" "<<s1.age<<endl;

    return 0;
}