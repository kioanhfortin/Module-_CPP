#include "convert.hpp"

void Convert::detectType(const std::string num) {
    const TypeHandler handler[] = {
        {isChar, toChar},
        {isInt, toInt},
        {isFloat, toFloat},
        {isDouble, toDouble},
    };

    for (size_t i = 0; i < 4; i++) {
        if (handler[i].isType(num)) {
            handler[i].toType(num);
            return;
        }
    }
    toUnknown(num);
}

bool Convert::isChar(const std::string &num) {
    if (num.size() != 3 || !(num[0] == '\'' && num[2] == '\''))
        return false;
    return true;
}

bool Convert::isInt(const std::string &num) {
    char *end;
    long val = std::strtol(num.c_str(), &end, 10);
    if (!(*end == '\0' && val >= std::numeric_limits<int>::min() && val <= std::numeric_limits<int>::max()))
        return false;
    return true;
}

bool Convert::isFloat(const std::string &num) {
    if (!(num.find('f') != std::string::npos && num[num.size() - 1] == 'f'))
        return false;
    return true;
}

bool Convert::isDouble(const std::string &num) {
    if (!(num.find('.') != std::string::npos && num[num.size() - 1] == 'f'))
        return false;
    return true;
}

void Convert::toChar(const std::string &num) {
    char c = num[1];
    if (std::isprint(c))
        std::cout << LIME << "Char : " << PINK << c << std::endl;
    else
        std::cout << LIME << "Char : " << PINK << "Non printable caracter" << std::endl;
    std::cout << LIME << "Int : " << PINK << static_cast<int>(c) << std::endl;
    std::cout << LIME << "Float : " << PINK << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << LIME << "Double : " << PINK << static_cast<double>(c) << ".0" << std::endl;
}

void Convert::toInt(const std::string &num) {
    try {
        int val = stoi(num);
        if (std::isprint(static_cast<char>(val)))
            std::cout << LIME << "Char : " << PINK << static_cast<char>(val) << std::endl;
        else
            std::cout << LIME << "Char : " << PINK << "Non printable caracter" << std::endl;
        std::cout << LIME << "Int : " << PINK << val << std::endl;
        std::cout << LIME << "Float : " << PINK << static_cast<float>(val) << ".0f" << std::endl;
        std::cout << LIME << "Double : " << PINK << static_cast<double>(val) << ".0" << std::endl;

    } catch (...) {
        std::cerr << "Impossible conversion" << std::endl;
    }
}

void Convert::toFloat(const std::string &num) {
    try {
        float val = stof(num);
        if (std::isprint(static_cast<char>(val)))
            std::cout << LIME << "Char : " << PINK << static_cast<char>(val) << std::endl;
        else
            std::cout << LIME << "Char : " << PINK << "Non printable caracter" << std::endl;
        std::cout << LIME << "Int : " << PINK << static_cast<int>(val) << std::endl;
        std::cout << LIME << "Float : " << PINK << val << "f" << std::endl;
        std::cout << LIME << "Double : " << PINK << static_cast<double>(val) << ".0" << std::endl;

    } catch (...) {
        std::cerr << "Impossible conversion" << std::endl;
    }
}

void Convert::toDouble(const std::string &num) {
     try {
        double val = stof(num);
        if (std::isprint(static_cast<char>(val)))
            std::cout << LIME << "Char : " << PINK << static_cast<char>(val) << std::endl;
        else
            std::cout << LIME << "Char : " << PINK << "Non printable caracter" << std::endl;
        std::cout << LIME << "Int : " << PINK << static_cast<int>(val) << std::endl;
        std::cout << LIME << "Float : " << PINK << static_cast<float>(val) << "f" << std::endl;
        std::cout << LIME << "Double : " << PINK << val << std::endl;

    } catch (...) {
        std::cerr << "Impossible conversion" << std::endl;
    }
}

void Convert::toUnknown(const std::string &num) {
    std::cout << LIME << "Char : " << PINK << "Impossible" << std::endl;
    std::cout << LIME << "Int : " << PINK << "Impossible" << std::endl;
    std::cout << LIME << "Float : " << PINK << num << "f" << std::endl;
    std::cout << LIME << "Double : " << PINK << num << std::endl;
}