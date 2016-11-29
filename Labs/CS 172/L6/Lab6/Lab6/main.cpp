//
//  main.cpp
//  Lab6
//
//  Created by Matthew Brower on 5/6/16.
//  Copyright © 2016 Matthew Brower. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

bool find(const vector<string>& v, string word, int start, int stop);

int main()
{
    
    /*string file;
     cin >> file;*/
    
    ifstream input("english_words.txt");
    
    vector<string> words;
    string word;
    
    while (getline(input, word))
    {
        words.push_back(word);
    }
    
    input.close();
    
    ifstream modest("ModestProposal.txt");
    
    vector<string> mwords;
    string mword;
    
    while (cin >> mword)
    {
        mwords.push_back(mword);
    }
    
    modest.close();
    
    vector<string>::iterator start = words.begin();
    vector<string>::iterator end = words.end();
    
    
    sort(start, end);
    
    for (int i = 0; i < mwords.size(); i++)
    {
        string current_word = mwords[i];
        bool isSpellTrue = find(words, mwords[i], 0, words.size() - 1);
        if (!isSpellTrue)
        {
            cout << mwords[i] << endl;
        }
    }
    return 0;
}

bool find(const vector<string>& v, string word, int start, int stop)
{
    if (v[start] == v[stop])
    {
        if (v[start] == word)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (v[start] > v[stop])
    {
        return false;
    }
    else
    {
        int mid = (start + stop) / 2;
        
        
        if (word == v[mid])
        {
            return true;
        }
        
        if (word < v[mid])
        {
            return find(v, word, start, mid-1);
        }
        else 
        {
            return find(v, word, mid+1, stop);
        }
        
        
    }
}
