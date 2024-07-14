/*
Write a class Rectangle and use constructor,
functions for calculating and parameter.
*/

#include <iostream>
using namespace std;
class Rec
{
private:
    int length;
    int breath;

public:
    Rec() : length(0), breath(0) {}             // default constructor
    Rec(int l, int b) : length(l), breath(b) {} // parameterized constructor
    int getlength()
    {
        return length;
    }
    int getbreath()
    {
        return breath;
    }
    void area()
    {
        cout << "Area: " << length * breath << endl;
    }
    void parameter()
    {
        cout << "Parameter: " << (2 * (length + breath)) << endl;
    }
};
int main()
{
    cout << "Name: Md Shahajalal Mahmud" << endl
         << "ID: 1539" << endl;

    int length, breath;
    cout << "Enter value for length and breath: ";
    cin >> length >> breath;

    Rec R1(length, breath);
    R1.area();
    R1.parameter();
    return 0;
}