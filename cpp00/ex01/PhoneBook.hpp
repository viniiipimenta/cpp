#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        Contact getContact(int index);
        void setContact(Contact contact);
        int getCounter();
    private:
        int index;
        Contact contact[8];
        int counter;
};

#endif