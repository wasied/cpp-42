#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{

    public:
        virtual ~AAnimal();

        AAnimal & operator=(AAnimal const & rhs);

        virtual void    makeSound(void) const;
        std::string     getType(void) const;

    protected:
        AAnimal(std::string type);
        AAnimal(AAnimal const & src);

        std::string _type;

};

#endif