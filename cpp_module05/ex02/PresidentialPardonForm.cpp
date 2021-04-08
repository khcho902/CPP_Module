/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:56:31 by kycho             #+#    #+#             */
/*   Updated: 2021/04/08 11:15:52 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("presidential_pardon", 72, 45),
	target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
	Form(other),
	target(other.target)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	Form("presidential_pardon", 72, 45),
	target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	Form::operator=(other);
	target = other.target;
	return *this;
}

void PresidentialPardonForm::action(void) const
{
	std::cout << "<" << target << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
