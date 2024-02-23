#include "Person.h"

std::shared_ptr<Person>  Person::create(const std::string& name, const Date& birthday, const Address& addr) {
    return std::shared_ptr<Person>(new RealPerson(name, birthday, addr));
}

std::string RealPerson::birth_date() const {
    return birthdate_.birth_day();
}

std::string RealPerson::name() const {
    return name_;
}

std::string RealPerson::address() const {
    return address_.address_name();
}

