#include <iostream>
#include <vector>

struct MarkupPoint {
  double x = 0.0;
  double y = 0.0;
  double z = 0.0;

  explicit MarkupPoint(const double x_m, const double y_m, const double z_m) {
    x = x_m;
    y = y_m;
    z = z_m;
  }
};

int main()
{
    std::vector<MarkupPoint> line;
    line.emplace_back(1,2,3);
    MarkupPoint p(1,3,4);
    std::cout << line.begin()->x << std::endl;
    std::cout << p.x << std::endl;
    return 0;
}
