//----------------------------------------------------------------------------
//
//------------------------------ DUPoint Tester ------------------------------
//
//----------------------------------------------------------------------------
//
//  Program Name: testDUPoint
//
//  This program introduces and demonstrates a simple class definition, for use
//  and modification in CS172 (Computer Programming II) at Drexel University.
//
//  Author:              Hoi Man Chang
//  Course:              MCS172, 1998
//  Date:                02/06/98
//
//  Modified by          Modified Date   Comments
//  Hoi Man Chang        02/06/98
//  JL Popyack           04/29/98        Simplify the old version
//  JL Popyack           04/03/2002      Combine header and implementation of
//                                       DUPoint class into program; reformat.
//
//----------------------------------------------------------------------------


#include "DULine.h"



//----------------------------------------------------------------------------
//
//------------------------------- Main Program -------------------------------
//
//----------------------------------------------------------------------------


int main (void)
{
    DUPoint p1(10,10), p2(4,5), p3(8,0);
    DULine line1(p1,p2), line2(5,6,8,9);
    
    cout << "The coordinates of the triangle are" <<endl;
    
    p1.output(cout);
    cout << endl;
    
    cout << p2.toString() << endl;
    
    p3.output(cout);
    cout << endl;
    
    p2.setX(10);
    cout << p2.toString() << endl;
    cout 	<< "line1: " << line1.toString()
    << "; line2: " << line2.toString() << endl;

    
    return 0;
}
