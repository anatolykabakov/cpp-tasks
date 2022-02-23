/**
 * @brief Chapter 5, task 3.
 * @details Write the program with class
 * for implement vectors in 2d space.
 * Class has two parameters(coortinates of vector).
 * Class must be provide basic operations with
 * vectors(addition, substraction, multiply, division).
 * Create derived class for implementing vectors in 3d space.
 */
#pragma once
#include <iostream>

class Vector2d {
 public:
  explicit Vector2d(const double x, const double y) : x_(x), y_(y) {}

  void print() { std::cout << x_ << " " << y_ << std::endl; }

  Vector2d operator+(const Vector2d& obj) {
    const int x = x_ + obj.x_;
    const int y = y_ + obj.y_;
    return Vector2d(x, y);
  }

  Vector2d operator-(const Vector2d& obj) {
    int x = x_ - obj.x_;
    int y = y_ - obj.y_;
    return Vector2d(x, y);
  }

  Vector2d operator*(const double number) {
    const int x = x_ * number;
    const int y = y_ * number;
    return Vector2d(x, y);
  }

  Vector2d operator/(const double number) {
    if (number == 0) {
      return Vector2d(0, 0);
    }
    const int x = x_ / number;
    const int y = y_ / number;
    return Vector2d(x, y);
  }

  double get_x() const { return x_; }

  double get_y() const { return y_; }

 protected:
  double x_{0};
  double y_{0};
};

int operator-(Vector2d& vect1, Vector2d& vect2) {
  auto x = vect1.get_x() - vect2.get_x();
  auto y = vect1.get_y() + vect2.get_y();
  return x + y;
}

class Vector3d : protected Vector2d {
 public:
  explicit Vector3d(const double x, const double y, const double z)
      : Vector2d(x, y), z_(z) {}

  void print() { std::cout << x_ << " " << y_ << " " << z_ << std::endl; }

  Vector3d operator+(const Vector3d& obj) {
    const int x = x_ + obj.x_;
    const int y = y_ + obj.y_;
    const int z = z_ + obj.z_;
    return Vector3d(x, y, z);
  }

  Vector3d operator-(const Vector3d& obj) {
    int x = x_ - obj.x_;
    int y = y_ - obj.y_;
    int z = z_ - obj.z_;
    return Vector3d(x, y, z);
  }

  Vector3d operator*(const double number) {
    const int x = x_ * number;
    const int y = y_ * number;
    const int z = z_ * number;
    return Vector3d(x, y, z);
  }

  Vector3d operator/(const double number) {
    if (number == 0) {
      return Vector3d(0, 0, 0);
    }
    const int x = x_ / number;
    const int y = y_ / number;
    const int z = z_ / number;
    return Vector3d(x, y, z);
  }

 protected:
  double z_{0};
};

int main() {
  Vector2d vector(10.0, 20.0);
  Vector2d vector2(10.0, 20.0);
  auto v3 = vector + vector2;
  v3.print();
  auto v4 = vector.operator-(vector2);
  v4.print();
  auto v5 = vector * 2.0;
  v5.print();
  auto v6 = vector / 2.0;
  v6.print();

  Vector3d vector3d(10.0, 20.0, 30.0);
  Vector3d vector3d_2(10.0, 20.0, 30.0);
  auto v7 = vector3d + vector3d_2;
  v7.print();
  auto v8 = vector3d - vector3d_2;
  v8.print();
  auto v9 = vector3d * 2.0;
  v9.print();
  auto v10 = vector3d / 2.0;
  v10.print();
  return 0;
}
