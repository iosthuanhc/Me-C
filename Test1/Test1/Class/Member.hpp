//
//  Member.hpp
//  Test1
//
//  Created by Ha Cong Thuan on 8/30/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#ifndef Member_hpp
#define Member_hpp

#include <stdio.h>
#include "Person.hpp"

class Member: Person {
    static int memberID;
    const int currentID;
    float salary;
    
public:
    Member() : currentID (memberID ++){}
    ~Member();
    void input(float pay);
    void outPut();
};

#endif /* Member_hpp */
