#include <iostream>
#include "Ismailov_MathTask.h"

using namespace std;

int main()
{
    int NumberA = 0, NumberB = 0;
    EnterDigit(NumberA, "Input height A");
    EnterDigit(NumberB, "Input height B");
    int RecangleArea = CalcOst(NumberA,NumberB);
    cout<<"Ostatok = "<< RecangleArea <<endl;
    int Recangle = CalcDel(NumberA,NumberB);
    cout<<"Delitel = "<< Recangle <<endl;
}