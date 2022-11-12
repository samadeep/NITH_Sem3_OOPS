// 13. WRITE A PROGRAM TO EXPLAIN CLASS TEMPLATE BY CREATING A TEMPLATE T 
// FOR A CLASS NAME PAIR HAVING TWO DATA MEMBERS OF TYPE T WHICH ARE INPUTTED BY
// A CONSTRUCTOR AND A MEMBER FUNCTION GET-MAX() RETURN THE GREATEST OF TWO NUMBER TO MAIN.
#include <iostream>

using namespace std;

template <class T>

class Max
{
	T a,b;

public:

	Max(T x,T y)
	{
		a = x  ;
		b = y  ;

		// cout << a ;
	}

	T get_Max()
	{
		if ( a > b )
		{
			return a;
		}
		return b;
	}
};

int main()
{
	Max<int> integ(15,20);
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout << "Maximum of 15 and 20 from user is : "<< integ.get_Max() << endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	return 0;
}