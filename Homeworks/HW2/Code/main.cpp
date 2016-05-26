//
//  main.cpp
//  Final
//
//  Created by Matthew Brower on 4/12/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include "socialite.h"
using namespace std;

vector<socialite> importFile(string file);

int main()
{
    
    //Decleration
    socialite socialite, socialite2, socialite3, socialite4, socialite5;
    
    //    //socialite
    //    socialite.setFirstName("Matthew");
    //    socialite.setLastName("Brower");
    //    socialite.setUserID("mlb378");
    //    socialite.setPicture("http://i.imgur.com/FHr0m2J.jpg");
    //    socialite.setURL("https://www.linkedin.com/in/matthew-brower-62669411a");
    //    socialite.setSiteDescription("This website is my linkedin page");
    //
    //    //socialite2
    //    socialite2.setFirstName("Burnie");
    //    socialite2.setLastName("Burns");
    //    socialite2.setUserID("bb2003");
    //    socialite2.setPicture("http://i.imgur.com/BlS6Iut.jpg");
    //    socialite2.setURL("https://en.wikipedia.org/wiki/Burnie_Burns");
    //    socialite2.setSiteDescription("This is my Wikipedia page");
    //
    //    //socialite3
    //    socialite3.setFirstName("Geoff");
    //    socialite3.setLastName("Ramsey");
    //    socialite3.setUserID("Gfunk03");
    //    socialite3.setPicture("http://i.imgur.com/tAgezPD.jpg");
    //    socialite3.setURL("https://en.wikipedia.org/wiki/Geoff_Ramsey");
    //    socialite3.setSiteDescription("This is my Wikipedia page");
    //
    //    //socialite4
    //    socialite4.setFirstName("Donald");
    //    socialite4.setLastName("Trump");
    //    socialite4.setUserID("Tsucks28");
    //    socialite4.setPicture("http://i.imgur.com/jfsGJPj.jpg");
    //    socialite4.setURL("https://en.wikipedia.org/wiki/Donald_Trump");
    //    socialite4.setSiteDescription("This is my wikipedia Page");
    //
    //    //socialite5
    //    socialite5.setFirstName("Bugs");
    //    socialite5.setLastName("Bunny");
    //    socialite5.setUserID("BB1940");
    //    socialite5.setPicture("http://i.imgur.com/IgeNVDK.png");
    //    socialite5.setURL("https://en.wikipedia.org/wiki/Bugs_Bunny");
    //    socialite5.setSiteDescription("Doc this is a wikipedia Page");
    //
    //    //Outputs
    //    cout << socialite.toString() << endl;
    //    socialite.htmlOutput("mlb378.html");
    //    cout << socialite2.toString() << endl;
    //    socialite2.htmlOutput("bb2003.html");
    //    cout << socialite3.toString() << endl;
    //    socialite3.htmlOutput("Gfunk03.html");
    //    cout << socialite4.toString() << endl;
    //    socialite4.htmlOutput("Tsucks28.html");
    //    cout << socialite5.toString() << endl;
    //    socialite5.htmlOutput("BB1940.html");
    
    
    
    
    
    //Im not sure if we learned how to do files like this in the class howerver i looked in the slides and i couldent get the other way to work
    //So i looked some things up and found this way to do it. i hope that it is alright.
    
    
    //Where you edit the path for where the file is
    //*************
    vector<socialite::socialite>socialiteFile=importFile("/Users/Coolstuff1776/Documents/College/CS172/Homeworks/HW2/Inputs.txt");
    //*************
    //The Location for where the file outputs too
    
    for(int i=0; i<=(int)socialiteFile.size()-1; i++)
    {
        //$$$$$$$$$$$$$$$$$$$$$$
        string tempFile="/Users/Coolstuff1776/Documents/College/CS172/Homeworks/HW2/"+socialiteFile[i].getUserID()+".html";
        //$$$$$$$$$$$$$$$$$$$$$$
        socialiteFile[i].htmlOutput(tempFile);
    }
}

vector<socialite> importFile(string file)
{
    //creates the variables
    vector<socialite> tempVector;
    socialite temp;
    string line;
    ifstream socialitesFile;
    socialitesFile.open("Inputs.txt");
    int countLine=1;
    //checks to see if the file is open
    if(socialitesFile.is_open())
    {
        //checks to see if the file is open and is "good" and then puts it through a loop
        while(socialitesFile.good()&&socialitesFile.is_open())
        {
            string previousLine=line;
            getline(socialitesFile,line);
            
            if(line.find("****")!=-1&&previousLine.find("****")==-1)
            {
                tempVector.push_back(temp);
                temp.clearSocialite();
                socialite temp;
                countLine=1;
            }
            else if(line.find("****")!=-1&& previousLine.find("****")!=-1)
            {
                cout << "End of file" << endl;
                socialitesFile.close();
            }
            else
            {
                //checks to see what line it is on and then sets the specific object depending on the line
                if(countLine==1)
                {
                    temp.setFirstName(line);
                }
                else if(countLine==2)
                {
                    temp.setLastName(line);
                }
                else if(countLine==3)
                {
                    temp.setUserID(line);
                }
                else if(countLine==4)
                {
                    temp.setPicture(line);
                }
                else if(countLine==5)
                {
                    temp.setURL(line);
                }
                else if(countLine==6)
                {
                    temp.setSiteDescription(line);
                }
                //sets the cliques
                else if(countLine>6)
                {
                    if(line.find(" ")!=-1)
                    {
                        string cliqueTemps;
                        cliqueTemps = line.substr(line.find(" ")+1);
                        temp.setClique(cliqueTemps);
                    }
                    else
                    {
                       // cout << "Does not work" << endl;
                        temp.setClique(line);
                    }
                }
                countLine++;
            }
            
        }
        cout << "----------Read File End-------------" << endl << endl;
    }
    //end of the file
    else
    {
        cout << "Unable to open";
        vector<socialite> tempFalse;
        return tempFalse;
    }
    socialitesFile.ignore();
    return tempVector;
}
