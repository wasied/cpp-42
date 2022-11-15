#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{

    public:
        Dog(void);
        Dog(Dog const & src);
        virtual ~Dog();

        Dog & operator=(Dog const & rhs);

        void    makeSound(void) const;

    private:
        Brain*  _brain;

};

#endif