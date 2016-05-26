#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>
//Part 1: 2*10^-6 seconds to run the code
//Part 2: 158.759 seconds to run the code
//Part 3: 563.387 seconds to run the code
//Part 4: 114.077 seconds to run the code
using namespace std;

void insertionSort(vector<string> & words);
void quickSort(vector<string> & words,int left, int right);
int main()
{
    vector<string> words;
    string fileName;
    
    clock_t start = clock();
    
    cout << "File name pls: ";
    cin >> fileName;
    
    ifstream input(fileName.c_str());
    
    string current_word = "";
    
    while (getline(input, current_word, '\n'))
    {
        words.push_back(current_word);
        
    }
    
    quickSort(words,0,words.size()-1);
    
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << endl;
    }
    
    input.close();
    
    clock_t end = clock();
    
    double time_diff = double(end - start) / CLOCKS_PER_SEC;
    
    cout << time_diff << endl;
}


void quickSort(vector<string> & words, int left, int right)
{
    int i=left, j=right;
    string temp;
    string pivot=words[(left+right)/2];
    
    while (i<=j)
    {
        while (words[i]<pivot)
        {
            i++;
        }
        while (words[j]>pivot)
        {
            j--;
        }
        if (i<=j)
        {
            temp=words[i];
            words[i]=words[j];
            words[j]=temp;
            i++;
            j--;
        }
    }
    
    if (left<j)
    {
        quickSort(words, left, j);
    }
    if (i < right)
    {
        quickSort(words, i, right);
    }
}


//void insertionSort(vector<string> & words)
//{
//    int j;
//    string temp;
//    
//    for (int i = 0; i < words.size(); i++)
//    {
//        j = i;
//        
//        while (j > 0 && words[j] < words[j - 1])
//        {
//            temp = words[j];
//            words[j] = words[j - 1];
//            words[j - 1] = temp;
//            j--;
//        }
//    }
//}