#include <iostream>
using namespace std;

class Numbers
{
public:
    Numbers() {}

    int add(int a, int b, int c)
    {
        int sum=a + b + c ;
        return sum;
    }
    int add(int d, int e)
    {
        int sum= d + e ;
        return sum;
    }

    int checkevenodd(int n)
    {
        if (n % 2 == 0)
        {

            cout << n << " :Even Number" << endl;
            return 1;
        }

        else
        {
            cout << n << " :Odd Number" << endl;
            return 0;
        }
    }
    int checkPalindrome(int n)
    {
        int temp = n, rev_num = 0;

        while (temp != 0)
        {
            rev_num = rev_num * 10 + temp % 10;
            temp /= 10;
        }
        if (rev_num == n)
        {
            cout << n << " is a Palindrome" << endl;
            return 1;
        }
        else
        {
            cout << n << " is not a Palindrome" << endl;
            return 0;
        }
    }

    void swap(int *a, int *b)
    {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
};

int main()
{
    Numbers a; // creating an object with Numbers Class

    int check;

    cout << "Calling Add Functions"<< endl;

    int sum1=a.add(1, 4, 5);
    cout<<"Addition gives: " << sum1<< endl;

    int sum2= a.add(21, 92);
    cout<<"Addition gives: " << sum2<< endl;

    cout << "Calling Sum Even/Odd Check Functions" << endl
         << endl;
    check = a.checkevenodd(sum1);
    cout << check << endl;
    check = a.checkevenodd(sum2);
    cout << check << endl;

    cout << "Calling Palindrome Check Function" << endl
         << endl;
    check = a.checkPalindrome(1221);
    cout << check << endl;

    check = a.checkPalindrome(122);
    cout << check << endl;

    cout << "Calling Swap Function" << endl
         << endl;
    int n1 = 10, n2 = 12;
    cout << "n1=" << n1 << endl;
    cout << "n2=" << n2 << endl;

    a.swap(&n1, &n2);
    cout << "After Swap is Called:" << endl;
    cout << "n1=" << n1 << endl;
    cout << "n2=" << n2 << endl;

    return 0;
}