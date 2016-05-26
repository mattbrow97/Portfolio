//Matt Brower, Jose Arguelles, Sam Prasad, Rickey Mangerry

#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool vector_contains(string s, vector<string> &words);
void swap(vector<string> & words, int x, int y);
void sort(vector<string> & words);



int main()
{
    vector<string> words;
    
    ifstream stream("ModestProposal.txt");
    ofstream output("SortedModestProposal.txt");
    
    string current_word = "";
    
    while (stream >> current_word)
    {
        if (!vector_contains(current_word, words))
            words.push_back(current_word);
    }
    
    cout << words.size() << endl;
    
    sort(words);
    
    for (int i = 0; i < words.size(); i++)
    {
        output << words[i] << endl;
    }
    
    stream.close();
}

bool vector_contains(string s, vector<string> &words)
{
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i] == s)
            return true;
    }
    return false;
}

void swap(vector<string> & words, int x, int y)
{
    string temp;
    temp = words[x];
    words[x] = words[y];
    words[y] = temp;
}

void sort(vector<string> & words)
{
    int counter = 0;
    for (int i = 0; i < words.size(); i++)
    {
        if (i != words.size()-1)
        {
            if (words[i] > words[i + 1])
            {
                swap(words, i, i + 1);
                counter++;
            }
        }
    }
    if (counter != 0)
    {
        sort(words);
    }
}
