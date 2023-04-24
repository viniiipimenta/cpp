#include "PhoneBook.hpp"
#include <iomanip>
#include <cctype>

int check(std::string str, PhoneBook *phonebook)
{
    int i;
    int j;
    int flag;

    j = 0;
    flag = 1;
    i = 0;
    while (str[j])
    {
        if (isdigit(str[j]) == 0)
            flag = 0;
        j++;
    }
    if (flag == 1 && !str.empty())
    {
		i = std::stoi(str);
		if (i <= phonebook->getCounter() && i >= 0)
			return 1;
    }
	return 0;
}

void printContact(Contact *print)
{
    std::cout << std::endl;
    std::cout << "First name: " << print->getFirst() << std::endl;
    std::cout << "Last name: "<< print->getLast() << std::endl;
    std::cout << "Nickname: " << print->getNick() << std::endl;
    std::cout << "Phone number: " << print->getPhone() << std::endl;
    std::cout << "Darkest secret: " << print->getSecret() << std::endl;
}

std::string cutPrint(std::string str)
{
    std::string ret;

    if (str.length() > 10)
    {
        ret = str.substr(0, 9) + ".";
        return (ret);
    }
    return (str);
}

void searching(PhoneBook *phonebook)
{
    std::string	input;
    Contact		print;
    int			i;

    i = 0;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|" << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    while (i < phonebook->getCounter() && phonebook->getCounter())
    {
        print = phonebook->getContact(i);
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << cutPrint(print.getFirst()) << "|";
        std::cout << std::setw(10) << cutPrint(print.getLast()) << "|";
        std::cout << std::setw(10) << cutPrint(print.getNick()) << "|" << std::endl;
        i++;
    }
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::endl;
    getline(std::cin, input);
    while (input.empty())
    {
        std::cout << "Choose an index contact: ";
        getline(std::cin, input);
    }
	if (check(input, phonebook) == 0)
	{
		std::cout << "Wrong input!" << std::endl;
		return;
	}
    print = phonebook->getContact(std::stoi(input));
    printContact(&print);
}

void adding(PhoneBook *phonebook)
{
    Contact		contact;
    std::string	input;

    input.clear();
    while (input.empty())
    {
        std::cout << "Type first name: ";
        getline(std::cin, input);
    }
    contact.setFirst(input);
    input.clear();
    while (input.empty())
    {
        std::cout << "Type last name: ";
        getline(std::cin, input);
    }
    contact.setLast(input);
    input.clear();
    while (input.empty())
    {
        std::cout << "Type nickname: ";
        getline(std::cin, input);
    }
    contact.setNick(input);
    input.clear();
    while (input.empty())
    {
        std::cout << "Type phone number: ";
        getline(std::cin, input);
    }
    contact.setPhone(input);
    input.clear();
    while (input.empty())
    {
        std::cout << "Type the darkest secret: ";
        getline(std::cin, input);
    }
    contact.setSecret(input);
    phonebook->setContact(contact);
}

int main(void)
{
    std::string	input;
    PhoneBook	phonebook;

    while (1)
    {
        std::cout << std::endl;
        std::cout << "ADD" << std::endl;
        std::cout << "SEARCH" << std::endl;
        std::cout << "EXIT" << std::endl;
        std::cout << "Type your option: ";
        std::cin >> input;
        if (input == "ADD")
            adding(&phonebook);
        else if (input == "SEARCH")
            searching(&phonebook);
        else if (input == "EXIT")
            break;
        input.clear();
    }
    return (0);
}