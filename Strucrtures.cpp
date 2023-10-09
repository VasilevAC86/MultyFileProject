#include "Strucrtures.hpp"

void print_Person(const Person& P) {
	std::cout << "Name is: " << P.name << std::endl;
	std::cout << "Age is: " << P.age << std::endl;
	std::cout << "Job is: " << P.job << std::endl;
	std::cout << "Salary is: " << P.salary << std::endl;
}
