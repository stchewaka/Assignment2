#include <iostream>
#include <fstream>
#include "Function.h"

using namespace std;
int main() {
    ArrClass arrFun; 
    
    ifstream fin("numbers.txt");
    int arrNum[11]; //array size
    int newInt;

    while (fin.good()) { //reads text file

        for (int i = 0; i < 10; i++) {
            fin >> newInt;
            arrNum[i] = newInt;
        }
    }

    arrFun.printArray(arrNum); //reads in array from text file
    
    int numWanted; //variable for desired number to look for in array for the function
    
    cout << "What number are you searching?" << endl;
    cin >> numWanted;


    //modifying function
    int index, userChoice; 
    cout << "Which index are you changing? " << endl;
    cin >> index;
    
    cout << "What is your new number?" << endl;
    cin >> userChoice;
    
    arrFun.changeArr(arrNum, index, userChoice);
   
    //add number function
    int addNum; 
    
    cout << "What number do you want to add to the array?" << endl;
    cin >> addNum;
    
    arrFun.addInt(arrNum, addNum);

    //remove from array
    int newIndex; 
    
    cout << "Which index position do you want to remove? " << endl;
    cin >> newIndex;
    
    arrFun.removeIndex(arrNum, newIndex);
}