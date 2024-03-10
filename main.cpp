#include <iostream>
#include "account.hpp"

int menu() {
  int user_input;
  std::cout << "1: Start new account.\n";
  std::cout << "2: Make a deposit.\n";
  std::cout << "3: Make a withdrawl.\n";
  std::cout << "9: Quit program.\n\n";
  std::cin >> user_input;
  return user_input;
}


int main() {
  bool run = true;
  Account *acct_ptr = nullptr; // false

  while (run) {
	double money;
	int user_input = menu();

	if (user_input == 1 and not (acct_ptr)) {
	  Account acct;
	  acct_ptr = &acct;
	  acct_ptr->new_account();	  
	  acct_ptr->display();
	}
	
	if (user_input == 2 and (acct_ptr)) {
	  std::cout << "How much would you like to deposit? \n" << std::endl;
	  std::cin >> money;
	  acct_ptr->deposit(money);
    }
	
	if (user_input == 3 and (acct_ptr)) {
	  std::cout << "How much would you like to deposit? \n" << std::endl;
	  std::cin >> money;
	  acct_ptr->withdraw(money);
    }

	if (not acct_ptr){
	  std::cout << "Please access an account." << std::endl;
	}

//	if (user_input == 9) {run = false; db_access.close();}

  }
	return 0;
}

