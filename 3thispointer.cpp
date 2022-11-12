// 5. Write a C++ program to create three objects for a class named pntr_obj with data members such as roll_no
// & name. Create a member function set_data() for setting the data values and print() member function to print
// which object has invoked it using this pointer.
#include <iostream>
#include <stdio.h>

using namespace std;

class pntr_obj	
{
	private:
		int roll_no;
		string name;

	public:

		void set_data(int roll_no,string name)
		{
			this->roll_no = roll_no;
			this->name = name ;
		};

		void print()
		{
			cout << "Roll number is: ";
			cout << this->roll_no;
			cout << endl;
			
			cout << "Student name  is: ";
			cout << this->name;
			cout << endl;
			cout << endl;

		};
};


int main()
{
	pntr_obj obj1;
	pntr_obj obj2;
	pntr_obj obj3;

	obj1.set_data(1,"Samadeep");
	obj2.set_data(2,"Jaydeep");
	obj3.set_data(3,"Kunal");


	obj1.print();
	obj2.print();
	obj3.print();
	
}


