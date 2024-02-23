#include "Person.h"
int main() {
    std::cout << "Item 31: Minimize compilation dependencies between files.\n";
    {
        std::string name("ChenYawen");
        Date birth_day;
        Address addr;
        std::shared_ptr<Person> pp(Person::create(name, birth_day, addr));
        std::cout << pp->name() // use the object via the Person interface
                  << " was born on "
                  << pp->birth_date()
                  << " and now lives at "
                  << pp->address()
                  << std::endl;
    }
    return 0;
}