//
//  Person.cpp
//  PackageProject
//
//  Created by Ha Cong Thuan on 9/4/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#include "Person.hpp"

using namespace std;

Person::Person() {
    name = address = city = state = zipCode = "";
}
Person::~Person(){}

void Person:: inPut() {
    cout<<" input name: "; cin>> name;
    cout<<" input address: "; cin>> address;
    cout<<" input city: "; cin>> city;
    cout<<" input state: "; cin>> state;
    cout<<" input zipCode: "; cin>> zipCode;
}

void Person::outPut() {
    cout<<"Name: "<< name <<"\n";
    cout<<"address: "<< address <<"\n";
    cout<<"city: "<< city <<"\n";
    cout<<"state: "<< state <<"\n";
    cout<<"zipCode: "<< zipCode <<"\n";
}
