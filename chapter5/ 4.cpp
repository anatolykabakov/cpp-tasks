/*
Chapter 5, task 4.
Description: Write the program with class for describe vehicle.
Class vehicle has parameters: model, color, volume of fuel storage in litres.
Provide method allow calculate the distance which drive the vehicle,
using up a full fuel storage (Calculates as multiply on 100 relation volume
fuel storage to the norm consumption gasoline).

Based on the Vehicle class, create derived class the truck vehicle.
Addind parameter, describe carrying capacity (The max weight of cargo,
that can be carried the vehicle). and the method that allow calculate
cost price of tranportation the one tonn of cargo on one kilometr.

The result of method is calculate as: norm consumption gasoline devided on 100,
multiply on fuel price, and devided on carrying capacity.
The price of fuel pass by argument into method.

Consider using operator methods and funcs.
*/
#include <iostream>

class Vehicle
{
public:
  Vehicle() = delete;
  Vehicle(const std::string &model, const std::string &color, const double fuel_tank_volume, const double norm_consumption_gasoline) : model_(model), color_(color), fuel_tank_volume_(fuel_tank_volume),
                                                                                                                                       norm_consumption_gasoline_(norm_consumption_gasoline)
  {
    std::cout << __func__ << std::endl;
  }

  void print_distance_traveled()
  {
    const auto distance_traveled = (fuel_tank_volume_ / norm_consumption_gasoline_) * 100;
    std::cout << "Distance taveled " << distance_traveled << std::endl;
  }

protected:
  std::string model_;
  std::string color_;
  double fuel_tank_volume_;
  double norm_consumption_gasoline_;
};

class Truck : public Vehicle
{
public:
  Truck(
      const std::string &model,
      const std::string &color,
      double fuel_tank_volume,
      double norm_consumption_gasoline,
      double carrying_capacity) : Vehicle(model, color, fuel_tank_volume, norm_consumption_gasoline),
                                  carrying_capacity_(carrying_capacity) {}

  void calculate_cost_price_of_transportation(const double fuel_price)
  {
    const auto cost_price = (norm_consumption_gasoline_ / 100) * fuel_price;
    std::cout << "Cost price of transportation is " << cost_price << std::endl;
  }

  void operator+(const int carrying_capacity)
  {
    carrying_capacity_ += carrying_capacity;
    std::cout << carrying_capacity_;
  }

private:
  double carrying_capacity_;
};

int main()
{
  Vehicle tesla("tesla", "white", 100, 10);
  tesla.print_distance_traveled();

  Truck truck("Truck", "black", 100, 10, 10);
  truck.calculate_cost_price_of_transportation(10);
  truck + 2;
  return 0;
}