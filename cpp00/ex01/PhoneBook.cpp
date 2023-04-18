#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

Contact PhoneBook::getContact(int index)
{
    return this->contact[index];
}

void PhoneBook::setContact(Contact contact)
{
    this->contact[this->index] = contact;
    this->index = (this->index + 1) % 8;
}