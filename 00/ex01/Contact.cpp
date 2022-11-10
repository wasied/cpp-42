#include "Contact.hpp"

Contact::Contact(void) {
    this->_firstName = "";
    this->_lastName = "";
    this->_nickname = "";
    this->_phoneNumber = "";
    this->_darkestSecret = "";
}

Contact::~Contact(void) {
}

void   Contact::setFirstName(std::string firstName) {
    this->_firstName = firstName;
}

void   Contact::setLastName(std::string lastName) {
    this->_lastName = lastName;
}

void   Contact::setNickname(std::string nickname) {
    this->_nickname = nickname;
}

void   Contact::setPhoneNumber(std::string phoneNumber) {
    this->_phoneNumber = phoneNumber;
}

void   Contact::setDarkestSecret(std::string darkestSecret) {
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void) {
    return (this->_firstName);
}

std::string Contact::getLastName(void) {
    return (this->_lastName);
}

std::string Contact::getNickname(void) {
    return (this->_nickname);
}

std::string Contact::getPhoneNumber(void) {
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) {
    return (this->_darkestSecret);
}

bool    Contact::isCompleted(void) {
    return (this->_firstName != "" && this->_lastName != "" && this->_nickname != "" && this->_phoneNumber != "" && this->_darkestSecret != "");
}

std::istream &operator>>(std::istream &in, Contact &contact) {
    std::string input;

    std::cout << "First name: ";
    std::getline(in, input);
    contact.setFirstName(input);

    std::cout << "Last name: ";
    std::getline(in, input);
    contact.setLastName(input);

    std::cout << "Nickname: ";
    std::getline(in, input);
    contact.setNickname(input);

    std::cout << "Phone number: ";
    std::getline(in, input);
    contact.setPhoneNumber(input);

    std::cout << "Darkest secret: ";
    std::getline(in, input);
    contact.setDarkestSecret(input);

    return (in);
}