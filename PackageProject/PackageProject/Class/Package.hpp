//
//  Package.hpp
//  PackageProject
//
//  Created by Ha Cong Thuan on 9/4/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#ifndef Package_hpp
#define Package_hpp

#include <stdio.h>
#include <iostream>
#include "Person.hpp"

using namespace std;

class Package: public Person {
    Person sender;
    Person recipient;
    double weight;
    double cost;
    
public:
    Package();
    ~Package();
    void inPut();
    void outPut();
    double calculateCost();
};
#endif /* Package_hpp */
