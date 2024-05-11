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
    std::string input;
    inst1.nbr_contact = 0;
    inst1.max_contact = 0;
    std::cout << std::endl << "*** Your PhoneBook is now open ! " << std::endl;
    ft_help_command();
    while (std::getline(std::cin, input) != NULL || !std::cin.eof())
    {
        //make a switch
        if (input == "EXIT")
            break;
        if (input == "ADD")
            inst1.add_contact();
        if (input == "SEARCH")
            inst1.ft_check_storage();
        ft_help_command();
    }
    return 0;   
}