/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 03:44:00 by kycho             #+#    #+#             */
/*   Updated: 2021/03/24 02:50:24 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

# define PHONE_BOOK_SIZE 8
# define SUCCESS 1
# define ERROR -1

class PhoneBook
{
private:
	int num_of_contact;
	Contact contact[PHONE_BOOK_SIZE];
	
	std::string truncate(const std::string str) const;

public:
	PhoneBook(void);
	int get_num_of_contact(void) const;
	int add_contact(void);
	void overview_contacts(void) const;
	void view_contact_detail(const int idx) const;
};

#endif