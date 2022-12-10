#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Fruit {
    string name {};
    string color {};
}
class Apple : public Fruit { 
    double fiber {};

}
class Banana : public Fruit {

}

int main()
{
	const Apple a{ "Red delicious", "red", 4.2 };
	std::cout << a << '\n';

	const Banana b{ "Cavendish", "yellow" };
	std::cout << b << '\n';

	return 0;
}
