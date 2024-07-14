/*
Write a class for rational number (p/q) with overloading + and << operator.
*/

#include <iostream>
using namespace std;

class Rational {
private:
    int numerator;
    int denominator;

public:
    Rational() : numerator(0), denominator(1) {}
    Rational(int n, int d) : numerator(n), denominator(d) {}

    // Overload + operator
    Rational operator+(const Rational& x) const {
        Rational temp;
        temp.numerator = numerator * x.denominator + x.numerator * denominator;
        temp.denominator = denominator * x.denominator;
        return temp;
    }

    // Overload << operator for easy output
    friend ostream& operator<<(ostream& os, const Rational& r) {
        os << r.numerator << "/" << r.denominator;
        return os;
    }
};

int main() {
    Rational r1(1, 2);
    Rational r2(3, 4);

    Rational r3 = r1 + r2;

    cout << "r1 = " << r1 << endl;
    cout << "r2 = " << r2 << endl;
    cout << "r1 + r2 = " << r3 << endl;

    return 0;
}
