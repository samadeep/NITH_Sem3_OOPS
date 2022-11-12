#include <iostream>

using namespace std;

class c_polygon {

public:
  virtual void area() { cout << "I am from c_polygon"; };
};

class c_rectangle : public c_polygon {
public:
  void area(int a, int b) {
    cout << "The area of the rectangle is : ";
    cout << a * b << endl;
  };
};

class c_triangle : public c_polygon {
private:
  float s;
  float area_of_trinagle;

public:
  void area(int a, int b) {
    cout << "Area of the Triangle is: ";
    cout << 0.5 * a * b << endl;
  };
};

int main() {
  c_triangle t;
  c_rectangle r;

  t.area(5, 4);
  r.area(2, 3);
}
