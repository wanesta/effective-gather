#include <iostream>
using namespace std;
class Person {
private:
    string name;
    string address;
public:
    Person(){}
    virtual ~Person(){}
};

class Student: public Person {
private:
    string schoolName;
    string schoolAddress;
public:
    Student(){}
    ~Student(){}
};
bool validateStudent(Student s){   //通过值传递得到一个student的对象 ， 当调用形参 Student 时候会执行拷贝构造函数，在执行拷贝构造函数的时候会吧基类和私有成员的一些std的类型都会执行一遍拷贝构造

}
bool validateStudent(const Student& s){

}
//通过u引用传递参数可以避免切割问题，slicing problem
// 切割问题就是指：
// 当继承类对象作为基类对象（按值）传递时，基类的拷贝构造函数被调用，而那些派生类对象特有的部分会被 “切掉”，
// 例子如下：
class Window{
public:
    Window(){}
    Window(std::string n):_name{n} {}
    std::string name() const {return _name;}
    virtual void display() const { std::cout << "window is display " << std::endl; }

private:
    std::string _name;
};

class WindowWithScrollBars :public Window{
public:
    WindowWithScrollBars(){}
    WindowWithScrollBars(std::string name):Window(name){}
    virtual void display() const { std::cout << "WindowWithScrollBarsis display " << std::endl; }
};
void printNameAndDisplay(const Window& w) {
    std::cout << w.name() << std::endl;
    w.display();
}

int main(){
    WindowWithScrollBars wwsb("wwsb");
    printNameAndDisplay(wwsb);
}