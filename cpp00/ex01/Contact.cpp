#include "Contact.hpp"

std::string Contact::getFirst(void)
{
    return this->firstName;
}

std::string Contact::getLast(void)
{
    return this->lastName;
}

std::string Contact::getNick(void)
{
    return this->nickname;
}

std::string Contact::getPhone(void)
{
    return this->phoneNumber;
}

std::string Contact::getSecret(void)
{
    return this->darkestSecret;
}

void Contact::setFirst(std::string first)
{
    this->firstName = first;
}

void Contact::setLast(std::string last)
{
    this->lastName = last;
}

void Contact::setNick(std::string nick)
{
    this->nickname = nick;
}

void Contact::setPhone(std::string phone)
{
    this->phoneNumber = phone;
}

void Contact::setSecret(std::string secret)
{
    this->darkestSecret = secret;
}