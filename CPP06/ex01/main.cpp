#include "serialize.hpp"
#include "data.hpp"

int main()
{
    Data OriginDb(42, "Exemple", 3.14);

    std::cout << WHITE << OriginDb << std::endl;

    uintptr_t serialized = serialize(&OriginDb);
    std::cout << LIME << "\nSerialized uintptr_t: " << PINK << serialized << WHITE << std::endl;
    
    Data *deserializedDb = deserialize(serialized);
    std::cout << LIME << "Deserialized Data: " << PINK << *deserializedDb << WHITE << std::endl;

    std::cout << "\nOriginal address:       " << &OriginDb << std::endl;
    std::cout << "Deserialized address:   " << deserializedDb << std::endl;
    return 0;
}