/*
Chapter 5, task 5.
Description: Write the program with class for describe a situation, 
when deposit contain two part. Placement times of deposit are same 
for both parts, but percentage rate for each patt is different.
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

class Money {
public:
  
  Money(char * name,
        double money,
        double rate,
        unsigned int time):
        name_( new char[std::strlen(name) + 1]),
        money_(money),
        rate_(rate),
        time_(time)
         {
           std::strcpy(name_, name);
           std::cout << __func__ << std::endl;
  }

  ~Money() {
    delete [] name_;
    std::cout << __func__ << std::endl;
  }

  Money(const Money &money):
    name_( new char[std::strlen(money.name_) + 1]),
    money_(money.money_),
    rate_(money.rate_),
    time_(money.time_) {
      std::cout << "Money(const Money &money)" << std::endl;
      std::strcpy(name_, money.name_);
  }

  Money& operator=(const Money &money) {
    std::cout << "Money& operator=(const Money &money)" << std::endl;
    if (this != &money) {
      Money copy(money);
      std::swap(*this, copy);
    }
    return *this;
  }

  Money (Money &&money) {
    std::cout << "Money (Money &&money)" << std::endl;
    name_ = new char[std::strlen(money.name_) + 1];
    rate_ = money.rate_;
    time_ = money.time_;
    std::strcpy(name_, money.name_);
    money.name_ = nullptr;
    money.rate_ = 0;
  }

  Money& operator=(Money &&money) {
    std::cout << "Money& operator=(Money &&money)" << std::endl;
    std::swap(name_, money.name_);
    return *this;
  }

  double get_money() const {
    return money_;
  }

  double get_rate() const {
    return rate_;
  }

  unsigned int get_time() const {
    return time_;
  }

  char * get_name() {
    return name_;
  }

private:
  char * name_;
  double money_;
  double rate_;
  unsigned int time_;

};

void by_reference(Money &money) {
}

void by_value(Money money) {
}

int main() {
  Money my_money = Money("anatoly", 100, 10, 12);
  Money p1 = my_money;
  Money p2(my_money);
  by_value(std::move(p2));
  by_reference(p2);
  auto p3 = std::move(my_money);
  return 0;
}