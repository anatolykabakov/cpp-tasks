#include <iostream>

struct ParalelepipedParams {
  const double width{0};
  const double height{0};
  const double depth{0};

  void show() {
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Depth: " << depth << std::endl;
  }
};

// struct ParalelepipedExtendedParams : public ParalelepipedParams
// {
//   const double mass{0};
//   ParalelepipedExtendedParams(
//     const ParalelepipedParams &params,
//     const double mass): 
//     ParalelepipedParams(params.) {}
// };


class Parralelepiped {
public:
  Parralelepiped(const ParalelepipedParams &params):
  params_(params) {}
  double get_volume() const {
    return params_.width * params_.height * params_.depth;
  }
private:
  ParalelepipedParams params_;
};

int main() {
  ParalelepipedParams params{10,20,30};
  params.show();
  Parralelepiped parralelepiped(params);
  std::cout << "Volume is " << parralelepiped.get_volume() << std::endl;
  return 0;
}