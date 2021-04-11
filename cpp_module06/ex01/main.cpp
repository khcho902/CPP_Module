/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 00:58:12 by kycho             #+#    #+#             */
/*   Updated: 2021/04/11 21:56:16 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void * serialize(void)
{
	srand(clock());

	std::string alnum = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int alnumLen = alnum.length();

	char* ptr = new char[8 * sizeof(char) + sizeof(int) + 8 * sizeof(char)];

	for (int i = 0; i < 8; i++)
	{
		ptr[i] = alnum[rand() % alnumLen];
		ptr[i + 8 * sizeof(char) + sizeof(int)] = alnum[rand() % alnumLen];
	}

	*reinterpret_cast<int *>(ptr + (sizeof(char) * 8)) = std::rand();

	return reinterpret_cast<void *>(ptr);
}

Data * deserialize(void * raw)
{
	Data* data = new Data;

	data->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	data->n = *reinterpret_cast<int *>(reinterpret_cast<char*>(raw) + 8);
	data->s2 = std::string(reinterpret_cast<char *>(reinterpret_cast<char*>(raw) + 8 + sizeof(int)), 8);

	return data;
}

int main(void)
{
	void *ptr = serialize();

	char *cptr = reinterpret_cast<char *>(ptr);

	for(int i = 0; i < 8; i++)
		std::cout << cptr[i];
	std::cout << std::endl;

	std::cout << *reinterpret_cast<int *>(cptr + 8) << std::endl;

	for(int i = 0; i < 8; i++)
		std::cout << cptr[i + sizeof(char) * 8 + sizeof(int)];
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;

	Data* data = deserialize(ptr);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;

	delete reinterpret_cast<char *>(ptr);
	delete data;

	return 0;
}
