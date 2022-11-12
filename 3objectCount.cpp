// 4. Create a class for counting the objects created and destroyed
// within various block using constructors and destructors.


#include <iostream>
#include <stdio.h>
using namespace std;

class Counting
{

public :

 static int created;
 static int destroyed;

public:
	Counting()
	{
		created++;
	};
	~Counting()
	{
		destroyed++;
	};

	/* data */
};

int Counting::created = 0 ;
int Counting::destroyed = 0 ;


int main()
{
	Counting count1;
	Counting count2;
	Counting count3;
	Counting count4;

	cout << "Numbers of object created: " ;
	cout << count2.created;
	cout << endl;


	count1.~Counting();

	cout << "Numbers of object destroyed: " ;
	cout << count2.destroyed;
	cout << endl;


}
