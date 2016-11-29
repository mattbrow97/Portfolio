//
//  main.cpp
//  Time
//
//  Created by Matthew Brower on 4/15/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include <iostream>
#include "clock_time.h"
using namespace std;


int main()
{
    clock_time time1, time2;
    
    time1.setSeconds(28);
    time1.setMinutes(7);
    time1.setHours(3);
    time1.setDays(1);
    
    time2.setSeconds(33);
    time2.setMinutes(54);
    time2.setHours(22);
    time2.setDays(3);
    
    cout << time1+time2;
}
