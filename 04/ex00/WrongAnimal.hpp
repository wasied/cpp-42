#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const & src);
        ~WrongAnimal();

        WrongAnimal & operator=(WrongAnimal const & rhs);

        void    makeSound(void) const;

    protected:
        std::string _type;

};

#endif