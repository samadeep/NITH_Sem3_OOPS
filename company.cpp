// 8. Write a C++ program to create two objects of a class called company and add their data members using 
// an operator overloaded function for '+' operator and '-' operator.

#include<iostream>
using namespace std;

class company{

int d;

public:
company(){d=0;}
company(int value){
d=value;
}
void getdata()
{
    cout<<"enter value :\n";
    cin>>d;
}
int value(){
return d;
}

company operator + (company x)
{
    return company(d+x.d);//calling the constructor
}


company operator - (company x)
{
    return company(d-x.d);
}



};


int main()
{
company c1,c2,c3;

c2.getdata();
c3.getdata();

c1=c2+c3;
cout<<"sum is : "<<c1.value()<<endl;

c1=c2-c3;
cout<<"difference  is : "<<c1.value()<<endl;

return 0;
}