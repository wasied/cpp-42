/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:58 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:59 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    harl;

    std::cout << std::endl;

    std::cout << "DEBUG:" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "INFO:" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    
    std::cout << "WARNING:" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;
    
    std::cout << "ERROR:" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    return (0);
}