#include<iostream>
using namespace std;

template <typename A, typename U>    //class & typename it represent a data type    A -> retun type
A add(A a, U b){
    return a + b;
} 

int main(){
    cout << add(2, 3) << endl; // int
    cout << add(2.5, 3.3) << endl; // float
    cout << add(2.3, 3) << endl;  // int + float
}