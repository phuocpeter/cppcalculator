//
//  main.cpp
//  Calculator Ultilities
//
//  Created by Tran Thai Phuoc on 2016-04-27.
//  Copyright © 2016 Tran Thai Phuoc. All rights reserved.
//

#include "ArithmeticClass.hpp"
#include <iostream>

using namespace std;

void getInput();

double a, b;

int main()
{
  // Clear console
  system("clear");
  
  int x = 0;
  cout << endl << endl;
  cout << "Calculator Utility v1\n";
  cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division" << endl;
  cout << "Enter option: ";
  cin >> x;
  cout << endl;
  
  switch (x)
  {
    // Cases for calculating mode
    case 1:
      cout << "Addition Mode\n";
      getInput();
      cout << a << " + " << b << " = " << a + b << endl;
      break;
    case 2:
      cout << "Subtraction Mode\n";
      getInput();
      cout << a << " - " << b << " = " << a - b << endl;
      break;
    case 3:
      cout << "Multiplication Mode\n";
      getInput();
      cout << a << " x " << b << " = " << a * b << endl;
      break;
    case 4:
      cout << "Subtraction Mode\n";
      getInput();
      if (b == 0)
      {
        cout << "Cannot divide by 0\n";
        break;
      }
      cout << a << " / " << b << " = " << a / b << endl;
      break;
    default:
      cout << "Option invalid\n";
      break;
  }
  cout << endl << endl;
  
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

