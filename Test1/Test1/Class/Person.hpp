//
//  Persion.hpp
//  Test1
//
//  Created by Ha Cong Thuan on 8/30/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#ifndef Persion_hpp
#define Persion_hpp

#include <stdio.h>

class Person {
    string pName;
    string pEmail;
    
public:
    Person();
    ~Person();
    void input(string name, string email);
    void outPut();
    
};

#endif /* Persion_hpp */
