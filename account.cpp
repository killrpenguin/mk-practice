#include <iostream>
#include "account.hpp"


Account::Account():account_balance {0}, account_number {rand()} {}

Account::Account(std::string name, std::string address)
: account_holder_name{name}, account_holder_address{address},
account_balance {0}, account_number{rand()} {}

void Account::display(){
  std::cout << "Name: " << account_holder_name << "\n"
            << "Balance: " << account_balance << "\n"
            << std::endl;
}

void Account::deposit(double amount) {
  	account_balance += amount;
	display();
}

void Account::withdraw(double amount) {
  	account_balance -= amount;
	display();
}

Account Account::new_account() {
  std::string input_name;
  std::string input_address;
  double input_bal {0.0};

  std::cout << "Enter account holders name: " << std::endl;
  std::cin >> input_name;
  std::cout << "Enter account holders address: " << std::endl;
  std::cin >> input_address;
  std::cout << "Enter starting balance: " << std::endl;
  std::cin >> input_bal;
  
  Account my_account(input_name, input_address);
  Account *acct_ptr = &my_account;
  acct_ptr -> deposit(input_bal);
  return *acct_ptr;
}
