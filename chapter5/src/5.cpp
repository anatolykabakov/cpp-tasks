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

class Deposit {
public:
  
  Deposit(char * name,
        double deposit,
        double rate,
        unsigned int time):
        name_( new char[std::strlen(name) + 1]),
        deposit_(deposit),
        rate_(rate),
        time_(time)
         {
           std::strcpy(name_, name);
           std::cout << __func__ << std::endl;
  }

  ~Deposit() {
    delete [] name_;
    std::cout << __func__ << std::endl;
  }

  Deposit(const Deposit &deposit):
    name_( new char[std::strlen(deposit.name_) + 1]),
    deposit_(deposit.deposit_),
    rate_(deposit.rate_),
    time_(deposit.time_) {
      std::cout << "Deposit(const Deposit &deposit)" << std::endl;
      std::strcpy(name_, deposit.name_);
  }

  Deposit& operator=(const Deposit &deposit) {
    std::cout << "Deposit& operator=(const Deposit &deposit)" << std::endl;
    if (this != &deposit) {
      Deposit copy(deposit);
      std::swap(*this, copy);
    }
    return *this;
  }

  Deposit (Deposit &&deposit) {
    std::cout << "Deposit (Deposit &&deposit)" << std::endl;
    name_ = new char[std::strlen(deposit.name_) + 1];
    rate_ = deposit.rate_;
    time_ = deposit.time_;
    std::strcpy(name_, deposit.name_);
    deposit.name_ = nullptr;
    deposit.rate_ = 0;
  }

  Deposit& operator=(Deposit &&deposit) {
    std::cout << "Deposit& operator=(Deposit &&deposit)" << std::endl;
    std::swap(name_, deposit.name_);
    return *this;
  }

  double calculate_deposit(double tmp) {
    for (int k=1; k<=time_; k++) {
      tmp *= (1 + rate_) / 100;
    }
    return tmp;
  }
  
  void show_all() {
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Deposit: " << name_ << std::endl;
    std::cout << "Deposit rate: " << rate_ << std::endl;
    std::cout << "Period: " << time_ << std::endl;
    std::cout << "Total amount: " << calculate_deposit(deposit_) << std::endl;
  }

  double get_deposit() const {
    return deposit_;
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
  double deposit_;
  double rate_;
  unsigned int time_;

};

void by_reference(Deposit &Deposit) {
}

void by_value(Deposit Deposit) {
}

int main() {
  Deposit my_deposit = Deposit("anatoly", 100, 10, 12);
  my_deposit.show_all();
  // Deposit p1("petya", 100, 10, 12);
  // p1 = my_Deposit;
  // Deposit p2(my_Deposit);
  // by_value(std::move(p2));
  // by_reference(p2);
  // auto p3 = std::move(my_Deposit);
  return 0;
}