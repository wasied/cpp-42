/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:23 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/12/01 14:33:03 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{

    public:
        Brain(void);
        Brain(Brain const & src);
        virtual ~Brain();

        Brain & operator=(Brain const & rhs);

        std::string getIdea(int i) const;
        void        setIdea(int i, std::string idea);

    private:
        std::string _ideas[100];
		int	_caca;

};

std::ostream & operator<<(std::ostream & o, Brain const & rhs);

#endif