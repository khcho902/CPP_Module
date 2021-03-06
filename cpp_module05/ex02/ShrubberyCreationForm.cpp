/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:40:16 by kycho             #+#    #+#             */
/*   Updated: 2021/04/08 11:16:15 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("shrubbery_creation", 145, 137),
	target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
	Form(other),
	target(other.target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	Form("shrubbery_creation", 145, 137),
	target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	Form::operator=(other);
	target = other.target;
	return *this;
}

void ShrubberyCreationForm::action(void) const
{
	std::ofstream out(target + "_shrubbery");

	out <<"             _{\\ _{\\{\\/}/}/}__               "<< std::endl;
	out <<"            {/{/\\}{/{/\\}(\\}{/\\} _           "<< std::endl;  
	out <<"           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _       "<< std::endl;  
	out <<"        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}  "<< std::endl;  
	out <<"       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}        "<< std::endl; 
	out <<"      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}        "<< std::endl;   
	out <<"     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}  "<< std::endl;    
	out <<"     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}   "<< std::endl;   
	out <<"    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}  "<< std::endl;   
	out <<"     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/} "<< std::endl;
	out <<"      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_) "<< std::endl;
	out <<"     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/} "<< std::endl;
	out <<"      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}  "<< std::endl;
	out <<"        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}   "<< std::endl;
	out <<"         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)     "<< std::endl;
	out <<"           {/{/{\\{\\/}{/{\\{\\{\\(_)/}         "<< std::endl;
	out <<"            {/{\\{\\{\\/}/}{\\{\\}/}            "<< std::endl;
	out <<"             {){/ {\\/}{\\/} \\}\\}             "<< std::endl;
	out <<"             (_)  \\.-'.-/                      "<< std::endl;
	out <<"         __...--- |'-.-'| --...__               "<< std::endl;
	out <<"  _...--    .-'   |'-.-'|  ' -.    --..__       "<< std::endl;
	out <<"-     ' .  . '    |.'-._| '  . .  '       --    "<< std::endl;
	out <<".  '-  '    .--'  | '-.'|    .  '  . '       -- "<< std::endl;
	out <<"         ' ..     |'-_.-|                -      "<< std::endl;
	out <<" .  '  .       _.-|-._ -|-._  .  '  .   .       "<< std::endl;
	out <<"             .'   |'- .-|   '.              .   "<< std::endl;
	out <<" ..-'   ' .  '.   `-._.-??   .'  '  - .          "<< std::endl;
	out <<"  .-' '        '-._______.-'     '  .     .  .  "<< std::endl;
	out <<"                                                "<< std::endl;

	out.close();
}
