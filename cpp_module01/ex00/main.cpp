#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *heap_pony = new Pony("heap");
	heap_pony->greeting();
	delete heap_pony;
}

void ponyOnTheStack(void)
{
	Pony stack("stack");
	stack.greeting();
}

int main(void)
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return (0);
}