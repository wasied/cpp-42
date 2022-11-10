#include "PhoneBook.hpp"
#include "utils.hpp"

// Add contact callback
static void add(PhoneBook& phone)
{
    Contact new_contact;
    std::cin >> new_contact;
    
    if (new_contact.isCompleted())
        phone.addContact(new_contact);
    else
        std::cout << "Error: Contact can not have empty fields" << std::endl;
}

// Search contact callback
static void search(PhoneBook& phone)
{
    std::string search_index;

    phone.printContacts();
    std::cout << "Please enter an index to see more informations (0-7): ";
    std::getline(std::cin, search_index);

    if (isInteger(search_index))
    {
        long int idx = strtol(search_index.c_str(), NULL, 10);
        if (idx < 0 || (idx + 1) > phone.getContactsCount())
            std::cout << "Error: Index out of range" << std::endl;
        else
        {
            std::cout << std::endl;
            phone.printContact(idx);
        }
    }
    else
        std::cout << "Error: Index must be an integer" << std::endl;
}

int main(void)
{
    PhoneBook phone;

    while (1)
    {
        std::string input;

        std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, input);

        if (input == "ADD")
            add(phone);
        else if (input == "SEARCH")
            search(phone);
        else if (input == "EXIT")
            break;
        else
            std::cout << "Error: Unexisting command, please try again." << std::endl;
        std::cout << std::endl;
    }
    return (0);
}