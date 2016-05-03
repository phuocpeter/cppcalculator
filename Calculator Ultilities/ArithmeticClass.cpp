//
//  ArithmeticClass.cpp
//  Calculator Ultilities
//
//  Created by Tran Thai Phuoc on 2016-04-27.
//  Copyright © 2016 Tran Thai Phuoc. All rights reserved.
//

#include "ArithmeticClass.hpp"
#include <iostream>

using namespace std;

ArithmeticClass::ArithmeticClass()
{
  // Initialize Object and display options
  cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modules" << endl;
  cout << "Enter option: ";
}

void ArithmeticClass::setValue(int mode, double a, double b)
{
  this->mode = mode;
  this->a = a;
  this->b = b;
  calc();
}

void ArithmeticClass::calc()
{
  switch (mode) {
    case 1:
      ans = a + b;
      break;
    
    case 2:
      ans = a - b;
      break;
      
    case 3:
      ans = a * b;
      break;
      
    case 4:
      ans = a / b;
      break;
      
    case 5:
      ans = (int)a % (int)b;
      
    default:
      break;
  }
}

void ArithmeticClass::printAns()
{
  switch (mode) {
    case 1:
      cout << a << " + " << b << " = " << ans << endl;
      break;
    case 2:
      cout << a << " - " << b << " = " << ans << endl;
      break;
    case 3:
      cout << a << " * " << b << " = " << ans << endl;
      break;
    case 4:
      if (b == 0) {
        cout << "Cannot divived by 0" << endl;
        break;
      }
      cout << a << " / " << b << " = " << ans << endl;
      break;
    case 5:
      if (b == 0) {
        cout << "Cannot divived by 0" << endl;
        break;
      }
      cout << a << " % " << b << " = " << ans << endl;
      break;
    default:
      cout << "Option invalid" << endl;
      break;
  }
}
