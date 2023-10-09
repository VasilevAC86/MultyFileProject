#pragma once
#include<iostream>

struct Product {
	std::string name;
	double price = 0;
	int quantity = 0;
};



void db_app(std::string name, int price, int quantity);
void db_app(const Product& P);

void print_product(const Product& P);
void print_full_bd();

bool remove_product(int index);

void clear_db();
