//
//  tic.cpp
//  HW3
//
//  Created by Matthew Brower on 5/2/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include "tic.h"
using namespace std;

//The default constroctor that sets the starting board position in each spot in the array
tBoard::tBoard()
{
    string board[8][20];
    board[0][0]=" ";
    board[0][1]="|";
    board[0][2]=" ";
    board[0][3]=" ";
    board[0][4]="0";
    board[0][5]=" ";
    board[0][6]=" ";
    board[0][7]="|";
    board[0][8]=" ";
    board[0][9]=" ";
    board[0][10]="1";
    board[0][11]=" ";
    board[0][12]=" ";
    board[0][13]="|";
    board[0][14]=" ";
    board[0][15]=" ";
    board[0][16]="2";
    board[0][17]=" ";
    board[0][18]=" ";
    board[0][19]="|";
    
    board[1][0]=" ";
    board[1][1]="+";
    board[1][2]="-";
    board[1][3]="-";
    board[1][4]="-";
    board[1][5]="-";
    board[1][6]="-";
    board[1][7]="-";
    board[1][8]="-";
    board[1][9]="-";
    board[1][10]="-";
    board[1][11]="-";
    board[1][12]="-";
    board[1][13]="-";
    board[1][14]="-";
    board[1][15]="-";
    board[1][16]="-";
    board[1][17]="-";
    board[1][18]="-";
    board[1][19]="+";
    
    board[2][0]="0";
    board[2][1]="|";
    board[2][2]=" ";
    board[2][3]=" ";
    board[2][4]=" ";
    board[2][5]=" ";
    board[2][6]=" ";
    board[2][7]="|";
    board[2][8]=" ";
    board[2][9]=" ";
    board[2][10]=" ";
    board[2][11]=" ";
    board[2][12]=" ";
    board[2][13]="|";
    board[2][14]=" ";
    board[2][15]=" ";
    board[2][16]=" ";
    board[2][17]=" ";
    board[2][18]=" ";
    board[2][19]="|";
    
    board[3][0]=" ";
    board[3][1]="+";
    board[3][2]="-";
    board[3][3]="-";
    board[3][4]="-";
    board[3][5]="-";
    board[3][6]="-";
    board[3][7]="-";
    board[3][8]="-";
    board[3][9]="-";
    board[3][10]="-";
    board[3][11]="-";
    board[3][12]="-";
    board[3][13]="-";
    board[3][14]="-";
    board[3][15]="-";
    board[3][16]="-";
    board[3][17]="-";
    board[3][18]="-";
    board[3][19]="+";
    
    board[4][0]="1";
    board[4][1]="|";
    board[4][2]=" ";
    board[4][3]=" ";
    board[4][4]=" ";
    board[4][5]=" ";
    board[4][6]=" ";
    board[4][7]="|";
    board[4][8]=" ";
    board[4][9]=" ";
    board[4][10]=" ";
    board[4][11]=" ";
    board[4][12]=" ";
    board[4][13]="|";
    board[4][14]=" ";
    board[4][15]=" ";
    board[4][16]=" ";
    board[4][17]=" ";
    board[4][18]=" ";
    board[4][19]="|";
    
    board[5][0]=" ";
    board[5][1]="+";
    board[5][2]="-";
    board[5][3]="-";
    board[5][4]="-";
    board[5][5]="-";
    board[5][6]="-";
    board[5][7]="-";
    board[5][8]="-";
    board[5][9]="-";
    board[5][10]="-";
    board[5][11]="-";
    board[5][12]="-";
    board[5][13]="-";
    board[5][14]="-";
    board[5][15]="-";
    board[5][16]="-";
    board[5][17]="-";
    board[5][18]="-";
    board[5][19]="+";
    
    board[6][0]="2";
    board[6][1]="|";
    board[6][2]=" ";
    board[6][3]=" ";
    board[6][4]=" ";
    board[6][5]=" ";
    board[6][6]=" ";
    board[6][7]="|";
    board[6][8]=" ";
    board[6][9]=" ";
    board[6][10]=" ";
    board[6][11]=" ";
    board[6][12]=" ";
    board[6][13]="|";
    board[6][14]=" ";
    board[6][15]=" ";
    board[6][16]=" ";
    board[6][17]=" ";
    board[6][18]=" ";
    board[6][19]="|";
    
    board[7][0]=" ";
    board[7][1]="+";
    board[7][2]="-";
    board[7][3]="-";
    board[7][4]="-";
    board[7][5]="-";
    board[7][6]="-";
    board[7][7]="-";
    board[7][8]="-";
    board[7][9]="-";
    board[7][10]="-";
    board[7][11]="-";
    board[7][12]="-";
    board[7][13]="-";
    board[7][14]="-";
    board[7][15]="-";
    board[7][16]="-";
    board[7][17]="-";
    board[7][18]="-";
    board[7][19]="+";
    
    //prints out the board
    for(int i=0;i<20;i++)
    {
        cout << board[0][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board[1][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board[2][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board[3][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board[4][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board[5][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board[6][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board[7][i];
    }
    cout<<endl;
    
    //puts the board position into the board_ array
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<20;j++)
        {
            board_[i][j]=board[i][j];
        }
    }
   // symbol_=' ';
}



bool tBoard::move(symbol m, int x, int y)
{
    //does the movements of the postions
    if(x==0&&y==0)
    {
        //checks to see whoes moving
        if(m==X)
        {
            //checks to see if there is a move in the place
            if(board_[2][4]==" ")
            {
                //placees the x
                board_[2][4]="X";
                return true;
            }
        }
        if(m==O)
        {
            if(board_[2][4]==" ")
            {
                board_[2][4]="O";
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    else if (x==0 && y==1)
    {
        if(m==X)
        {
            if(board_[2][10]==" ")
            {
                board_[2][10]="X";
                return true;
            }
        }
        if(m==O)
        {
            if(board_[2][10]==" ")
            {
                board_[2][10]="O";
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    else if (x==0 && y==2)
    {
        if(m==X)
        {
            if(board_[2][16]==" ")
            {
                board_[2][16]="X";
                return true;
            }
        }
        if(m==O)
        {
            if(board_[2][16]==" ")
            {
                board_[2][16]="O";
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    else if(x==1&&y==0)
    {
        if(m==X)
        {
            if(board_[4][4]==" ")
            {
                board_[4][4]="X";
                return true;
            }
        }
        if(m==O)
        {
            if(board_[4][4]==" ")
            {
                board_[4][4]="O";
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    else if (x==1 && y==1)
    {
        if(m==X)
        {
            if(board_[4][10]==" ")
            {
                board_[4][10]="X";
                return true;
            }
        }
        if(m==O)
        {
            if(board_[4][10]==" ")
            {
                board_[4][10]="O";
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    else if (x==1 && y==2)
    {
        if(m==X)
        {
            if(board_[4][16]==" ")
            {
                board_[4][16]="X";
                return true;
            }
        }
        if(m==O)
        {
            if(board_[4][16]==" ")
            {
                board_[4][16]="O";
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    else if(x==2&&y==0)
    {
        if(m==X)
        {
            if(board_[6][4]==" ")
            {
                board_[6][4]="X";
                return true;
            }
        }
        if(m==O)
        {
            if(board_[6][4]==" ")
            {
                board_[6][4]="O";
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    else if (x==2 && y==1)
    {
        if(m==X)
        {
            if(board_[6][10]==" ")
            {
                board_[6][10]="X";
                return true;
            }
        }
        if(m==O)
        {
            if(board_[6][10]==" ")
            {
                board_[6][10]="O";
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    else if (x==2 && y==2)
    {
        if(m==X)
        {
            if(board_[6][16]==" ")
            {
                board_[6][16]="X";
                return true;
            }
        }
        if(m==O)
        {
            if(board_[6][16]==" ")
            {
                board_[6][16]="O";
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    return false;
}

bool tBoard::game_over()
{
    //checks to see the winner
    if(winner()==X)
    {

        return true;
    }
    else if(winner()==O)
    {
        return true;
    }
    else if(winner()==BLANK&&(board_[2][4]!=" "&&board_[2][10]!=" "&&board_[2][16]!=" "&&board_[4][4]!=" "&&board_[4][10]!=" "&&board_[4][16]!=" "&&board_[6][4]!=" "&&board_[6][10]!=" "&&board_[6][16]!=" "))
    {
        return true;
    }
    else
    {
        return false;
    }
}

string tBoard::getBoard() const
{
    //prints out the board
    for(int i=0;i<20;i++)
    {
        cout << board_[0][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board_[1][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board_[2][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board_[3][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board_[4][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board_[5][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board_[6][i];
    }
    cout<<endl;
    for(int i=0;i<20;i++)
    {
        cout << board_[7][i];
    }
    cout<<endl;
    return "";
}

symbol tBoard::winner()
{
    //checks to see who won for hte conditions
    symbol condition=BLANK;
    if((board_[2][4]=="X"&&board_[2][10]=="X"&&board_[2][16]=="X")||(board_[2][4]=="O"&&board_[2][10]=="O"&&board_[2][16]=="O"))
    {

        if(board_[2][4]=="X")
        {

           condition=X;
        }
        else
        {
            condition=O;
        }
        
    }
    else if((board_[4][4]=="X"&&board_[4][10]=="X"&&board_[4][16]=="X")||(board_[4][4]=="O"&&board_[4][10]=="O"&&board_[4][16]=="O"))
    {
        if(board_[4][4]=="X")
        {
    
            condition=X;
        }
        else
        {
            condition=O;
        }
        
    }
    else if((board_[6][4]=="X"&&board_[6][10]=="X"&&board_[6][16]=="X")||(board_[6][4]=="O"&&board_[6][10]=="O"&&board_[6][16]=="O"))
    {
        if(board_[6][4]=="X")
        {
        
            condition=X;
        }
        else
        {
            condition=O;
        }
        
    }
    else if((board_[2][4]=="X"&&board_[4][4]=="X"&&board_[6][4]=="X")||(board_[2][4]=="O"&&board_[4][4]=="O"&&board_[6][4]=="O"))
    {
        if(board_[2][4]=="X")
        {
            cout<<"4";
            condition=X;
        }
        else
        {
            condition=O;
        }
        
    }
    else if((board_[2][10]=="X"&&board_[4][10]=="X"&&board_[6][10]=="X")||(board_[2][10]=="O"&&board_[4][10]=="O"&&board_[6][10]=="O"))
    {
        if(board_[2][10]=="X")
        {
        
            condition=X;
        }
        else
        {
            condition=O;
        }
    }
    else if((board_[2][16]=="X"&&board_[4][16]=="X"&&board_[6][16]=="X")||(board_[2][16]=="O"&&board_[4][16]=="O"&&board_[6][16]=="O"))
    {
        if(board_[2][16]=="X")
        {
    
            condition=X;
        }
        else
        {
            condition=O;
        }
        
    }
    else if((board_[2][4]=="X"&&board_[4][10]=="X"&&board_[6][16]=="X")||(board_[2][4]=="O"&&board_[4][10]=="O"&&board_[6][16]=="O"))
    {
        if(board_[2][4]=="X")
        {
        
            condition=X;
        }
        else
        {
            condition=O;
        }
        
    }
    else if((board_[2][16]=="X"&&board_[4][10]=="X"&&board_[6][4]=="X")||(board_[2][16]=="O"&&board_[4][10]=="O"&&board_[6][4]=="O"))
    {
        if(board_[2][16]=="X")
        {
            condition=X;
        }
        else
        {
            condition=O;
        }
        
    }
    else if(board_[2][4]!=" "&&board_[2][10]!=" "&&board_[2][16]!=" "&&board_[4][4]!=" "&&board_[4][10]!=" "&&board_[4][16]!=" "&&board_[6][4]!=" "&&board_[6][10]!=" "&&board_[6][16]!=" ")
    {
        //cout<<"Blank";
        condition=BLANK;
    }
    return condition;
}
//prints out the board
ostream & operator<<(ostream& os, const tBoard& myTable)
{

    os << myTable.getBoard();
    return os;
}