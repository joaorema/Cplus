#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer& other)
{
    (void)other;  
}

Serializer& Serializer::operator=(const Serializer& other)
{
    (void)other;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t   result;

    result = reinterpret_cast<uintptr_t>(ptr);          //casts ptr into variable Uintptr_t 
    return result;
    
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);                 //casts variable raw into Data Ptr
}