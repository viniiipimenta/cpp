#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
    public:
        std::string getFirst(void);
        void setFirst(std::string first);
        std::string getLast(void);
        void setLast(std::string last);
        std::string getNick(void);
        void setNick(std::string nick);
        std::string getPhone(void);
        void setPhone(std::string phone);
        std::string getSecret(void);
        void setSecret(std::string secret);
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif