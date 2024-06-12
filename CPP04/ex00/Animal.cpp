#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
    std::cout << "Animal" << _type << " Default Constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal " << _type << " Constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
    std::cout << "Animal " << _type << " Copy constructor called" << std::endl;
}

Animal &Animal::operator = (const Animal &other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    std::cout << "Animal " << _type << " Copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal " << _type << " Destructor called" << std::endl;
}

std::string Animal::get_type() const
{
    return _type;
}

void        Animal::set_type(std::string new_type)
{
    _type = new_type;
}

void    Animal::makeSound() const
{
    std::string tab[2] = {"Cat", "Dog"};
    std::string sound[2] = {"MEAOWWW", "WOOAAFF"};

    for (int i = 0; i < 2; i++)
    {
        if (_type == tab[i])
        {
            std::cout << sound[i] << std::endl;
            return ;
        }
    }
    std::cout << "Brrrbrrr sound of " << get_type() << std::endl; 
    
}