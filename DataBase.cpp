#include "DataBase.hpp"

Product* _DB = nullptr;
int _DB_SIZE = 0;


void db_app(std::string name, int price, int quantity) {
    Product tmp{ name, price, quantity };
    db_app(tmp);
}

void db_app(const Product& P) {
    if (_DB == nullptr) {
        _DB = new Product[1];
        _DB[0] = P;
        _DB_SIZE = 1;
        return;
    }
    Product* tmp = new Product[_DB_SIZE + 1];
    for (int i = 0; i < _DB_SIZE; i++)
        tmp[i] = _DB[i];
    delete[] _DB;
    _DB = tmp;
    _DB[_DB_SIZE] = P;
    _DB_SIZE++;
}

void print_product(const Product& P) {
    std::cout << P.name << '\t' << P.price << '\t' << P.quantity << std::endl;
}

void print_full_bd() {
    for (int i = 0; i < _DB_SIZE; i++)
        print_product(_DB[i]);
}

bool remove_product(int index) {
    return false;
}

void clear_db() {
    delete[] _DB;
    _DB = nullptr;
    _DB_SIZE = 0;
}
