/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 03:22:55 by kycho             #+#    #+#             */
/*   Updated: 2021/03/24 02:46:50 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
	void set_first_name(const std::string str);
	void set_last_name(const std::string str);
	void set_nickname(const std::string str);
	void set_login(const std::string str);
	void set_postal_address(const std::string str);
	void set_email_address(const std::string str);
	void set_phone_number(const std::string str);
	void set_birthday_date(const std::string str);
	void set_favorite_meal(const std::string str);
	void set_underwear_color(const std::string str);
	void set_darkest_secret(const std::string str);

	std::string get_first_name(void) const;
	std::string get_last_name(void) const;
	std::string get_nickname(void) const;
	std::string get_login(void) const;
	std::string get_postal_address(void) const;
	std::string get_email_address(void) const;
	std::string get_phone_number(void) const;
	std::string get_birthday_date(void) const;
	std::string get_favorite_meal(void) const;
	std::string get_underwear_color(void) const;
	std::string get_darkest_secret(void) const;
};

#endif
