/**
 * @brief Chapter 5, task 1.
 * @details Write the program, which creates the class to describe a physical
 * object the parallelepiped. Class has three parameters: width, depth and height,
 * as well as method for calculate volume(it is a multiply parameters of
 * paralelepiped). Provide for the presense the constructor and method to show
 * characteristics of parallelepiped. Consider the mechanism of inheritance, by
 * creating derivate class with additional field, which describing the mass of
 * parallelepiped.
 * In derived class, add method for calculate density of matherial, from which
 * parallelepiped is maded. (mass must be devided on volume)
 */
#pragma once
#include <iostream>

class Parralelepiped {
 public:
  Parralelepiped(const double width, const double height, const double depth)
      : width_(width), height_(height), depth_(depth) {
    std::cout << __func__ << std::endl;
  }
  double get_volume() const { return width_ * height_ * depth_; }

  double get_width() const { return width_; }

  double get_height() const { return height_; }

  double get_depth() const { return depth_; }

  void show_parameters() {
    std::cout << "Width is " << width_ << std::endl;
    std::cout << "Height is " << height_ << std::endl;
    std::cout << "Depth is " << depth_ << std::endl;
  }

 protected:
  double width_{0};
  double height_{0};
  double depth_{0};
};

class ParalelepipedExtended : public Parralelepiped {
 public:
  ParalelepipedExtended(const double width, const double height, const double depth,
                        const double mass)
      : Parralelepiped(width, height, depth), mass_(mass) {
    std::cout << __func__ << std::endl;
  }
  void show_mass() const { std::cout << mass_ << std::endl; }

  double get_density() const { return mass_ / get_volume(); }

  double get_mass() const { return mass_; }

  ParalelepipedExtended& operator-=(const double mass) { mass_ -= mass; }

  ParalelepipedExtended operator+(const ParalelepipedExtended& obj) {
    ParalelepipedExtended tmp(width_ + obj.get_width(), height_ + obj.get_height(),
                              depth_ + obj.get_depth(), mass_ + obj.get_mass());
    return tmp;
  }

 private:
  double mass_{0};
};