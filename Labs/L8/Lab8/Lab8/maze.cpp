//
//  maze.cpp
//  Lab8
//
//  Created by Matthew Brower on 5/20/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include "maze.h"
#include <iostream>
using namespace std;

maze::maze(room* st, room* ex)
{
    start_room_=st;
    exit_room_=ex;
    current_=st;
}


room* maze::getCurrent() const
{
    return current_;
}


bool maze::moveNorth()
{
    bool status=true;
    if(current_->getNorth()==NULL)
    {
        status=false;
        cout<< "You shall not pass. try again"<< endl;
    }
    else
    {
        status=true;
        current_=current_->getNorth();
        cout << "You went up(north)" << endl;
        
    }
    if(current_!=exit_room_)
    {
        cout << current_->getDescription()<<endl;
    }
    return status;

}
bool maze::moveSouth()
{
    bool status=true;
    if(current_->getSouth()==NULL)
    {
        status=false;
        cout<< "You shall not pass. try again"<< endl;
    }
    else
    {
        status=true;
        current_=current_->getSouth();
        cout << "You went down(south)" << endl;
        
    }
    if(current_!=exit_room_)
    {
        cout << current_->getDescription()<<endl;
    }
    return status;
}
bool maze::moveEast()
{
    bool status=true;
    if(current_->getEast()==NULL)
    {
        status=false;
        cout<< "You shall not pass. try again"<< endl;
    }
    else
    {
        status=true;
        current_=current_->getEast();
        cout << "You went right(East)" << endl;
        
    }
    if(current_!=exit_room_)
    {
        cout << current_->getDescription() <<endl;
    }
    return status;
}
bool maze::moveWest()
{
    bool status=true;
    if(current_->getWest()==NULL)
    {
        status=false;
        cout<< "You shall not pass. try again"<< endl;
    }
    else
    {
        status=true;
        current_=current_->getWest();
        cout << "You went left(West)" << endl;
        
    }
    if(current_!=exit_room_)
    {
        cout << current_->getDescription() <<endl;
    }
    return status;
}

bool maze::atExit() const
{
    if(current_==exit_room_)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void maze::reset()
{
    current_=start_room_;
}
