#include <iostream>
#include "PhoneBook.hpp"

void adding(PhoneBook *phonebook)
{
    Contact contact;
    std::string input;

    std::cout << "Type first name: ";
    std::cin >> input;
    contact.setFirst(input);
    std::cout << "Type last name: ";
    std::cin >> input;
    contact.setLast(input);
    std::cout << "Type nickname: ";
    std::cin >> input;
    contact.setNick(input);
    std::cout << "Type phone number: ";
    std::cin >> input;
    contact.setPhone(input);
    std::cout << "Type the darkest secret: ";
    std::cin >> input;
    contact.setSecret(input);
    phonebook->setContact(contact);
}

int main(void)
{
    std::string input;
    PhoneBook phonebook;

    while (1)
    {
        std::cout << "ADD" << std::endl;
        std::cout << "SEARCH" << std::endl;
        std::cout << "EXIT" << std::endl;
        std::cout << "Type your option: ";
        std::cin >> input;
        if (input == "ADD")
            adding(&phonebook);
        else if (input == "SEARCH")
        {
        }
        else if (input == "EXIT")
            break;
    }
    return (0);
}