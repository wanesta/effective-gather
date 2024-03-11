#include <iostream>
#include <memory>
class MyObject{
public:
    MyObject(){ std::cout << "Default Constructor" << std::endl;}
    MyObject(const MyObject & obj){ std::cout << "Copy Constructor" << std::endl;}
    MyObject(MyObject &&){ std::cout << "Move Constructor" << std::endl;}
private:

};

void process(MyObject&& obj){
    std::cout << "Processing Object" << std::endl;
}
void pro(int &&a){
    std::cout << "pro val" << a <<std::endl;
}
int get_x(){
    int x = 20;
    return x;
}
int funp(int & a){
    int b = a;
    a += 1;
    return b;
}
int & funpp(int & a){
    a += 1;
    return a;
}



void bar(int &x){
    std::cout << "bar & " << x <<std::endl;
}

void bar(std::string & x){
    std::cout << "bar & & " << x << std::endl;
}

template<typename T>
void foo(T&& x){
    bar(std::forward<T>(x));
}

class Student {
public:
    Student(const char* name, int age) {
        name_ = name;
        age_ = age;
        std::cout << "init student" << std::endl;
    }
    Student(const Student& s) {
        copy(s);
    }
    Student()=default;

    void copy(const Student& s) {
        name_ = s.name_;
        age_ = s.age_;
        std::cout << "copy a student" << std::endl;
    }
    std::string name_;
    int age_{0};
};

Student makeStudent() {
    Student s{"jack",39};
    std::cout << "finish init student" << std::endl;
    return s;
}

std::ostream& operator<<(std::ostream& ss, const Student& s) {
    ss << "name = " << s.name_ << ", age = " << s.age_ << std::endl;
    return ss;
}
void printStudent(Student&& s) {
    int ss = 30;
    s.age_ = ss;
    std::cout << s;
}

int main(){
    std::string str = "abcd";
    int ints_ = 30;
    foo(str);
    foo(ints_);
    //&get_x();
    int t = 20;

    int val = 30;
    int && fsl = 60;
    int & fst = t;

    //pro(fsl);
    std::cout << "fst :" << fst <<std::endl;
    const int * pi = &val;
    int * const pc = &val;
    int const * ps = &val;
    *pc = val;
    int a = 40;
    int b = funp(a);
    int & c = funpp(a);
    std::cout << b << " ----- " << c  << std::endl;
    std::shared_ptr<MyObject> pmyobj = std::make_shared<MyObject>();

    MyObject obj;
    MyObject obj1 = std::move(obj);
    MyObject &&obj2 = std::move(obj);
    process(std::move(obj2));
    printStudent(std::move(makeStudent()));

}