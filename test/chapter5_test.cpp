/**
 * @file chapter5_test.cpp
 * @author Anatoly Kabakov <anatoly.kabakov@mail.ru>
 * @brief Tests for tasks from chapter5.
 * @date 2022-02-25
 */
#include <gtest/gtest.h>
#include "chapter5/complex_number.h"
#include "chapter5/parallelepiped.h"
#include "chapter5/vector.h"

TEST(Task1, ParallelepipedParametersTest) {
  using chapter5::task1::Parallelepiped;
  Parallelepiped parallelepiped(10.0, 20.0, 30.0);
  EXPECT_DOUBLE_EQ(10.0, parallelepiped.get_width());
  EXPECT_DOUBLE_EQ(20.0, parallelepiped.get_height());
  EXPECT_DOUBLE_EQ(30.0, parallelepiped.get_depth());
  EXPECT_DOUBLE_EQ(6000.0, parallelepiped.get_volume());
}

TEST(Task1, ParallelepipedExtendedParametersTest) {
  using chapter5::task1::ParallelepipedExtended;
  ParallelepipedExtended parallelepiped_extended(40.0, 50.0, 60.0, 70.0);
  EXPECT_DOUBLE_EQ(40.0, parallelepiped_extended.get_width());
  EXPECT_DOUBLE_EQ(50.0, parallelepiped_extended.get_height());
  EXPECT_DOUBLE_EQ(60.0, parallelepiped_extended.get_depth());
  EXPECT_DOUBLE_EQ(70.0, parallelepiped_extended.get_mass());
  EXPECT_NEAR(0.000583333, parallelepiped_extended.get_density(), 1e-4);
}

TEST(Task1, ParallelepipedExtendedOperatorsTest) {
  using chapter5::task1::ParallelepipedExtended;
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

TEST(Task2, ComplexNumberTest) {
  using chapter5::task2::ComplexNumber;
  auto a = ComplexNumber(1, -3);
  EXPECT_DOUBLE_EQ(1, a.get_real());
  EXPECT_DOUBLE_EQ(-3, a.get_immediance());
  auto b = ComplexNumber(1, 3);
  EXPECT_DOUBLE_EQ(1, b.get_real());
  EXPECT_DOUBLE_EQ(3, b.get_immediance());

  const auto addition = a + b;
  EXPECT_DOUBLE_EQ(2, addition.get_real());
  EXPECT_DOUBLE_EQ(0, addition.get_immediance());

  const auto substruction = a - b;
  EXPECT_DOUBLE_EQ(0, substruction.get_real());
  EXPECT_DOUBLE_EQ(-6, substruction.get_immediance());

  const auto multiplication = a * b;
  EXPECT_DOUBLE_EQ(10, multiplication.get_real());
  EXPECT_DOUBLE_EQ(0, multiplication.get_immediance());

  const auto division = a * b;
  EXPECT_DOUBLE_EQ(10, division.get_real());
  EXPECT_DOUBLE_EQ(0, division.get_immediance());
}

TEST(Task2, ComplexNumberTrigonometricFormTest) {
  using chapter5::task2::ComplexNumberTrigonometricForm;
  ComplexNumberTrigonometricForm number(1, 3);
  EXPECT_DOUBLE_EQ(1, number.get_real());
  EXPECT_DOUBLE_EQ(3, number.get_immediance());
  EXPECT_DOUBLE_EQ(0, number.get_z());
}

TEST(Task3, Vector2dTest) {
  using chapter5::task3::Vector2d;
  Vector2d a(10.0, 20.0);
  Vector2d b(10.0, 20.0);
  EXPECT_DOUBLE_EQ(10.0, a.get_x());
  EXPECT_DOUBLE_EQ(20.0, a.get_y());
  EXPECT_DOUBLE_EQ(10.0, b.get_x());
  EXPECT_DOUBLE_EQ(20.0, b.get_y());
  auto addition = a + b;
  EXPECT_DOUBLE_EQ(20.0, addition.get_x());
  EXPECT_DOUBLE_EQ(40.0, addition.get_y());
  auto substruction = a.operator-(b);
  EXPECT_DOUBLE_EQ(0.0, substruction.get_x());
  EXPECT_DOUBLE_EQ(0.0, substruction.get_y());
  auto multiply_on_number = a * 2.0;
  EXPECT_DOUBLE_EQ(20.0, multiply_on_number.get_x());
  EXPECT_DOUBLE_EQ(40.0, multiply_on_number.get_y());
  auto division_on_number = a / 2.0;
  EXPECT_DOUBLE_EQ(5.0, division_on_number.get_x());
  EXPECT_DOUBLE_EQ(10.0, division_on_number.get_y());
}

TEST(Task3, Vector3dTest) {
  using chapter5::task3::Vector3d;
  Vector3d a(10.0, 20.0, 30.0);
  Vector3d b(10.0, 20.0, 30.0);
  EXPECT_DOUBLE_EQ(10.0, a.get_x());
  EXPECT_DOUBLE_EQ(20.0, a.get_y());
  EXPECT_DOUBLE_EQ(30.0, a.get_z());
  EXPECT_DOUBLE_EQ(10.0, b.get_x());
  EXPECT_DOUBLE_EQ(20.0, b.get_y());
  EXPECT_DOUBLE_EQ(30.0, b.get_z());
  auto addition = a + b;
  auto substruction = a - b;
  auto multiply_on_number = a * 2.0;
  auto division_on_number = a / 2.0;
}
