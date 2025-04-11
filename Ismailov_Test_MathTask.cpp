#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"

#include "Ismailov_MathTask.h"

using namespace cute;

// Тест на пустую строку
void testUserInput_Empty() 
{
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

// Тест на строку, содержащую только буквы
void testUserInput_Letter() 
{
    string str = "a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

// Тест на строку с цифрами и буквами
void testUserInput_DigitLetterValue() 
{
    string str = "5a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testIsFirstNumberGreater() 
{
    string first = "100";
    string second = "50";
    bool expected = true;
    bool actual = isFirstNumberGreater(first, second);
    ASSERT_EQUAL(expected, actual);
}

int main() 
{
    suite s;
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_DigitLetterValue));
    s.push_back(CUTE(testIsFirstNumberGreater));

    ide_listener<> listener;
    makeRunner(listener)(s, "All Rectangle Tests"); // Исправили опечатку

    return 0;
}