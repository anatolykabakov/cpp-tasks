/*
Chapter 5, task 2.
Description: Write th eprogram with class for realization complex number.
Class has two parameters(real and immediate part of complex number).
Describe for class operator functions and methods, allowing to perform
operations with object of class. 
Create derived class, in which implement complex number in trigonometric form.
*/

#include <iostream>
#include <cmath>

class ComplexNumber {
public:
  ComplexNumber(const int x, const int y):
  x_(x), y_(y) {}
  
  double get_real() const {
    return x_;
  }

  double get_immediance() const {
    return y_;
  }

  ComplexNumber operator+(const ComplexNumber& obj) {
    return ComplexNumber(x_ + obj.get_real(), y_ + obj.get_immediance());
  }

  ComplexNumber operator-(const ComplexNumber& obj) {
    return ComplexNumber(x_ - obj.get_real(), y_ - obj.get_immediance());
  }
  
  ComplexNumber operator*(const ComplexNumber& obj) {
    const double x = x_ * obj.get_real() - y_ * obj.get_immediance();
    const double y = x_ * obj.get_immediance() + y_ * obj.get_real();
    return ComplexNumber(x, y);
  }

  ComplexNumber operator/(const ComplexNumber& obj) {
    const double a=((x_ * obj.get_real()) + (y_ * obj.get_immediance())) / (std::pow(obj.get_real(), 2) + std::pow(obj.get_immediance(), 2));
    const double b=((obj.get_real() * y_) - (x_ * obj.get_immediance())) / (std::pow(obj.get_real(), 2) + std::pow(obj.get_immediance(), 2));
    return *this;
  }

  friend std::ostream& operator<<(std::ostream &os, const ComplexNumber &number);

protected:
 int x_{0};
 int y_{0};
};

std::ostream& operator<<(std::ostream &os, const ComplexNumber &obj) {
  os << obj.x_ << (obj.y_ >= 0 ? "+" : "") << obj.y_ << "i\n";
  return os;
}

class ComplexNumberTrigonometricForm : protected ComplexNumber {
public:
  ComplexNumberTrigonometricForm(const int x, const int y): ComplexNumber(x, y) {
    std::cout << __func__ << std::endl;
  }

  int get_z() const {
    const int dist = std::pow(x_, 2) + std::pow(y_, 2);
    const int z_module = std::sqrt(dist);
    const int sin_phi = y_ / dist; 
    const int cos_phi = x_ / dist;
    return 0;
  }

};

int main() {
  auto a = ComplexNumber(1, -3);
  auto b = ComplexNumber(1, 3);
  std::cout << "a = " << a;
  std::cout << "b = " << b;
  std::cout << "Addition a + b = " << (a + b);
  std::cout << "Substruction a - b = " << (a - b);
  std::cout << "Multiplication a * b = " << (a * b);
  std::cout << "Division a / b = " << (a / b);
  
  return EXIT_SUCCESS;
}