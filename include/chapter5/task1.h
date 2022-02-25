/**
 * @date 2022-02-23
 * @file task1.h
 * @author Anatoly Kabakov <anatoly.kabakov@mail.ru>
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
/**
 * @brief Class discribe paralelepiped. Class has three parameters: width, depth and
 * height, as well as method for calculate volume(it is a multiply parameters of
 * paralelepiped).
 *
 */
namespace chapter5::task1 {
class Parallelepiped {
 public:
  /**
   * @brief Construct a new Parallelepiped object
   *
   * @param width Width of paralelepiped. [meters]
   * @param height Height of paralelepiped. [meters]
   * @param depth Depth of paralelepiped. [meters]
   */
  Parallelepiped(const double width, const double height, const double depth)
      : width_(width), height_(height), depth_(depth) {
    std::cout << __func__ << std::endl;
  }
  /**
   * @brief Get the volume of paralelepiped.
   *
   * @return Volume of paralelepiped.
   */
  double get_volume() const { return width_ * height_ * depth_; }
  /**
   * @brief Get the width of paralelepiped.
   *
   * @return Width of paralelepiped. [meters]
   */
  double get_width() const { return width_; }
  /**
   * @brief Get the height of paralelepiped.
   *
   * @return Height of paralelepiped. [meters]
   */
  double get_height() const { return height_; }
  /**
   * @brief Get the depth of paralelepiped.
   *
   * @return Depth of paralelepiped. [meters]
   */
  double get_depth() const { return depth_; }
  /**
   * @brief This method show parameters of paralelepiped in console.
   *
   */
  void show_parameters() {
    std::cout << "Width is " << width_ << std::endl;
    std::cout << "Height is " << height_ << std::endl;
    std::cout << "Depth is " << depth_ << std::endl;
  }

 protected:
  /**
   * @brief Width of paralellelepiped. [meters]
   */
  double width_{0};
  /**
   * @brief Height of paralellelepiped. [meters]
   */
  double height_{0};
  /**
   * @brief Depth of paralellelepiped. [meters]
   */
  double depth_{0};
};
/**
 * @brief Class discribe paralelepiped with mass.
 *
 */
class ParallelepipedExtended : public Parallelepiped {
 public:
  /**
   * @brief Constructor for Paralelepiped Extended object.
   *
   * @param width Width of paralelepiped. [meters]
   * @param height Height of paralelepiped. [meters]
   * @param depth Depth of paralelepiped. [meters]
   * @param mass Mass of paralelepiped. [kilograms]
   */
  ParallelepipedExtended(const double width, const double height, const double depth,
                         const double mass)
      : Parallelepiped(width, height, depth), mass_(mass) {
    std::cout << __func__ << std::endl;
  }
  /**
   * @brief Method for show mass of paralelepiped.
   *
   */
  void show_mass() const { std::cout << mass_ << std::endl; }
  /**
   * @brief Get the density of paralelepiped.
   *
   * @return Density of paralelepiped. [kilogram / meters^3]
   */
  double get_density() const { return mass_ / get_volume(); }
  /**
   * @brief Get the mass of paralelepiped.
   *
   * @return Mass of paralelepiped. [kilograms]
   */
  double get_mass() const { return mass_; }
  /**
   * @brief This operator -= substracts the mass of paralelepiped.
   *
   * @param mass Mass of paralelepiped, which substructed from the mass
   * of the paralelepiped.
   * @return ParallelepipedExtended&
   */
  ParallelepipedExtended& operator-=(const double mass) { mass_ -= mass; }
  /**
   * @brief Adds two ParallelepipedExtended objects, return an object
   * that contains the sum of the parameters of the two paralelepipeds.
   *
   * @param obj Parallelepiped to be added to the this.
   * @return New ParallelepipedExtended object,
   * that contains sum of the paramters of the parallelepipeds.
   */
  ParallelepipedExtended operator+(const ParallelepipedExtended& obj) {
    ParallelepipedExtended tmp(width_ + obj.get_width(), height_ + obj.get_height(),
                               depth_ + obj.get_depth(), mass_ + obj.get_mass());
    return tmp;
  }

 private:
  double mass_{0};
};
}  // namespace chapter5::task1
