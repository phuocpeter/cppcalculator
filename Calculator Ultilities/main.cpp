//
//  main.cpp
//  Calculator Ultilities
//
//  Created by Tran Thai Phuoc on 2016-04-27.
//  Copyright © 2016 Tran Thai Phuoc. All rights reserved.
//

#include "ArithmeticClass.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void getInput();

double a, b;

int main()
{
  // Clear console
  system("clear");
  
  int mode = 0;
  cout << endl;
  cout << "Calculator Utilities v1\n";
  
  ArithmeticClass armObj;
  cin >> mode;
  cout << endl;
  
  getInput();
  armObj.setValue(mode, a, b);
  
  armObj.printAns();
  
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

