#include <iostream>
#include <memory>

// template <template T>
// struct Fib;

template <int N>
struct Fib
{
  static constexpr int value = Fib<N - 1>::value + Fib<N - 2>::value;
};

template <>
struct Fib<1>
{
  static constexpr int value = 1;
};

template <>
struct Fib<0>
{
  static constexpr int value = 0;
};

template <typename T>
class Base
{
public:
  void show()
  {
    static_cast<T *>(this)->show_impl();
  }

private:
  friend T;
  Base(){};
};

class Derived1 : public Base<Derived1>
{
public:
  void show_impl()
  {
    // TODO:
    std::cout << "From Derived1" << std::endl;
  }
};

class Derived2 : public Base<Derived2>
{
public:
  void show_impl()
  {
    std::cout << "From Derived2" << std::endl;
  }
};

template <typename T>
void test(const std::shared_ptr<Base<T>> &obj)
{
  obj->show();
}

int main(int argc, char **argv)
{
  std::shared_ptr<Base<Derived2>> ptr = std::make_shared<Derived2>();
  // const auto p = ptr.get();
  test(ptr);
  constexpr int val = Fib<10>::value;
  return EXIT_SUCCESS;
}