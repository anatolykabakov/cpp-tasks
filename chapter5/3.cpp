/*
Chapter 5, task 3.
Description: Write the program with class 
for implement vectors in 2d space.
Class has two parameters(coortinates of vector). 
Class must be provide basic operations with 
vectors(addition, substraction, multiply, division).
Create derived class for implementing vectors in 3d space.
*/

#include <iostream>

class Vector2d {
public:
  Vector2d(const double x, const double y) : 
  x_(x), y_(y) {}

  virtual void print() {
    std::cout << x_ << " " << y_ << std::endl;
  }

  Vector2d operator+(const Vector2d& obj) {
    int x = x_ + obj.x_;
    int y = y_ + obj.y_;
    return Vector2d(x, y);
  }

  Vector2d operator-(const Vector2d& obj) {
    int x = x_ - obj.x_;
    int y = y_ - obj.y_;
    return Vector2d(x, y);
  }
  
  Vector2d operator*(const Vector2d& obj) {
    return Vector2d(0,0);
  }

  Vector2d operator/(const Vector2d& obj) {
    return *this;
  }

  double get_x() const {
    return x_;
  }

  double get_y() const {
    return y_;
  }
protected:
  double x_{0};
  double y_{0};
};

int operator-(Vector2d &vect1, Vector2d & vect2) {
  auto x = vect1.get_x() - vect2.get_x(); 
  auto y = vect1.get_y() + vect2.get_y(); 
  return x + y;
}

class Vector3d : protected Vector2d {
public:
  Vector3d(const double x, const double y, const double z) :
  Vector2d(x, y), z_(z) {

  }

  virtual void print() override {
    std::cout << x_ << " " << y_ << " " << z_ << std::endl;
  }

protected:
  double z_{0};
};

int main() {
  Vector2d vector(10, 20);
  Vector2d vector2(10, 20);
  auto v3 = vector + vector2;
  v3.print();
  auto v4 = vector.operator-(vector2);
  // std::cout << v4 ;
  v4.print();

  // Vector3d vector3d(10, 20, 30);
  // vector3d.print(); 

  return 0;
}