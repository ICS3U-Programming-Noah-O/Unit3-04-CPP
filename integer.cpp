// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Dec. 9, 2021
// This program allows a user to enter an integer an
// then determine if it is positive, negative, or 0
#include <iostream>


int main() {
  // get input from user
  float userNumber;
  std::cout << " \n";
  std::cout << "This program can detect if your number ";
  std::cout << "is positive or negative!\n";
  std::cout << " \n";
  std::cout << "Enter your number: ";
  std::cin >> userNumber;

  // Determine if integer is positive, negative, or 0
  if (userNumber == 0) {
      std::cout << "Your number is just zero!.\n";
      main();
  } else if (userNumber < 0) {
      std::cout << userNumber << " is a negative number. \n";
      std::cout << " \n";
      main();
  } else {
      std::cout << userNumber << " is a positive number. \n";
      std::cout << " \n";
      main();
  }
}
