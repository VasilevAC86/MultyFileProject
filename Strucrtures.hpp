#pragma once

#include<iostream>

struct Person {
	std::string name = "noname";
	int age = 18;
	std::string job = "programmer";
	int salary = 50000;
};

// Вывод объекта структуры Person в консоль
void print_Person(const Person& P);
