/*
Write a class and required functions and method to print
all the prime number in a given range.
*/

#include <iostream>
#include <cmath>
using namespace std;
class Prime
{
private:
    int lowerLimit;
    int upperLimit;

public:
    Prime() : lowerLimit(0), upperLimit(0) {}
    Prime(int l, int u) : lowerLimit(l), upperLimit(u) {}
    bool isPrime(int num)
    {
        if (num <= 1)
        {
            return false;
        }
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    void printPrime()
    {
        for (int i = lowerLimit; i <= upperLimit; i++)
        {
            if (isPrime(i))
            {
                cout << i << " ";
            }
        }
    }
};
int main()
{
    cout << "Name: Md Shahajalal Mahmud" << endl
         << "ID: 1539" << endl;

    int upperlimit, lowerlimit;
    cout << "Enter lower-limit and upper-limit: ";
    cin >> lowerlimit >> upperlimit;

    Prime P1(lowerlimit, upperlimit);
    P1.printPrime();
    return 0;
}