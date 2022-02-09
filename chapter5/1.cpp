#include <iostream>

class Parralelepiped {
public:
  Parralelepiped(
    const double width,
    const double height,
    const double depth):
  width_(width),
  height_(height),
  depth_(depth) {
    std::cout << __func__ << std::endl;
  }
  double get_volume() const {
    return width_ * height_ * depth_;
  }

  void show_parameters() {
    std::cout << "Width is " << width_ << std::endl;
    std::cout << "Height is " << height_ << std::endl;
    std::cout << "Depth is " << depth_ << std::endl;
  }
  
private:
  double width_{0};
  double height_{0};
  double depth_{0};
};

class ParalelepipedExtended : public Parralelepiped {
public:
  ParalelepipedExtended(
    const double width,
    const double height,
    const double depth,
    const double mass): 
    Parralelepiped(width, height, depth),
    mass_(mass) {
      std::cout << __func__ << std::endl;
    }
    void show_mass() const {
      std::cout << mass_ << std::endl;
    }

    double get_density() const {
      return mass_ / get_volume();
    }

    ParalelepipedExtended& operator -=(const double mass) {
      mass_ -= mass;
    }
private:
  double mass_{0};
};

int main() {
  Parralelepiped parralelepiped(10, 20, 30);
  parralelepiped.show_parameters();
  std::cout << "Volume is " << parralelepiped.get_volume() << std::endl;

  ParalelepipedExtended paralelepiped_extended(40, 50, 60, 70);
  paralelepiped_extended.show_parameters();
  std::cout << "Density is " << paralelepiped_extended.get_density() << std::endl;

  paralelepiped_extended -= 2.0;
  paralelepiped_extended.show_mass();
  return 0;
}