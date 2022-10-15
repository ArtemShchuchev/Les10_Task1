#include <iostream> // консоль - cout
#include <conio.h>  // библиотека, необходимая для работы оператора getch();

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");   // задаём русский текст
    system("chcp 1251");            // настраиваем кодировку консоли
    std::system("cls");

    std::cout << "Задача 1. Простейший проект\n";
    std::cout << "---------------------------\n" << std::endl;
	
	std::string userName;
	std::cout << "Введите имя: "; std::cin >> userName;
	std::cout << "Здравствуйте, " << userName << "!" << std::endl << std::endl;
	
    system("pause"); // Команда задержки экрана
    
    return 0;
}