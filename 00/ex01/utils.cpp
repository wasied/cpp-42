/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:19 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:20 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool    isInteger(const std::string& s)
{
    if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+')))
        return (false);
    
    char *p;
    strtol(s.c_str(), &p, 10);

    return (*p == 0);
}

void    printTruncate(std::ostream& os, const std::string& s)
{
    if (s.length() > 10)
        os << s.substr(0, 9) << ".";
    else
        os << std::setw(10) << s;
    os << "|";
}