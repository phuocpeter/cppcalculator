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
      
    default:
      break;
  }
}

string ArithmeticClass::getAns()
{
  switch (mode) {
    case 1:
      r = to_string(a) + " + " + to_string(b) + " = " + to_string(ans);
      return r;
    case 2:
      r = to_string(a) + " - " + to_string(b) + " = " + to_string(ans);
      return r;
    case 3:
      r = to_string(a) + " 𝗑 " + to_string(b) + " = " + to_string(ans);
      return r;
    case 4:
      if (b == 0) {
        r = "Cannot divided by 0";
        return r;
      }
      r = to_string(a) + " ÷ " + to_string(b) + " = " + to_string(ans);
      return r;
    default:
      r = "Option Invalid";
      return r;
  }
}
