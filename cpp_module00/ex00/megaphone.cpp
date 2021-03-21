/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 02:00:34 by kycho             #+#    #+#             */
/*   Updated: 2021/03/22 02:08:37 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_to_upper(const char *str)
{
	for (int i = 0; str[i]; i++)
	{
		char ch = str[i];
		if ('a' <= ch && ch <= 'z')
		{
			ch = ch - 'a' + 'A';
		}
		std::cout << ch;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		print_to_upper(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}
