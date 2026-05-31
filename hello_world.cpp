#include <iostream>
#include <string>

// Основная функция: точка входа в программу
int main()
{
    // Переменная для хранения имени пользователя
    std::string name;
    
    // Запрос ввода от пользователя
    std::cout << "Enter your name: ";
    std::cin >> name;
    
    // Вывод приветствия
    std::cout << "Hello world from " << name << "!" << std::endl;
    
    return 0; // Успешное выполнение
}
