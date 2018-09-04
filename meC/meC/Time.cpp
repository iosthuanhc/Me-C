//
//  Time.cpp
//  meC
//
//  Created by Ha Cong Thuan on 8/23/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#include "Time.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

TimeObj::TimeObj(int h, int m, int s) {
    setS(s);
    setM(m);
    setH(h);
}

void TimeObj::showTime(){
    cout << setw(2)<<setfill('0')<<hour<< ":"
    << setw(2)<<setfill('0')<<munite<< ":"
    << setw(2)<<setfill('0')<<second;
}
