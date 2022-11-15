#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{

    public:
        Cat(void);
        Cat(Cat const & src);
        virtual ~Cat();

        Cat & operator=(Cat const & rhs);

        void    makeSound(void) const;

    private:
        Brain*  _brain;

};

#endif