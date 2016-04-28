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

ArithmeticClass::ArithmeticClass(int mode, double a, double b)
{
  this->mode = mode;
  this->a = a;
  this->b = b;
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
      
    default:
      break;
  }
}