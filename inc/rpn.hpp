#ifndef RPN_H
#define RPN_H

#include <string>

namespace RPN
{
    //Метод Calculate принимает выражение в виде строки и возвращает результат, в своей работе использует другие методы класса
    static Number Calculate(const std::string &input);

    //Метод, преобразующий входную строку с выражением в постфиксную запись
    static std::string GetExpression(std::string input);

    //Метод, вычисляющий значение выражения, уже преобразованного в постфиксную запись
    static Number Counting(std::string input);
}

#endif // RPN_H