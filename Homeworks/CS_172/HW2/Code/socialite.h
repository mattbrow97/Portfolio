//
//  socialite.h
//  Final
//
//  Created by Matthew Brower on 4/12/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#ifndef _socialite_
#define _socialite_
#include <string>
#include <iostream>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class socialite
{
public:
    //constructor
    socialite();
    
    //mutators (seters)
    void setLastName(string lastName);
    void setFirstName(string firstName);
    void setUserID(string userID);
    void setPicture(string picture);
    void setURL(string URL);
    void setSiteDescription(string description);
    void setClique(string name);
    void clearSocialite();
    
    //inspectors (getters)
    string getLastName();
    string getFirstName();
    string getUserID();
    string getPicture();
    string getURL();
    string getSiteDescription();
    string getClique(int n);
    int getCliqueNum();
    
    //toSring and HTML
    string toString();
    void htmlOutput(string file);
    
    
private:
    //private variables
    string _lastName;
    string _firstName;
    string _userID;
    string _picture;
    string _URL;
    string _siteDescription;
    vector<string> _cliques;
};
#endif