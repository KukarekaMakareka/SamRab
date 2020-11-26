/*Случайные числа в диапазоне от -5 до 5 
разложить по двум массивам: в одни помещать 
только положительные, во второй - только 
отрицательные. Числа, равные нулю, игнорировать. 
Вывести на экран все сгенерированные случайные числа 
и элементы обоих массивов.*/

//Во время выполнения этого задания я жрала кислый лимон :/
//Но было вкусно

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include "Functions.h"
using namespace std;

/*string str1;
 int i = 0;
 while (getline(inFile, str1)) 
 {
    arr[i] = stoi(str1);
    i++;
 }*/

int main()
{
    setlocale(LC_ALL, "RUS");
    //===================================================|Ввод параметров
    cout << "Введите длину изначального массива: ";
    int sizeArray;
    cin >> sizeArray;
    int* array = new int[sizeArray];
    int sizeArrayMinus = 0;
    int sizeArrayPlus = 0;
    //=====================================================|Массив в файл
    arrayInFile(sizeArray);
    //=================================================|Из файла в массив
    arrayFromFile(sizeArray, array);
    //=============================================|Массив минусов в файл
    arrayMinusInFile(sizeArray, array, sizeArrayMinus);
    //=========================================|Из файла в массив минусов
    int* arrayMinus = new int[sizeArrayMinus];
    arrayMinusFromFile(sizeArray, array, sizeArrayMinus, arrayMinus);
    //==============================================|Массив плюсов в файл
    arrayPlusInFile(sizeArray, array, sizeArrayPlus);
    //==========================================|Из файла в массив плюсов
    int* arrayPlus = new int[sizeArrayPlus];
    arrayPlusFromFile(sizeArray, array, sizeArrayPlus, arrayPlus);
    //=======================================================|Вывод итога
    for (int i = 0; i < sizeArray; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < sizeArrayPlus; i++)
    {
        cout << arrayPlus[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < sizeArrayMinus; i++)
    {
        cout << arrayMinus[i] << ' ';
    }
    cout << endl;
    return 0;
}