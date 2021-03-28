/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 23:36:41 by kycho             #+#    #+#             */
/*   Updated: 2021/03/28 19:48:41 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace_all(std::string &str, const std::string& from, const std::string& to){
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos)
    {		
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong input!" << std::endl;
		return (1);
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "Wrong input!" << std::endl;
		return (1);
	}

	std::ifstream in(filename);
	std::string content;

	if (in.is_open())
	{
		in.seekg(0, std::ios::end);
		int size = in.tellg();
		content.resize(size);
		in.seekg(0, std::ios::beg);
		in.read(&content[0], size);

		replace_all(content, s1, s2);

		std::ofstream out(filename + ".replace");
		if (out.is_open())
			out << content;
		else
			std::cout << "Can't open this file : '" << filename + ".replace" << "'" << std::endl;
	}
	else
	{
		std::cout << "No sucho file : '" << filename << "'" << std::endl;
	}
	return (0);
}