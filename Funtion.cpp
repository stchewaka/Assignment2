#include <iostream>
#include "Function.h"

using namespace std;

//compares with rest of code to be sure that function working

void ArrClass::printArray(int Arr[]) { 
    cout << "Current Array: ";
    for (int i = 0; i < 10; i++) {
        cout << Arr[i] << "  ";
    }
    cout << endl;
    cout << endl;
}

void ArrClass::addInt(int Arr[], int numChoice) {
    //takes number from user and adds it to end of array

   //added new number to last position in array
    Arr[10] = numChoice;


    for (int i = 0; i < 11; i++) {
        cout << Arr[i] << "  ";
    }
    cout << endl;
}

void ArrClass::searchInt(int Arr[], int numWant) {
    //takes a number from user and checks array for the number

    for (int i = 0; i < 10; i++) {

        if (Arr[i] == numWant) {

            cout << "Desired number found at index: " << i + 1 << endl << endl;
            break;
        }
        if (i == 10-1 && Arr[i] != numWant) {
     
            cout << "Number not in array" << endl << endl;
        }
    }
}


void ArrClass::changeArr(int Arr[], int indexChoice, int newNum) {


    int oldNum = Arr[indexChoice - 1];

    Arr[indexChoice - 1] = newNum;
    //replaces old number at index to the new number

    cout << "Number at index " << indexChoice << " before the changes: " << oldNum << endl;

    cout << "Array with new number: " << indexChoice << endl;

    //loop shoiwing new num
    for (int i = 0; i < 10; i++) {
        cout << Arr[i] << "  ";
    }
    cout << endl;

}

void ArrClass::removeIndex(int Arr[], int indexChoice) {

    //deletes the number from the array

    for (int i = 0; i < 11; i++) {
        if (i >= indexChoice - 1) {
            Arr[i] = Arr[i + 1];
        }
    }
    cout << " New array Group: ";
    for (int i = 0; i < 10; i++) {
        cout << Arr[i] << "  ";
    }
    cout << endl;

    //the arguments for professional are vacation days, and how much they spend on insurance monthly (500 being the average an employee spends on health insurance)
    Professional p(20, 500);
    //the arguments for nonprofessional are hours worked in a week, and the percentage of their weekly salary that goes to insurance (11.6%  being the average an employee spends on health insurance)
    Nonprofessional n(38, 11.6);
    cout << "A professional's salary is] = " << p.getSalary() / 4 << " dollars per week but they are paid $" << p.getSalary() << " dollars monthly." << endl;
    cout << "A professional insurance =" << p.getInsurance() << " dollars to health insurance per month." << endl;
    cout << "A professional vacations = " << p.getVacation() << " vacation hours week, which is calculated to be about " << p.getVacation() * 52 / 8 << " vacation days per year as agreed upon with their employer" << endl;
    cout << "Nonprofessional's salary is =" << n.getSalary() << " dollars per week since they are paid hourly." << endl;
    cout << "Nonprofessional insurance" << n.getInsurance() << " dollars to health insurance per week." << endl;
    cout << "Nonprofessional vacation " << n.getVacation() << " vacation hours per week, which roughly equals to 5 vacation days (days off work days) per year." << endl;
   
}