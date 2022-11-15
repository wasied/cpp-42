/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:14 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:15 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

    public:
        Contact();
        ~Contact(void);

        void   setFirstName(std::string firstName);
        void   setLastName(std::string lastName);
        void   setNickname(std::string nickname);
        void   setPhoneNumber(std::string phoneNumber);
        void   setDarkestSecret(std::string darkestSecret);

        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        
        bool    isCompleted(void);

    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;

};

std::istream &operator>>(std::istream &in, Contact &contact);

#endif