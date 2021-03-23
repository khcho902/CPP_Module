/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 04:09:05 by kycho             #+#    #+#             */
/*   Updated: 2021/03/24 02:50:18 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

PhoneBook::PhoneBook(void) : num_of_contact(0) {};

int PhoneBook::get_num_of_contact(void) const
{
	return (num_of_contact);
}

int PhoneBook::add_contact(void)
{
	int idx;
	std::string input;

	if (num_of_contact == 8)
	{
		std::cout << "The PhoneBook is full!" << std::endl;
		return (SUCCESS);
	}
	
	idx = num_of_contact++;
	
	std::cout << "First Name : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_first_name(input);

	std::cout << "Last Name : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_last_name(input);

	std::cout << "Nickname : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_nickname(input);

	std::cout << "Login : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_login(input);

	std::cout << "Postal Address : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_postal_address(input);

	std::cout << "Email Address : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_email_address(input);

	std::cout << "Phone Number : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_phone_number(input);

	std::cout << "Birthday Date : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_birthday_date(input);

	std::cout << "Favorite Meal : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_favorite_meal(input);

	std::cout << "Underwear Color : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_underwear_color(input);

	std::cout << "Darkest Secret : ";
	if (!(std::getline(std::cin, input)))
		return (ERROR);
	contact[idx].set_darkest_secret(input);

	return (SUCCESS);
}

std::string PhoneBook::truncate(const std::string str) const
{
	std::string truncated;

	if (str.length() > 10)
		truncated = str.substr(0, 9) + ".";
	else
		truncated = str;
	return (truncated);
}

void PhoneBook::overview_contacts(void) const
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl; 
	std::cout << "-------------------------------------------" << std::endl;

	for(int i = 1; i <= num_of_contact; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(contact[i - 1].get_first_name()) << "|";
		std::cout << std::setw(10) << truncate(contact[i - 1].get_last_name()) << "|";
		std::cout << std::setw(10) << truncate(contact[i - 1].get_nickname()) << std::endl;
	}
}

void PhoneBook::view_contact_detail(const int idx) const
{
	Contact c = contact[idx - 1];

	std::cout <<  "First Name : " << c.get_first_name() << std::endl;
	std::cout << "Last Name : " << c.get_last_name() << std::endl;
	std::cout << "Nickname : " << c.get_nickname() << std::endl;
	std::cout << "Login : " << c.get_login() << std::endl;
	std::cout << "Postal Address : " << c.get_postal_address() << std::endl;
	std::cout << "Email Address : " << c.get_email_address() << std::endl;
	std::cout << "Phone Number : " << c.get_phone_number() << std::endl;
	std::cout << "Birthday Date : " << c.get_birthday_date() << std::endl;
	std::cout << "Favorite Meal : " << c.get_favorite_meal() << std::endl;
	std::cout << "Underwear Color : " << c.get_underwear_color() << std::endl;
	std::cout << "Darkest Secret : " << c.get_darkest_secret() << std::endl;	
}
