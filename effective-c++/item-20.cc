#include<iostream>
class Person {
public:
    Person():name_{""}, address_{""}{}
    Person(std::string n, std::string add):name_(n),address_(add) {
        std::cout << "name : " << name_ << " address : "<< address_ << std::endl;
    }; // parameters omitted for simplicity
    std::string getName() const {return name_;}
    std::string getAddress() const { return address_;}
    virtual ~Person() {}; // see Item 7 for why this is virtual
private:
    std::string name_;
    std::string address_;
};
class Student : public Person {
public:
    Student():school_name_(""),school_address_("") {}; // parameters again omitted
    Student(std::string sname, std::string saddr, int scard):Person("wangjie", "shunyi"),school_name_{sname}, school_address_{saddr}, studentCard{scard} {
        std::cout << " school_name : " << school_name_ << " school_address : " << school_address_ << " student card : " << studentCard << std::endl;
    }
    int getCard(){ return studentCard;}
    virtual ~Student() {};

    //bool ValidateStudent(Student s);
    bool ValidateStudent(const Student &s);
private:
    int studentCard;
    std::string school_name_;
    std::string school_address_;
};

bool Student::ValidateStudent(const Student &s) {
    return true;
}
void test(const Person& p){
    std::cout << "p in " << p.getName() << " " << p.getAddress() << std::endl;
}

int main() {
    std::cout << "Item 20: Prefer pass-by-reference-to-const to pass-by value." << std::endl;

    Student yawen_chen;
    Student A("sizhong","beijing haidian",43);
    Person person("test1", "test2");
    test(A);
    yawen_chen.ValidateStudent(yawen_chen); // This is much more efficient: no constructors or destructors are called.
    return 0;
}