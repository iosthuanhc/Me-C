//
//  OvernightPackage.hpp
//  PackageProject
//
//  Created by Ha Cong Thuan on 9/4/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#ifndef OvernightPackage_hpp
#define OvernightPackage_hpp

#include <stdio.h>
#include <iostream>
#include "Package.cpp"

using namespace std;

class OvernightPackage: public Package {
    
    double additionalCost;
    
public:
    OvernightPackage();
    ~OvernightPackage();
    void inPut();
    void outPut();
    double calculateCost();
};
#endif /* OvernightPackage_hpp */
