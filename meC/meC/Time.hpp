//
//  Time.hpp
//  meC
//
//  Created by Ha Cong Thuan on 8/23/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>

class TimeObj {
    
private:
    int hour;
    int munite;
    int second;
    
public:
    //Constructor
    TimeObj(){ hour = munite = second = 0; }
    TimeObj(int h, int m, int s);
    
    //Destructor
    ~ TimeObj() {
        // clear all data, memory, close file, database.....
    }
    void showTime();
    void setH(int h){ hour = (h >=0 && h<24) ? h : 0; }
    void setM(int m){ munite = (m >=0 && m<60) ? m : 0; }
    void setS(int s){ second = (s >=0 && s<60) ? s: 0; }
};
#endif /* Time_hpp */
