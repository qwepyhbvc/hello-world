#include <iostream>
#include <string>

// Main function: entry point of the program
// Основная функция: точка входа в программу
int main()
{
    // Variable to store user name
    // Переменная для хранения имени пользователя
    std::string name;
    
    // Prompt user for input
    // Запрос ввода от пользователя
    std::cout << "Enter your name: ";
    std::cin >> name;
    
    // Output greeting message
    // Вывод приветствия
    std::cout << "Hello world from " << name << "!" << std::endl;
    
    return 0; // Successful execution / Успешное выполнение
}
