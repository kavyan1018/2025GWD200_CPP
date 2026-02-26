// Student -> structure -> roll no, name , marks, id


// Header File
#include<iostream>

// Standard namespace
using namespace std;


// Declar the Structure 
struct Student
{
    // data types

    int roll_no;
    string name;
    float marks;
    int id;
};


// main function 

int main()
{

    // define the stru

    struct Student s;

    cout << "Enter the Roll Number :";
    cin >> s.roll_no;    
    
    cout << "Enter the Name :";
    cin >> s.name;    
    
    cout << "Enter the Marks :";
    cin >> s.marks;
    
    cout << "Enter the Id :";
    cin >> s.id;



    cout << "---------------------------------" << endl;
    cout << "Your Roll Number is :" << s.roll_no << endl;
    cout << "Your Name is :" << s.name << endl;
    cout << "Your Marks are :" << s.marks << endl;
    cout << "Your Id is :" << s.id << endl;
}