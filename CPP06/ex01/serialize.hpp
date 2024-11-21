#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include "data.hpp"
#include <cstdint>

uintptr_t serialize(Data* ptr);
Data *deserialize(uintptr_t raw);


#endif