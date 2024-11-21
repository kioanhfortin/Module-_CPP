#include "data.hpp"

Data::Data(int id, std::string name, float value) : id_(id), name_(name), value_(value) {}

Data::Data(const Data &other) : id_(other.id_), name_(other.name_), value_(other.value_) {}

Data &Data::operator = (const Data &other) {
    if (this != &other) {
        id_ = other.id_;
        value_ = other.value_;
    }
    return *this;
}

Data::~Data() {}

int Data::get_id() const { return id_; }
std::string const Data::get_name() const { return name_; }
float Data::get_value() const { return value_; }

std::ostream &operator << (std::ostream &out, const Data &other) {
    out << "Data: " << other.get_name() << ", Id: " << other.get_id() << ", Value: " << other.get_value();
    return out;
}