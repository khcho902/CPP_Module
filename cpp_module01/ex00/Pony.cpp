#include "Pony.hpp"

Pony::Pony(std::string name) : name(name)
{
	std::cout << "=== Create " << name << " pony!! ===" << std::endl;
}

Pony::~Pony()
{
	std::cout << "=== Destroy " << name << " pony!! ===" << std::endl;
}

void Pony::greeting(void)
{
	std::cout << "Hi my name is " << name << "!" << std::endl;
}