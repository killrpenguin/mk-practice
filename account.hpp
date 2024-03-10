#pragma once
//#ifndef ACCOUNT_H
//#define ACCOUNT_H
#include <iostream>
#include <cstdlib>


class Account {
private:
  double account_balance;
  const int account_number;
  
public:
  Account();
  
  Account(std::string name, std::string address);
  
  std::string account_holder_name;
  
  std::string account_holder_address;

  void set_account_holder_name(std::string name);

  void set_account_holder_address(std::string address);

  void deposit(double amount);
  
  void withdraw(double amount);
  
  void display();

  Account new_account();

};

//#endif
