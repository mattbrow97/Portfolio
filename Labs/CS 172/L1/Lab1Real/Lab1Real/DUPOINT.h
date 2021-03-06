//
//  Header.h
//  Lab1Real
//
//  Created by Matthew Brower on 4/1/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#ifndef DUPOINT_h
#define DUPOINT_h
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#endif /* Header_h */
//----------------------------------------------------------------------------
//
//------------------------------ Class Headers -------------------------------
//
//----------------------------------------------------------------------------

class DUPoint
{
public:
	  	
    //------------------------------------------------------
    //----- Constructors -----------------------------------
    //------------------------------------------------------
    
    DUPoint();
    DUPoint(int x, int y);
    
    //------------------------------------------------------
    //----- Destructor -------------------------------------
    //------------------------------------------------------
    
    ~DUPoint() ;
	  	
    //------------------------------------------------------
    //----- Inspectors -------------------------------------
    //------------------------------------------------------
	  	
    int getX() const;
    int getY() const;
	  	
    //------------------------------------------------------
    //----- Mutators ---------------------------------------
    //------------------------------------------------------
    
    void setX(int x);
    void setY(int y);
    
    //------------------------------------------------------
    //----- Facilitators -----------------------------------
    //------------------------------------------------------
    
    //------------------------------------------------------
    // return DUPoint in string form
    
    std::string toString ();
    
    //------------------------------------------------------
    // insert DUPoint in output stream
    
    void output(std::ostream &sout) ;
    
private:
    int x_;
    int y_;
};