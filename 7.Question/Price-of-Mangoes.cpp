#include <iostream>

int mango(int quantity, int price)
{
	return (quantity - (quantity / 3)) * price;
}

int main() {
	std::cout << mango(3, 3) << std::endl;
}
