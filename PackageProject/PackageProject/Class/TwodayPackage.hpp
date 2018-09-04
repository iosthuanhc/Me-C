//
//  TwodayPackage.hpp
//  PackageProject
//
//  Created by Ha Cong Thuan on 9/4/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#ifndef TwodayPackage_hpp
#define TwodayPackage_hpp

#include <stdio.h>
#include <iostream>
#include "Package.cpp"

using namespace std;

class TwodayPackage: public Package {
    
    double flatFee;
    
public:
    TwodayPackage();
    ~TwodayPackage();
    void inPut();
    void outPut();
    double calculateCost();
};
#endif /* TwodayPackage_hpp */
