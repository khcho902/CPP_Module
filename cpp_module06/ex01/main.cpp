/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 00:58:12 by kycho             #+#    #+#             */
/*   Updated: 2021/04/12 00:47:03 by kycho            ###   ########.fr       */
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

	char* ptr;
	std::string s1 = "";
	std::string s2 = "";
	int n;

	std::string alnum = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int alnumLen = alnum.length();

	for (int i = 0; i < 8; i++)
	{
		s1 += alnum[rand() % alnumLen];
		s2 += alnum[rand() % alnumLen];
	}
	n = rand();

	/*
	std::cout << "---in serialize-----" << std::endl;
	std::cout << s1 << std::endl;
	std::cout << n << std::endl;
	std::cout << s2 << std::endl;
	std::cout << "--------------------" << std::endl;
	*/

	ptr = new char[sizeof(s1) + sizeof(n) + sizeof(s2)];
	memcpy(ptr, &s1, sizeof(s1));
	memcpy(ptr + sizeof(s1), &n, sizeof(n));
	memcpy(ptr + sizeof(s1) + sizeof(n), &s2, sizeof(s2));

	return reinterpret_cast<void *>(ptr);
}

Data * deserialize(void * raw)
{
	Data* data = new Data;

	data->s1 = std::string(reinterpret_cast<char *>(raw));
	data->n = *reinterpret_cast<int *>(reinterpret_cast<char*>(raw) + sizeof(data->s1));
	data->s2 = std::string(reinterpret_cast<char *>(reinterpret_cast<char*>(raw) + sizeof(data->s1) + sizeof(int)));

	return data;
}

int main(void)
{
	void *ptr = serialize();

	Data* data = deserialize(ptr);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;

	delete reinterpret_cast<char *>(ptr);
	delete data;

	return 0;
}
