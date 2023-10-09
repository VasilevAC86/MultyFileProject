# include <iostream>
#include"Functions.h"
#include"Strucrtures.hpp"
#include"Data.hpp"
#include"DataBase.hpp"
#include<string>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	
	// Использование данных из других данных
	/*std::cout << sum(10,5.5) << std::endl;
	range(7, 12);
	double array[5]{ 0.1,2,0,-58,5.5 };
	print_arr(array, 5);

	Person p1;
	print_Person(p1);
	
	std::cout << "Pi = " << _PI << std::endl;
	std::cout << "A = " << _A << std::endl;
	print_arr(_ARR, _SIZE)*/;

	// Задание "База данных"

	short operatioin;
	do {
		std::cout << "Выберите действие:\n";
		std::cout << "1. Добавить запись\n";
		std::cout << "2. Удалить запись\n";
		std::cout << "3. Вывести таблицу\n";
		std::cout << "4. Завершить работу\n";
		std::cout << "Ввод -> ";
		std::cin >> operatioin;
		switch (operatioin) {
		case 1: {
			std::string name;
			std::cout << "Введите наименование товара -> ";
			std::cin.ignore();
			std::getline(std::cin, name);
			int price;
			std::cout << "Введите стоимость товара -> ";
			std::cin >> price;
			int quantity;
			std::cout << "Введите остаток на складе -> ";
			std::cin >> quantity;
			db_app(name, price, quantity);
			break;
		}
		case 2: {

			break;
		}
		case 3:
			std::cout << "Наименование\tЦена\tОстаток на складе\n";
			print_full_bd();
			break;
		case 4:
			break;
		default:
			std::cout << "Такой операции нет.\n";
		}		
			
	} while (operatioin != 4);

	clear_db();
	std::cout << "Работа завершена.\n";

	return 0;
}