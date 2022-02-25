/**
 * @file chapter5_test.cpp
 * @author Anatoly Kabakov <anatoly.kabakov@mail.ru>
 * @brief Tests for tasks from chapter5.
 * @date 2022-02-25
 */
#include <gtest/gtest.h>
#include "chapter5/task1.h"

using namespace chapter5::task1;

TEST(Task1, ParallelepipedParametersTest) {
  Parallelepiped parallelepiped(10.0, 20.0, 30.0);
  std::cout << "Volume is " << parallelepiped.get_volume() << std::endl;
  EXPECT_DOUBLE_EQ(10.0, parallelepiped.get_width());
  EXPECT_DOUBLE_EQ(20.0, parallelepiped.get_height());
  EXPECT_DOUBLE_EQ(30.0, parallelepiped.get_depth());
  EXPECT_DOUBLE_EQ(6000.0, parallelepiped.get_volume());
}

TEST(Task1, ParallelepipedExtendedParametersTest) {
  ParallelepipedExtended parallelepiped_extended(40.0, 50.0, 60.0, 70.0);
  EXPECT_DOUBLE_EQ(40.0, parallelepiped_extended.get_width());
  EXPECT_DOUBLE_EQ(50.0, parallelepiped_extended.get_height());
  EXPECT_DOUBLE_EQ(60.0, parallelepiped_extended.get_depth());
  EXPECT_DOUBLE_EQ(70.0, parallelepiped_extended.get_mass());
  EXPECT_NEAR(0.000583333, parallelepiped_extended.get_density(), 1e-4);
}

TEST(Task1, ParallelepipedExtendedOperatorsTest) {
  ParallelepipedExtended parallelepiped(40.0, 50.0, 60.0, 70.0);
  parallelepiped -= 2.0;
  EXPECT_DOUBLE_EQ(68.0, parallelepiped.get_mass());

  ParallelepipedExtended parallelepiped2(40, 50, 60, 70);
  auto parallelepiped_result = parallelepiped + parallelepiped2;
  EXPECT_DOUBLE_EQ(80.0, parallelepiped_result.get_width());
  EXPECT_DOUBLE_EQ(100.0, parallelepiped_result.get_height());
  EXPECT_DOUBLE_EQ(120.0, parallelepiped_result.get_depth());
  EXPECT_DOUBLE_EQ(138.0, parallelepiped_result.get_mass());
}
