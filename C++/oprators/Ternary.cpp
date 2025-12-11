#include<iostream>

using namespace std;
int main()
{
    int num;
    string res;

    cout << "Enter the Number :";
    cin >> num;

    res = (num >= 0) ? "Positive" : "Negative";
    
    cout << "The Number is : " <<res;

}