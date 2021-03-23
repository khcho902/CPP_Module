/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 03:35:56 by kycho             #+#    #+#             */
/*   Updated: 2021/03/22 03:52:13 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_first_name(std::string str) { first_name = str; };
void Contact::set_last_name(std::string str) { last_name = str; };
void Contact::set_nickname(std::string str) { nickname = str; };
void Contact::set_login(std::string str) { login = str; };
void Contact::set_postal_address(std::string str) { postal_address = str; };
void Contact::set_email_address(std::string str) { email_address = str; };
void Contact::set_phone_number(std::string str) { phone_number = str; };
void Contact::set_birthday_date(std::string str) { birthday_date = str; };
void Contact::set_favorite_meal(std::string str) { favorite_meal = str; };
void Contact::set_underwear_color(std::string str) { underwear_color = str; };
void Contact::set_darkest_secret(std::string str) { darkest_secret = str; };

std::string Contact::get_first_name(void) { return (first_name); };
std::string Contact::get_last_name(void) { return (last_name); };
std::string Contact::get_nickname(void) { return (nickname); };
std::string Contact::get_login(void) { return (login); };
std::string Contact::get_postal_address(void) { return (postal_address); };
std::string Contact::get_email_address(void) { return (email_address); };
std::string Contact::get_phone_number(void) { return (phone_number); };
std::string Contact::get_birthday_date(void) { return (birthday_date); };
std::string Contact::get_favorite_meal(void) { return (favorite_meal); };
std::string Contact::get_underwear_color(void) { return (underwear_color); };
std::string Contact::get_darkest_secret(void) { return (darkest_secret); };
