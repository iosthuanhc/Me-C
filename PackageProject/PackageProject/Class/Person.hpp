//
//  Person.hpp
//  PackageProject
//
//  Created by Ha Cong Thuan on 9/4/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include <iostream>
#include <stdio.h>
using namespace std;

class Person {
    string name;
    string address;
    string city;
    string state;
    string zipCode;
    
public:
    Person();
    ~Person();
    void inPut();
    void outPut();
};

#endif /* Person_hpp */
