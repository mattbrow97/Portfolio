//
//  DUPoint.cpp
//  Lab1Real
//
//  Created by Matthew Brower on 4/1/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//


#include "DUPOINT.h"

//----------------------------------------------------------------------------
//
//---------------------------- Class Definitions -----------------------------
//
//----------------------------------------------------------------------------


//----------------------------------------------------------------------------
//----- Constructors ---------------------------------------------------------
//----------------------------------------------------------------------------

DUPoint::DUPoint () {  }

DUPoint::DUPoint (int x, int y)
{
    x_ = x;
    y_ = y;
}

//----------------------------------------------------------------------------
//----- Destructor -----------------------------------------------------------
//----------------------------------------------------------------------------

DUPoint::~DUPoint() { }


//----------------------------------------------------------------------------
//----- Inspectors -----------------------------------------------------------
//----------------------------------------------------------------------------

int DUPoint::getX () const
{
    return x_;
}

int DUPoint::getY () const
{
    return y_;
}

//----------------------------------------------------------------------------
//----- Mutators -------------------------------------------------------------
//----------------------------------------------------------------------------

void DUPoint::setX (int x)
{
    x_ = x;
}

void DUPoint::setY (int y)
{
    y_ = y;
}

//----------------------------------------------------------------------------
//----- Facilitators ---------------------------------------------------------
//----------------------------------------------------------------------------

string DUPoint::toString ()
{
    //---------------------------------------------------------------------
    //  The ostringstream type allows output to be directed to
    //  a string in the same style as usually done with a stream.
    //---------------------------------------------------------------------
    
    ostringstream os;
    os << "(" << x_ << "," << y_ << ")";
    string s = os.str();
    return s;
}

//----------------------------------------------------------------------------

void DUPoint::output(ostream &out)
{
    out << toString() ;
}