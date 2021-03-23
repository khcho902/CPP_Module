/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 03:22:55 by kycho             #+#    #+#             */
/*   Updated: 2021/03/22 04:08:16 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

public:
	void set_first_name(std::string str);
	void set_last_name(std::string str);
	void set_nickname(std::string str);
	void set_login(std::string str);
	void set_postal_address(std::string str);
	void set_email_address(std::string str);
	void set_phone_number(std::string str);
	void set_birthday_date(std::string str);
	void set_favorite_meal(std::string str);
	void set_underwear_color(std::string str);
	void set_darkest_secret(std::string str);

	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_login(void);
	std::string get_postal_address(void);
	std::string get_email_address(void);
	std::string get_phone_number(void);
	std::string get_birthday_date(void);
	std::string get_favorite_meal(void);
	std::string get_underwear_color(void);
	std::string get_darkest_secret(void);
};

#endif
