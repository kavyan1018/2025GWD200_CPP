// Default Constructor

// header files

#include<iostream>
using namespace std;

class Student{

    public :
        string name;
        int age;

        // Default Constructor

        Student() {
            name = "Ganpat";
            age = 20;
        }
};

int main()
{
    Student s1; // Default Constructor called

    cout << s1.name << endl;
    cout << s1.age << endl;
}