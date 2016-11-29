//
//  setCard.cpp
//  Set
//
//  Created by Matthew Brower on 4/8/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include "setCard.h"



//constroctor
setCard_::setCard_(string color, string shading, string shape, int number)
{
    color_=color;
    shading_=shading;
    shape_=shape;
    number_=number;
}
//inspecatator
//might need a set card inspecator?
string setCard_::getColor(string color)
{
    return color;
}
string setCard_::getShading(string shading)
{
    return shading;
}
string setCard_::getShape(string shape)
{
    return shape;
}
int setCard_::getNumber(int number)
{
    return number;
}

//mutator
void setCard_::setColor(string color)
{
    color_=color;
}
void setCard_::setShading(string shading)
{
    shading_=shading;
}
void setCard_::setShape(string shape)
{
    shape_=shape;
}
void setCard_::setNumber(int number)
{
    number_=number;
}
//toString
string setCard_::toString ()
{
    //---------------------------------------------------------------------
    //  The ostringstream type allows output to be directed to
    //  a string in the same style as usually done with a stream.
    //---------------------------------------------------------------------
    
    ostringstream os;
    os << color_ << "," << shading_ << "," << shape_ << "," << number_ <<endl;
    string s = os.str();
    return s;
}

void setCard_::output(ostream &out)
{
    out << toString() ;
}