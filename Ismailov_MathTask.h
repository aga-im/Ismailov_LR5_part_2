#ifndef ISMAILOV_MATHTASK_H_
#define ISMAILOV_MATHTASK_H_

#include <iostream>
#include <string>
using namespace std;

bool UserInput(string input) {
    if (input.empty()) return false;
    try {
    int number = stoi(input);
}   
    catch(...)
    {return false; }
    return true;
}
void EnterDigit(int& varLink, const string& label){
    string raw_input;
    cout << label << " = ";
    getline(cin,raw_input);
    while (!UserInput(raw_input)){
        cout<< label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}
int CalcOst(int NumberA, int NumberB){
    return NumberA % NumberB;
}
int CalcDel(int NumberA, int NumberB){
    return NumberA / NumberB;
#endif