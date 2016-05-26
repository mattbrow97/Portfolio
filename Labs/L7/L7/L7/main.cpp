//
//  main.cpp
//  L7
//
//  Created by Matthew Brower on 5/13/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
void make_function_table(string title,int (*f)(int));
int square(int a);
int cube(int a);
int two_n(int n);
int factorial(int n);
int fib(int n);
int perrin(int n);

int two_n(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (2*two_n(n-1));
    }
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int perrin(int n)
{
    if(n==0)
    {
        return 3;
    }
    else if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 2;
    }
    else
    {
        return perrin(n-2)+perrin(n-3);
    }
}

int square(int a)
{
    return a*a;
}
int cube(int a)
{
    return a*a*a;
}
void make_function_table(string title,int (*f)(int))
{
    cout << title<<endl;
    for(int i=0;i<40;i++)
    {
        cout<< i<<"|";
        cout << setw(12) << f(i) << endl;
    }
    cout <<"\n\n\n\n\n" <<endl;
}


int main()
{
    vector <int (*)(int)> functions;
    vector <string> titles;
    functions.push_back(square);
    functions.push_back(cube);
    functions.push_back(two_n);
    functions.push_back(factorial);
    functions.push_back(fib);
    functions.push_back(perrin);
    titles.push_back("Testing Function square");
    titles.push_back("Testing Function cubed");
    titles.push_back("Testing Function two_n");
    titles.push_back("Testing Function factorial");
    titles.push_back("Testing Function fib");
    titles.push_back("Testing Function perrin");
    for(int i=0;i<titles.size();i++)
    {
        make_function_table(titles[i], functions[i]);
    }
    
    
    
    
}
