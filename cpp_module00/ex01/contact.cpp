/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 03:35:56 by kycho             #+#    #+#             */
/*   Updated: 2021/03/24 02:45:17 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_first_name(const std::string str) { first_name = str; };
void Contact::set_last_name(const std::string str) { last_name = str; };
void Contact::set_nickname(const std::string str) { nickname = str; };
void Contact::set_login(const std::string str) { login = str; };
void Contact::set_postal_address(const std::string str) { postal_address = str; };
void Contact::set_email_address(const std::string str) { email_address = str; };
void Contact::set_phone_number(const std::string str) { phone_number = str; };
void Contact::set_birthday_date(const std::string str) { birthday_date = str; };
void Contact::set_favorite_meal(const std::string str) { favorite_meal = str; };
void Contact::set_underwear_color(const std::string str) { underwear_color = str; };
void Contact::set_darkest_secret(const std::string str) { darkest_secret = str; };

std::string Contact::get_first_name(void) const { return (first_name); };
std::string Contact::get_last_name(void) const { return (last_name); };
std::string Contact::get_nickname(void) const { return (nickname); };
std::string Contact::get_login(void) const { return (login); };
std::string Contact::get_postal_address(void) const { return (postal_address); };
std::string Contact::get_email_address(void) const { return (email_address); };
std::string Contact::get_phone_number(void) const { return (phone_number); };
std::string Contact::get_birthday_date(void) const { return (birthday_date); };
std::string Contact::get_favorite_meal(void) const { return (favorite_meal); };
std::string Contact::get_underwear_color(void) const { return (underwear_color); };
std::string Contact::get_darkest_secret(void) const { return (darkest_secret); };
