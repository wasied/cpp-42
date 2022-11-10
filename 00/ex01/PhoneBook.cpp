#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook(void) {
    this->_contactsCount = 0;
    this->_nextInsertIndex = 0;
}

PhoneBook::~PhoneBook(void) {
}

// Get the count of contacts
size_t  PhoneBook::getContactsCount(void)
{
    return (this->_contactsCount);
}

// Add the contact to the array
void    PhoneBook::addContact(Contact &contact) {

    if (this->_contactsCount < 8)
    {
        this->_contacts[this->_nextInsertIndex] = contact;
        this->_contactsCount++;
        this->_nextInsertIndex = this->_contactsCount;
    }
    else
    {
        this->_contacts[this->_nextInsertIndex] = contact;
        this->_nextInsertIndex++;
    }

    if (this->_nextInsertIndex >= 8)
        this->_nextInsertIndex = 0;

    std::cout << "A new contact has been added" << std::endl;
    std::cout << "There are now " << this->_contactsCount << " contacts" << std::endl;
}

// Print the list of contacts
void    PhoneBook::printContacts(void)
{
    std::cout << std::endl;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First" << "|";
    std::cout << std::setw(10) << "Last" << "|";
    std::cout << std::setw(10) << "Nick" << "|" << std::endl;

    for (size_t i = 0; i < this->_contactsCount; i++)
    {
        std::cout << std::setw(10) << i << "|";
        printTruncate(std::cout, this->_contacts[i].getFirstName());
        printTruncate(std::cout, this->_contacts[i].getLastName());
        printTruncate(std::cout, this->_contacts[i].getNickname());
        std::cout << std::endl;
    }

    std::cout << std::endl;
}

// Search a contact by index
void    PhoneBook::printContact(size_t idx)
{
    std::cout << "First name: " << this->_contacts[idx].getFirstName() << std::endl;
    std::cout << "Last name: " << this->_contacts[idx].getLastName() << std::endl;
    std::cout << "Nickname: " << this->_contacts[idx].getNickname() << std::endl;
    std::cout << "Phone number: " << this->_contacts[idx].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << this->_contacts[idx].getDarkestSecret() << std::endl;
}