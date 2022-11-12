#include<iostream>
#include<math.h>
using namespace std;

class student
{
	int sub1,sub2,sub3;
	char stu_name[100];

	public:
 		void get_data();
		friend float mark_avg(student s);	
		void Display();
};
	

void student::get_data()
{
	cout<<"\nenter name : "<<endl;;
	cin>>stu_name;
	cout<<"\nenter sub1 : "<<endl;
	cin>>sub1;
	cout<<"\nenter sub2 : "<<endl;
	cin>>sub2;
	cout<<"\nenter sub3 : "<<endl;
	cin>>sub3;
}

float mark_avg(student s)
	{
		return float((s.sub1+s.sub2+s.sub3))/float(3);
	}

void student::Display()
	{
		cout<<"\nName of student : "<<stu_name;
		cout<<"\nAverage marks : "<<mark_avg(*this)<<endl;
		
	}

int main()
	{
		student s1,s2;
		s1.get_data();
		s1.Display();

		s2.get_data();
		s2.Display();
		return 0;
	}
