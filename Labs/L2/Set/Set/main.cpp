//
//  main.cpp
//  Set
//
//  Created by Matthew Brower on 4/8/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//


#include "setCard.h"

bool isSet (setCard_ card1, setCard_ card2, setCard_ card3)
{
    if(card1.getColor()==card2.getColor()&&card2.getColor()==card3.getColor())
    {
        return true;
    }
    else if(card1.getShape()==card2.getShape()&&card2.getShape()==card3.getShape())
    {
        return true;
    }
    else if(card1.getShading()==card2.getShading()&&card2.getShading()==card3.getShading())
    {
        return true;
    }
    else if(card1.getNumber()==card2.getNumber()&&card2.getNumber()==card3.getNumber())
    {
        return true;
    }
    else if(card1.getColor()!=card2.getColor()&&card1.getColor()!=card3.getColor()&&card2.getColor()!=card3.getColor())
    {
        if(card1.getShape()!=card2.getShape()&&card1.getShape()!=card3.getShape()&&card2.getShape()!=card3.getShape())
        {
            if(card1.getShading()!=card2.getShading()&&card1.getShading()!=card3.getShading()&&card2.getShading()!=card3.getShading())
            {
                if(card1.getNumber()!=card2.getNumber()&&card1.getNumber()&&card3.getNumber()&&card2.getNumber()!=card3.getNumber())
                {
                    return true;
                }
            }
        }
    }
    else
    {
        return false;
    }
}


int main()
{
    
    setCard_ card("red","solid","diamond",1);
    setCard_ card2("purple","striped","oval",2);
    setCard_ card3("green","outlined","squiggle",3);
    
    cout<< "card 1:";
    card.output(cout);
    cout<< "card 2:";
    card2.output(cout);
    cout<< "card 3:";
    card3.output(cout);
    return 0;
}
