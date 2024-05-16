#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc > 1)
    {
        std::cout << "Too much argument" << std::endl;
        return 1; 
    }
    PhoneBook  inst1;
    // std::string input;
    // inst1._nbr_contact = 0;
    // inst1._max_contact = 0;
    std::cout << std::endl << "*** Your PhoneBook is now open ! " << std::endl;
    ft_help_command();
    while (inst1.read_input() || !std::cin.eof())
    {
        if (inst1.get_input() == "EXIT")
            break;
        if (inst1.get_input() == "ADD")
            inst1.add_contact();
        if (inst1.get_input() == "SEARCH")
            inst1.ft_check_storage();
        ft_help_command();
    }
    return 0;   
}