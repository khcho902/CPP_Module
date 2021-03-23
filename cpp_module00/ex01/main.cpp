#include "phone_book.hpp"

int main(void)
{
	int idx;
	std::string cmd;
	PhoneBook phone_book;

	while (true)
	{
		std::cout << "Enter the command(ADD, SEARCH, EXIT) : ";
		
		if (!(std::getline(std::cin, cmd)))
			exit(1);
	
		if (cmd.compare("EXIT") == 0)
		{
			std::cout << "Bye~~!!" << std::endl;
			break;
		}
		else if (cmd.compare("ADD") == 0)
		{
			if (phone_book.add_contact() == ERROR)
				exit(1);
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if (phone_book.get_num_of_contact() == 0)
			{
				std::cout << "The PhoneBook is empty!" << std::endl;
				continue ;
			}

			phone_book.overview_contacts();

			std::cout << "Enter the index of the contact you want to see in detail : ";
			
			std::cin >> idx;
			if (std::cin.eof())
				exit(1);

			if (std::cin.fail() || idx <= 0 || idx > phone_book.get_num_of_contact())
			{
				std::cout << "wrong input!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				phone_book.view_contact_detail(idx);
			}
		}
		else
		{
			std::cout << "Select only ADD, SEARCH and EXIT" << std::endl;
		}
	}
	return (0);
}