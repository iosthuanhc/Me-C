//
//  JobPosition.hpp
//  Test1
//
//  Created by Ha Cong Thuan on 8/30/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#ifndef JobPosition_hpp
#define JobPosition_hpp

#include <stdio.h>

class JobPosition {
    int positonID;
    char positionName;
    float bonus;
    
public:
    JobPosition();
    ~JobPosition();
    void input();
};

#endif /* JobPosition_hpp */
