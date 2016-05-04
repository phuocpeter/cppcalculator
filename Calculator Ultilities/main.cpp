//
//  main.cpp
//  Calculator Ultilities
//
//  Created by Tran Thai Phuoc on 2016-04-27.
//  Copyright © 2016 Tran Thai Phuoc. All rights reserved.
//

#include "ArithmeticClass.hpp"
#include <iostream>
#include <string>

using namespace std;

void getInput();
int getOption();
void newScreen();
void mainMenu();
void armMode();

double a, b;
const string ver = "v1.0-1";

int main()
{
  newScreen();
  
  mainMenu();
  
  int mode = getOption();
  
  // Check which mode to use
  switch (mode) {
    case 1:
      armMode();
      break;
    case 98:
      newScreen();
      cout << "Version: " << ver << endl;
      break;
    case 99:
      // Quit program
      system("clear");
      break;
      
    default:
      cout << "Option not found" << endl;
      break;
  }
  
  cout << endl;
  return 0;
}

void getInput()
{
  // Getting input
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout << endl;
}

void newScreen()
{
  // Clear console
  system("clear");
  
  cout << endl;
  cout << "Calculator Utilities " << ver << endl << endl;
}

void mainMenu()
{
  // Show the main menu
  cout << "1. Arithmetic Maths\n\n98. About\n99. Exit" << endl;
}

void armMode()
{
  newScreen();
  // Arithmetic Mode
  ArithmeticClass armObj;
  
  armObj.setMode(getOption());
  getInput();
  armObj.setValue(a, b);
  
  armObj.printAns();
}

int getOption()
{
  // Get input option (integer only)
  int mode;
  cout << "\nEnter Option: ";
  cin >> mode;
  cout << endl;
  return mode;
}

