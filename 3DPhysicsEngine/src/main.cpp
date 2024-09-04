#include <iostream>

#include "Vector3.hpp"


int main() {
	Vector3 vector(1., 2., 3.);
	std::cout << "vector takes " << sizeof(vector) << " bytes in memory" << std::endl;

	return 0;
}