#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

void arrayInFile(int sizeArray)
{
    ofstream outfile;
    srand(time(0));
    for (int i = 0; i < sizeArray; i++)
    {
        outfile << (rand() % (5 - (-5) + 1) + (-5)) << endl;
    }
    outfile.close();
}

void arrayFromFile(int sizeArray, int array[])
{
    ifstream infile;
    infile.open("array.txt");
    string str1;
    int i = 0;
    while (getline(infile, str1))
    {
        array[i] = stoi(str1);
        i++;
    }
    infile.close();
}

void arrayMinusInFile(int sizeArray, int array[], int& sizeArrayMinus)
{
    ofstream outfile;
    outfile.open("arrayMinus.txt");
    for (int i = 0; i < sizeArray; i++)
    {
        if (array[i] < 0)
        {
            outfile << array[i] << endl;
            sizeArrayMinus++;
        }
    }
    outfile.close();
}

void arrayMinusFromFile(int sizeArray, int array[], int& sizeArrayMinus, int arrayMinus[])
{
    ifstream infile;
    infile.open("arrayMinus.txt");
    int i = 0;
    string str1;
    while (getline(infile, str1))
    {
        arrayMinus[i] = stoi(str1);
        i++;
    }
    infile.close();
}

void arrayPlusInFile(int sizeArray, int array[], int& sizeArrayPlus)
{
    ofstream outfile;
    outfile.open("arrayPlus.txt");
    for (int i = 0; i < sizeArray; i++)
    {
        if (array[i] > 0)
        {
            outfile << array[i] << endl;
            sizeArrayPlus++;
        }
    }
    outfile.close();
}

void arrayPlusFromFile(int sizeArray, int array[], int& sizeArrayPlus, int arrayPlus[])
{
    ifstream infile;
    infile.open("arrayPlus.txt");
    int i = 0;
    string str1;
    while (getline(infile, str1))
    {
        arrayPlus[i] = stoi(str1);
        i++;
    }
    infile.close();
}