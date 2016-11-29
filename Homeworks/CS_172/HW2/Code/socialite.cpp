//
//  socialite.cpp
//  Final
//
//  Created by Matthew Brower on 4/12/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include "socialite.h"
using namespace std;

//Constructor
socialite::socialite()
{
    //variable initolizaton
    _lastName = "";
    _firstName = "";
    _userID = "";
    _picture = "";
    _URL = "";
    _siteDescription = "";
    _cliques.clear();
    
}

//mutators (setters)
void socialite::setLastName(string lastName)
{
    _lastName = lastName;
}
void socialite::setFirstName(string lastName)
{
    _firstName = lastName;
}
void socialite::setUserID(string userID)
{
    _userID = userID;
}
void socialite::setPicture(string picture)
{
    _picture = picture;
}
void socialite::setURL(string URL)
{
    _URL = URL;
}
void socialite::setSiteDescription(string siteDescription)
{
    _siteDescription = siteDescription;
}
void socialite::setClique(string name)
{
    _cliques.push_back(name);
}
void socialite::clearSocialite()
{
    _lastName = "";
    _firstName = "";
    _userID = "";
    _picture = "";
    _URL = "";
    _siteDescription = "";
    _cliques.clear();
}



//inspectors (getters)
string socialite::getLastName()
{
    return _lastName;
}
string socialite::getFirstName()
{
    return _firstName;
}
string socialite::getUserID()
{
    return _userID;
}
string socialite::getPicture()
{
    return _picture;
}
string socialite::getURL()
{
    return _URL;
}
string socialite::getSiteDescription()
{
    return _siteDescription;
}
int socialite::getCliqueNum()
{
    return (int)_cliques.size();
}
string socialite::getClique(int n)
{
    if(n>=0)
    {
        return _cliques[n];
    }
    else
    {
        cout << "Not a valid Clique, Sorry" << endl;
        return "";
    }
}

void socialite::htmlOutput(string file)
{
    //Write to file
    ofstream HTML;
    HTML.open(file.c_str());
    if (HTML.is_open())
    {
        //The HTML code for the file
        HTML << "<html> <body>"
        << "First Name: " << _firstName <<"<br/>"<<"Last Name:" <<_lastName << "<br/>"
        << "User ID: " << _userID << "<br/>"
        << "Hey goto my cool <a href=\"" << _URL << "\">Site</a>"
        <<"<br/>" << _siteDescription<<"<br/>" << "<hr /><br/>"
        << "<img SRC=\"" << _picture << "\" style=\"width:304px;height:228px;\" align=\"center\" />\n";
        
        
        
        HTML<< "<p><i>Cliques</i></p>: <ul>";
        for(int i = 0; i<= (int)_cliques.size()-1; i++)
        {
            HTML << "<li>"<<_cliques[i]<<"</li>";
        }
        HTML<< "</ul></body>\n"
        << "</html>";
        
        //closes the HTML
        HTML.close();
        
        cout << "The file writ succesfully" << endl;
    }
    else
    {
        cout << "Error writing to file" << endl;
    }
    
    
}
//the to string output
string socialite::toString()
{
    ostringstream os;
    
    // The thing that outputs the information to the consel
    os << "Name: " << _firstName << " " << _lastName << endl;
    os << "User ID: " << _userID << endl;
    os << "Picture URL: " << _picture << endl;
    os << "Website URL: " << _URL << endl;
    os << "Website Description: " << _siteDescription << endl;
    return os.str();
}





