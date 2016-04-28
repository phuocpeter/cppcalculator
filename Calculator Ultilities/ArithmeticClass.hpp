//
//  ArithmeticClass.hpp
//  Calculator Ultilities
//
//  Created by Tran Thai Phuoc on 2016-04-27.
//  Copyright © 2016 Tran Thai Phuoc. All rights reserved.
//

#ifndef ArithmeticClass_hpp
#define ArithmeticClass_hpp

#include <iostream>
#include <stdio.h>

class ArithmeticClass
{
public:
  ArithmeticClass(int mode, double a, double b);
  void calc();
  std::string getAns();
  
private:
  int mode;
  double a, b, ans;
  std::string r;
  
};

#endif /* ArithmeticClass_hpp */
