//
//  main.cpp
//  Lab8
//
//  Created by Matthew Brower on 5/20/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include <iostream>
#include <vector>
#include "maze.h"

int main()
{
    //Trivial Maze
    vector<room*> my_rooms(16);
    my_rooms[0] = new room("This room is the entrance.");
    my_rooms[1] = new room("This room has a table. Maybe a dinning room?");
    my_rooms[2] = new room("This room looks like some kind of bed room");
    my_rooms[3] = new room("This room feels damp");
    my_rooms[4] = new room("This room has a lightsaber on the ground (it doesent work)");
    my_rooms[5] = new room("This room has a single wooden chair in it");
    my_rooms[6] = new room("This room has no light source");
    my_rooms[7] = new room("This room has a computer in it");
    my_rooms[8] = new room("This room has a 50ft statue of lennin in it");
    my_rooms[9] = new room("This room has 10 baby tigers in it");
    my_rooms[10] = new room("This room has sam in it");
    my_rooms[11] = new room("This room has a rusty pipe in it");
    my_rooms[12] = new room("This room has 3 levers in it");
    my_rooms[13] = new room("This room has a hole in the ground");
    my_rooms[14] = new room("hbunjml");
    my_rooms[15] = new room("This room is the exit. Good Job.");
    //room 0 is south of room 1
    my_rooms[0]->setEast(my_rooms[1]);
    my_rooms[1]->setSouth(my_rooms[3]);
    my_rooms[3]->setSouth(my_rooms[10]);
    my_rooms[3]->setWest(my_rooms[9]);
    my_rooms[10]->setWest(my_rooms[11]);
    my_rooms[11]->setWest(my_rooms[12]);
    my_rooms[11]->setSouth(my_rooms[14]);
    my_rooms[14]->setWest(my_rooms[13]);
    
    my_rooms[1]->setWest(my_rooms[0]);
    my_rooms[3]->setNorth(my_rooms[1]);
    my_rooms[10]->setNorth(my_rooms[3]);
    my_rooms[9]->setEast(my_rooms[3]);
    my_rooms[11]->setEast(my_rooms[10]);
    my_rooms[12]->setEast(my_rooms[11]);
    my_rooms[14]->setNorth(my_rooms[11]);
    my_rooms[13]->setEast(my_rooms[14]);
    
    my_rooms[0]->setWest(my_rooms[2]);
    my_rooms[2]->setSouth(my_rooms[4]);
    my_rooms[4]->setEast(my_rooms[5]);
    my_rooms[4]->setSouth(my_rooms[6]);
    my_rooms[5]->setSouth(my_rooms[8]);
    my_rooms[8]->setEast(my_rooms[15]);
    my_rooms[8]->setWest(my_rooms[7]);
    my_rooms[7]->setWest(my_rooms[11]);
    
    my_rooms[2]->setEast(my_rooms[0]);
    my_rooms[4]->setNorth(my_rooms[2]);
    my_rooms[5]->setWest(my_rooms[4]);
    my_rooms[6]->setNorth(my_rooms[4]);
    my_rooms[8]->setNorth(my_rooms[5]);
    //my_rooms[15]->setWest(my_rooms[8]);
    my_rooms[7]->setEast(my_rooms[8]);
    my_rooms[11]->setEast(my_rooms[7]);
    
    
    //Make a maze!
    //Set the start and exit rooms.
    maze my_maze(my_rooms[0],my_rooms[15]);
    string direction;
    //my_maze.moveSouth();
    cout << "This room is the entrance." <<endl;
    cout<< "Pick a direction to move (north, east, south, west, reset(moves you back to the start))" <<endl;
    cin >> direction;
    while(!my_maze.atExit())
    {
        if(direction=="north")
        {
            my_maze.moveNorth();
            
        }
        else if(direction=="south")
        {
            my_maze.moveSouth();
        }
        else if(direction=="east")
        {
            my_maze.moveEast();
        }
        else if(direction=="west")
        {
            my_maze.moveWest();
        }
        else if(direction=="reset")
        {
            my_maze.reset();
        }
        else
        {
            cout << "invalid move please re-enter" <<endl;
        }
        cout << "\n\n";
        cout<< "Pick a direction to move (north, east, south, west, reset(moves you back to the start))" <<endl;
        cin >> direction;
    }
    if(my_maze.atExit())
    {
        cout <<"YOUR FREE!!! Grats" <<endl;
        
    }
}
