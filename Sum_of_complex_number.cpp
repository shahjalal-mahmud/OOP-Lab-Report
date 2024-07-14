/*
Write a class for complex number and calculate
sum of 2 complex number using + operator overloading.
*/

#include <iostream>
using namespace std;

class Complex
{
protected:
    int real;
    int img;

public:
    Complex() : real(0), img(0) {}
    Complex(int r, int im) : real(r), img(im) {}

    void display() const
    {
        cout << real << " + " << img << "i" << endl;
    }

    // Overload the + operator
    friend Complex operator+(const Complex &c1, const Complex &c2);
};

Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    cout << "Name: Md Shahajalal Mahmud" << endl
         << "ID: 1539" << endl;

    Complex C1(5, 4);
    Complex C2(8, 2);
    Complex C3;

    C3 = C1 + C2;

    cout<<"C1 = ";
    C1.display();

    cout<<"C2 = ";
    C2.display();

    cout<<"C3 = C1 + C2 = ";
    C3.display();

    return 0;
}
