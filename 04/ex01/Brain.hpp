/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:23 by mpeharpr          #+#    #+#             */
/*   Updated: 2022/12/20 15:53:55 by mpeharpr         ###   ########.fr       */
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

};

std::ostream & operator<<(std::ostream & o, Brain const & rhs);

#endif