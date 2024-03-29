#include<iostream>

class T2{
public:
    T2(){

    }
    T2(int num):_data(num){
    }

private:
    int _data;
};

class T1{
public:
    operator T2(){
        return T2(_data);
    }
private:
    int _data;
};



int main() {

    std::cout << "Item 19: Treat class design as type design." << std::endl;
    std::cout << "How should objects of your new type be created and destroyed?" << std::endl;
    std::cout << "How should object initialization differ from object assignment?" << std::endl;
    std::cout << "What does it mean for objects of your new type to be passed by value?" << std::endl;
    std::cout << "What are the restrictions on legal values for your new type?" << std::endl;
    std::cout << "Does your new type fit into an inheritance graph?" << std::endl;
    std::cout << "What kind of type conversions are allowed for your new type?" << std::endl;
    std::cout << "What operators and functions make sense for the new type?" << std::endl;
    std::cout << "What standard functions should be disallowed?" << std::endl;
    std::cout << "Who should have access to the members of your new type?" << std::endl;
    std::cout << "How general is your new type?" << std::endl;
    std::cout << "Is a new type really what you need?" << std::endl;
    T1 t1;
    T2 t2;
    t2 = t1;
    return 0;
}