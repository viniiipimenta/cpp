#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public:
        Contact getContact(int index);
        void    setContact(Contact contact);
        int     getCounter();
        PhoneBook();
    private:
        int     index;
        int     counter;
        Contact contact[8];
};

#endif