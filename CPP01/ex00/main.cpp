#include "Zombie.hpp"

void Zombie::annouce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(const std::string new_name)
{
    name = new_name; 
}

std::string Zombie::get_name() const
{
    return name;
}

Zombie::Zombie(void)
{
    std::cout << "Zombie Constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie Destructor called" << std::endl;
}

Zombie* Zombie::newZoombie(std::string name)
{
    
}

int main()
{
    Zombie foo;
    foo.set_name("foo");
    foo.annouce();
}