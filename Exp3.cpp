// To find the factorial
// To find the roots of a quadratic equation
// To check the leap year
// To find the matrix multiplication.

#include <iostream>
#include <cmath>

using namespace std;

class FactorialNumber
{
public:
    FactorialNumber() {}

    int findFactorial(int n)
    {
        if (n == 0)
            return 1;
        else
            return (n * findFactorial(n - 1));
    }
};

class Roots
{
public:
    Roots() {}

    void FindRoots(float a, float b, float c)
    {
        float d = b * b - 4 * a * c;
        if (d == 0)
        {
            cout << "The Root is :" << -b / 2 << endl;
        }
        else if (d > 0)
        {
            cout << " The Roots are:" << endl;
            cout << (sqrt(d) - b) / 2 << " and ";
            cout << (-sqrt(d) - b) / 2 << endl;
        }

        else
        {
            cout << " The Roots are:" << endl;
            d = -d;
            cout << -b / 2 << "+" << sqrt(d) / 2 << "i"
                 << " and ";
            cout << -b / 2 << "-" << sqrt(d) / 2 << "i" << endl;
        }
    }
};

class checkLeap
{
public:
    void leapCheck(int n)
    {
        if (n % 4 == 0)
            cout << n << " is a Leap year" << endl;
        else
            cout << n << " is not a Leap year" << endl;
    }
};

int main()
{

    FactorialNumber obj;
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    int f = obj.findFactorial(n);
    cout << "The Factorial of " << n << "is :" << f << endl;

    Roots root;
    float a, b, c;
    cout << "Enter the values of Coefficients" << endl;
    cin >> a >> b >> c;
    root.FindRoots(a, b, c);

    checkLeap obj1;
    int year;
    cout << "Enter the year" << endl;
    cin >> year;
    obj1.leapCheck(year);

    return 0;
}
