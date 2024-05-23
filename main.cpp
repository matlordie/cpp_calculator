
#include <iostream>

int main()
{
    // get value varriables
    int first;
    char operand;
    int second;
    int result;

    // get there inputs
    std::cout << "please input first digit: ";
    std::cin >> first;
    std::cout << "please input operator: ";
    std::cin >> operand;
    std::cout << "please input second digit: ";
    std::cin >> second;

    switch (operand)
    {
    case '+':
        result = first + second;
        std::cout << first << " + " << second << " = " << result << std::endl;
        break;
    case '-':
        result = first - second;
        std::cout << first << " - " << second << " = " << result << std::endl;
        break;
    case '/':
        result = first / second;
        std::cout << first << " / " << second << " = " << result << std::endl;
        break;
    case '*':
        result = first * second;
        std::cout << first << " * " << second << " = " << result << std::endl;
        break;
    default:
        std::cout << "Please use any of the following operand (+,-,/,*) \n";
        break;
    }
}

