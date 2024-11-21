#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>

#define RED         "\033[31m"
#define LIME        "\033[38;5;120m"
#define PINK        "\033[38;5;198m"
#define WHITE       "\033[37m"

struct Convert
{
    public :
        static void detectType(const std::string num);

    private :
        struct TypeHandler {
            bool (*isType)(const std::string &);
            void (*toType)(const std::string &);
        };

        static bool isChar(const std::string &num);
        static bool isInt(const std::string &num);
        static bool isFloat(const std::string &num);
        static bool isDouble(const std::string &num);

        static void toChar(const std::string &num);
        static void toInt(const std::string &num);
        static void toFloat(const std::string &num);
        static void toDouble(const std::string &num);
        static void toUnknown(const std::string &num);
};

#endif