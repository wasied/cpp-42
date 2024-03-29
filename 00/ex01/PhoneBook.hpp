/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:18 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:19 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook {

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void    addContact(Contact &contact);
        void    printContacts(void);
        void    printContact(size_t idx);

        size_t  getContactsCount(void);

    private:
        Contact _contacts[8];
        size_t  _contactsCount;
        size_t  _nextInsertIndex;

};

#endif