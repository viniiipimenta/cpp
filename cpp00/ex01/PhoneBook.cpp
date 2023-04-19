#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
    this->counter = 0;
}

Contact PhoneBook::getContact(int index)
{
    return this->contact[index];
}

int PhoneBook::getCounter()
{
    return this->counter;
}

void PhoneBook::setContact(Contact contact)
{
    this->contact[this->index] = contact;
    this->index = (this->index + 1) % 8;
    if (this->counter < 8)
        this->counter++;
}