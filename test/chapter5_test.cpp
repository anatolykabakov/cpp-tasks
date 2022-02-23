#include <gtest/gtest.h>
#include "chapter5/task1.h"

TEST(TASK1, SimpleTest) {
  Parralelepiped parralelepiped(10, 20, 30);
  parralelepiped.show_parameters();
  std::cout << "Volume is " << parralelepiped.get_volume() << std::endl;

  ParalelepipedExtended paralelepiped_extended(40, 50, 60, 70);
  paralelepiped_extended.show_parameters();
  std::cout << "Density is " << paralelepiped_extended.get_density() << std::endl;

  paralelepiped_extended -= 2.0;
  paralelepiped_extended.show_mass();

  ParalelepipedExtended paralelepiped_extended2(40, 50, 60, 70);
  auto p = paralelepiped_extended + paralelepiped_extended2;
  p.show_parameters();
}
