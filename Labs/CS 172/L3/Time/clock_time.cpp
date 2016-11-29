//
//  clock_time.cpp
//  Time
//
//  Created by Matthew Brower on 4/15/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include "clock_time.h"
using namespace std;

clock_time::clock_time(int s,int m, int h, int d)
{
    seconds_=s;
    minutes_=m;
    hours_=h;
    days_=d;
}


void clock_time::setSeconds(int s)
{
    seconds_=s;
}
void clock_time::setMinutes(int m)
{
    minutes_=m;
}
void clock_time::setHours(int h)
{
    hours_=h;
}
void clock_time::setDays(int d)
{
    days_=d;
}


int clock_time::getSeconds() const
{
    return seconds_;
}
int clock_time::getMinutes() const
{
    return minutes_;
}
int clock_time::getHours() const
{
    return hours_;
}
int clock_time::getDays() const
{
    return days_;
}
int clock_time::totalSeconds() const
{
    int daysToHours=0, hoursToMin=0, minToSeconds=0, totalSeconds=0;
    daysToHours=days_*24;
    hoursToMin=(daysToHours+hours_)*60;
    minToSeconds=(hoursToMin+minutes_)*60;
    totalSeconds=minToSeconds+seconds_;
    
    return totalSeconds;
}

bool operator<(clock_time a, clock_time b)
{
    return (a.totalSeconds()<b.totalSeconds());
}
bool operator>(clock_time a, clock_time b)
{
    return (a.totalSeconds()>b.totalSeconds());
}
bool operator==(clock_time a, clock_time b)
{
    return (a.totalSeconds()==b.totalSeconds());
}
bool operator<=(clock_time a, clock_time b)
{
    return (a.totalSeconds()<=b.totalSeconds());
}
bool operator>=(clock_time a, clock_time b)
{
    return (a.totalSeconds()>=b.totalSeconds());
}
clock_time operator+(clock_time a, clock_time b)
{
    int days,hours,min,seconds;
    clock_time adds(days, hours, min, seconds);
    adds.setSeconds(a.getSeconds()+b.getSeconds());
    adds.setMinutes(a.getMinutes()+b.getMinutes());
    adds.setHours(a.getHours()+b.getHours());
    adds.setDays(a.getDays()+b.getDays());
    
    if(adds.getSeconds()>=60)
    {
        adds.setSeconds(adds.getSeconds()-60);
        adds.setMinutes(adds.getMinutes()+1);
    }
    if(adds.getMinutes()>=60)
    {
        adds.setMinutes(adds.getMinutes()-60);
        adds.setHours(adds.getHours()+1);
    }
    if(adds.getHours()>=24)
    {
        adds.setHours(adds.getHours()-24);
        adds.setDays(adds.getDays()+1);
    }
    return adds;
}

ostream & operator<<(ostream & out, const clock_time a)
{
    out << "Days:"<<a.getDays() << " Hours:" <<a.getHours() << " Minutes:" << a.getMinutes() << " Seconds:" <<a.getSeconds() <<endl;
    return out;
}