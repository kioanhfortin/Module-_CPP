#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string &type) : _type(type)
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
    std::cout << "Animal " << _type << " destructor called" << std::endl;
}

std::string Animal::get_type()
{
    return _type;
}

void        Animal::set_type(std::string new_type)
{
    _type = new_type;
}