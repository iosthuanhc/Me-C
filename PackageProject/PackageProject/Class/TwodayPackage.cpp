//
//  TwodayPackage.cpp
//  PackageProject
//
//  Created by Ha Cong Thuan on 9/4/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#include "TwodayPackage.hpp"


TwodayPackage::TwodayPackage() {
    
}
TwodayPackage::~TwodayPackage(){}


void TwodayPackage::inPut() {
    
}

void TwodayPackage:: outPut() {
    
}

double TwodayPackage::calculateCost() {
    return Package:: calculateCost() + flatFee;
}
