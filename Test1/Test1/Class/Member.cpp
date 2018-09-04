//
//  Member.cpp
//  Test1
//
//  Created by Ha Cong Thuan on 8/30/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Member.hpp"

using namespace std;

void Member:: input(float sl) {
    salary = sl;
}

void Member:: outPut() {
    cout<< currentID << "\n"<< salary ;
}

