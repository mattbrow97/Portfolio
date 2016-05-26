//
//  room.cpp
//  Lab8
//
//  Created by Matthew Brower on 5/20/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include "room.h"
room::room(string descr)
{
    description_=descr;
    north_=NULL;
    south_=NULL;
    east_=NULL;
    west_=NULL;
    
}

string room::getDescription() const
{
    return description_;
}
room* room::getNorth() const
{
    return north_;
}
room* room::getSouth() const
{
    return south_;
}
room* room::getEast() const
{
    return east_;
}
room* room::getWest() const
{
    return west_;
}

void room::setDescription(string d)
{
    description_=d;
}
void room::setNorth(room* n)
{
    north_=n;
}
void room::setSouth(room* s)
{
    south_=s;
}
void room::setEast(room* e)
{
    east_=e;
}
void room::setWest(room* w)
{
    west_=w;
}
