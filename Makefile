account_program : account.o main.o
	clang++ account.o main.o -o mk_checkbook

account.o : account.cpp account.hpp
	clang++ -c account.cpp

main.o : main.cpp
	clang++ -c main.cpp
