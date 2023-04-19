#include "PhoneBook.hpp"
#include <iomanip>

void searching(PhoneBook *phonebook)
{
    Contact print;
    int i;
    int input;

    i = 0;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|" << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    while (i < phonebook->getCounter())
    {
        print = phonebook->getContact(i);
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << print.getFirst() << "|";
        std::cout << std::setw(10) << print.getLast() << "|";
        std::cout << std::setw(10) << print.getNick() << "|" << std::endl;
        i++;
    }
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Choose an index contact: ";
    std::cin >> input;
    print = phonebook->getContact(input);
    std::cout << std::endl;
    std::cout << "First name: " << print.getFirst() << std::endl;
    std::cout << "Last name: "<< print.getLast() << std::endl;
    std::cout << "Nickname: " << print.getNick() << std::endl;
    std::cout << "Phone number: " << print.getPhone() << std::endl;
    std::cout << "Darkest secret: " << print.getSecret() << std::endl;
}

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
    }
    return (0);
}