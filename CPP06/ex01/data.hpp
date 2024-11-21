#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

#define RED         "\033[31m"
#define LIME        "\033[38;5;120m"
#define PINK        "\033[38;5;198m"
#define WHITE       "\033[37m"

class Data {

    public :
        Data(int id, std::string name, float value);
        Data(const Data &other);
        Data &operator = (const Data &other);
        ~Data();

        int get_id() const;
        std::string const get_name() const;
        float get_value() const;

    private :
        int id_;
        std::string const name_;
        float value_;

        Data();
};

std::ostream &operator << (std::ostream &out, const Data &other);

#endif