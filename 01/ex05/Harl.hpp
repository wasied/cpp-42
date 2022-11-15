/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:21:57 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:58 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{

    public:
        Harl(void);
        ~Harl(void);

        void    complain(std::string level);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

};

#endif