//
//  Persion.cpp
//  Test1
//
//  Created by Ha Cong Thuan on 8/30/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Person.hpp"

using namespace std;

Person::Person(){}
Person::~Person(){}

// Input persion
void Person:: input(string name, string email) {
    pName = name;
    pEmail = email;
}

void Person:: outPut() {
    cout<< pName << "\n" << pEmail;
}
