/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:50 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:51 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap();

        FragTrap & operator=(FragTrap const & rhs);

        void    highFivesGuys(void);

};

#endif