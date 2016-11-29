//
//  setCard.h
//  Set
//
//  Created by Matthew Brower on 4/8/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#ifndef setCard_h
#define setCard_h
#include <iostream>
#include <string>
#include "sstream"
using namespace std;

class setCard_
{
    public:
        //constroctor
        setCard_(string color, string shading, string shape, int number);
        //inspector
       // setCard_ getCard(setCard_ card);
        string getColor();
        string getShading();
        string getShape();
        int getNumber();
        //mutator
       // setCard_ setCard(setCard_ card);
        void setColor(string color);
        void setShading(string shading);
        void setShape(string shape);
        void setNumber(int number);
        //toString
        string toString();
        void output(ostream &out);
    private:
        string color_;
        string shading_;
        string shape_;
        int number_;
};


#endif /* setCard_h */
