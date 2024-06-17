#include<bits/stdc++.h>
using namespace std;

class Teacher{
    public:
        string name;
        int age;
        string subject;
        string dept;

        Teacher(){
            name = "Ram";
            age = 25;
            subject = "Maths";
            dept = "DS";
        }

        Teacher(string name,string subject){
            this->name = name;
            this->subject = subject;
        }

        ~Teacher(){
            cout<<"Object destroyed"<<endl;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }

        void setSub(string sub){
            this->subject = sub;
        }

        string setSub(){
            return subject;
        }

        void getInfo(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<dept<<endl;
            cout<<subject<<endl;
        }
};

class Person{

    public:
        string name;
        int age;

        Person(string name,int age){
            this->name = name;
            this->age = age;
        }
};

class Student:public Person{
    
int main(){
    Teacher t1;
    // t1.name = "Ram";
    // t1.age = 25;
    // t1.subject = "Maths";
    // t1.dept = "DS";
    t1.getInfo();

    t1.setName("Shyam");

// Inheritance


}