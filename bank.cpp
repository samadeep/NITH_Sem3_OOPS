// 7. Write a C++ program to count the number of persons inside a bank, by increasing count whenever a person
// enters a bank , using an increment (++) operator overloading function, and decrease the count whenever a person
// leaves the bank, using a decrement (--) operator overloading function inside the class.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class BANK
{
	public:
	int count;

	public:
	BANK()
	{
		count=0;
	}
		void operator ++()
		{
			count++;
			
		};
		void operator --()
		{
			count--;
			
		};
};


int main()
{
	BANK number_of_persons;
	char choice;
	while (1)
	{
		cout << "Enter your choice : 1. Enters ( E ) 2. Leaves ( L ) 3. Exit( X ) 4. Print (P) ." << endl;

		cin >> choice;

		switch (choice)
		{
		case 'E':
			++number_of_persons;
			cout << "Total number of person in bank is: ";
			cout << number_of_persons.count;
			cout << endl;
			break;
		case 'L':
			if (number_of_persons.count == 0)
			{
				cout << "No Person is left" << endl;
				break;
			}

			--number_of_persons;
			cout << "Total number of person in bank is: ";
			cout << number_of_persons.count;
			cout << endl;
			break;
		case 'P':
			cout << "Total number of person in bank is: ";
			cout << number_of_persons.count;
			cout << endl;
			break;

		case 'X':
			exit(EXIT_SUCCESS);
		default:
			cout << "Enter a correct choice." << endl;
			break;
		}
	}
	return 0;
}
