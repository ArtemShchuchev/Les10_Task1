#include <iostream> // ������� - cout
#include <conio.h>  // ����������, ����������� ��� ������ ��������� getch();

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");   // ����� ������� �����
    system("chcp 1251");            // ����������� ��������� �������
    std::system("cls");

    std::cout << "������ 1. ���������� ������\n";
    std::cout << "---------------------------\n" << std::endl;
	
	std::string userName;
	std::cout << "������� ���: "; std::cin >> userName;
	std::cout << "������������, " << userName << "!" << std::endl << std::endl;
	
    system("pause"); // ������� �������� ������
    
    return 0;
}