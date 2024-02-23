#pragma once
#include "PersonImpl.h"
class Person
{
public:
    ~Person() {};
    virtual std::string name() const = 0;
    virtual std::string birth_date() const = 0;
    virtual std::string address() const = 0;
    static std::shared_ptr<Person> create(const std::string& name, const Date& birthday, const Address& addr);
};

class RealPerson :public Person {
public:
    RealPerson(const std::string& name, const Date& birthday, const Address& addr) :name_(name), birthdate_(birthday), address_(addr) {}
    ~RealPerson() {}

    std::string name() const;
    std::string birth_date() const;
    std::string address() const;

private:
    std::string name_;
    Date birthdate_;
    Address address_;
};
