/**
 * @brief Chapter 5, task 2.
 * @details Write the program with class for realization complex number.
 * Class has two parameters(real and immediate part of complex number).
 * Describe for class operator functions and methods, allowing to perform
 * operations with complex_numberect of class.
 * Create derived class, in which implement complex number in trigonometric form.
 */
#pragma once
#include <cmath>
#include <iostream>

namespace chapter5::task2 {
/**
 * @brief ComplexNumber class describe complex number,
 * and basic operations with complex numbers.
 *
 */
class ComplexNumber {
 public:
  /**
   * @brief Construct a new Complex Number complex_numberect
   *
   * @param x The real part of complex number.
   * @param y The immediance part of complex number.
   */
  ComplexNumber(const int x, const int y) : x_(x), y_(y) {}
  /**
   * @brief Get the real part of complex number.
   *
   * @return double real part of complex number.
   */
  double get_real() const { return x_; }
  /**
   * @brief Get the immediance part of complex number.
   *
   * @return double immediance part of complex number.
   */
  double get_immediance() const { return y_; }
  /**
   * @brief Addition two complex numbers.
   *
   * @param complex_number The comlex number on the right.
   * @return ComplexNumber
   */
  ComplexNumber operator+(const ComplexNumber& complex_number) {
    return ComplexNumber(x_ + complex_number.get_real(),
                         y_ + complex_number.get_immediance());
  }
  /**
   * @brief Substruction two complex numbers.
   *
   * @param complex_number The comlex number on the right.
   * @return ComplexNumber
   */
  ComplexNumber operator-(const ComplexNumber& complex_number) {
    return ComplexNumber(x_ - complex_number.get_real(),
                         y_ - complex_number.get_immediance());
  }
  /**
   * @brief Multiply two complex numbers.
   *
   * @param complex_number The comlex number on the right.
   * @return ComplexNumber
   */
  ComplexNumber operator*(const ComplexNumber& complex_number) {
    const double x =
        x_ * complex_number.get_real() - y_ * complex_number.get_immediance();
    const double y =
        x_ * complex_number.get_immediance() + y_ * complex_number.get_real();
    return ComplexNumber(x, y);
  }
  /**
   * @brief Division two complex numbers.
   *
   * @param complex_number The comlex number on the right.
   * @return ComplexNumber
   */
  ComplexNumber operator/(const ComplexNumber& complex_number) {
    const double re =
        ((x_ * complex_number.get_real()) + (y_ * complex_number.get_immediance())) /
        (std::pow(complex_number.get_real(), 2) +
         std::pow(complex_number.get_immediance(), 2));
    const double im =
        ((complex_number.get_real() * y_) - (x_ * complex_number.get_immediance())) /
        (std::pow(complex_number.get_real(), 2) +
         std::pow(complex_number.get_immediance(), 2));
    return ComplexNumber(re, im);
  }
  /**
   * @brief Print ComplexNumber to console.
   *
   * @param complex_number The comlex number on the right.
   * @param os std::ostream&
   * @return ComplexNumber
   */
  friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& number);

 protected:
  /**
   * @brief The real part of complex number.
   *
   */
  int x_{0};
  /**
   * @brief The immediance part of complex number.
   *
   */
  int y_{0};
};

std::ostream& operator<<(std::ostream& os, const ComplexNumber& complex_number) {
  os << complex_number.x_ << (complex_number.y_ >= 0 ? "+" : "") << complex_number.y_
     << "i\n";
  return os;
}

/**
 * @brief This class describe the complex number in trigonometric form and operations with
 * it.
 *
 */
class ComplexNumberTrigonometricForm : public ComplexNumber {
 public:
  ComplexNumberTrigonometricForm(const int x, const int y) : ComplexNumber(x, y) {
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

}  // namespace chapter5::task2
