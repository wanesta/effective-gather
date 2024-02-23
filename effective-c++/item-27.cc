#include<iostream>
#include<vector>
#include <memory>
/*
 * 以下为C++风格的安全转化：
 * const_cast<T>  代表解除const类型，
 * dynamic_cast<T> 安全的向下（向下的意思就是基类转换成派生类，向上的意思就是派生类转换成基类），唯一一个不能使用旧式风格的类型转换，
 *                 但是这种转换可能有较大开销的。
 * reinterpret_cast<T> 用于底层的类型转换
 * static_cast<T> 强制隐式转换，
 *                单向：非const类型转换成const int转换double
 *                双向：指向类型化的指针和 *void 指针基类指针和派生类指针
 *
 */
class Window { // base class
public:
    virtual void onResize() { std::cout << "Call Window onResize." << std::endl; } // base onResize impl
    virtual void blink(){}
};
class SpecialWindow : public Window { // derived class
public:
    virtual void onResize() { // derived onResize impl;
        // then call its onResize; this doesn¡¯t work!
        //static_cast<Window>(*this).onResize(); // cast *this to Window,
        Window::onResize();
        // do SpecialWindow-
    } // specific stuff

    void blink(const std::string& str) { std::cout << "Called SpecialWindow blink is by " << str << std::endl; }
};


class MyClass{
public:
    MyClass(){}
    MyClass(int a, int b):_a{a},_b{b}{}
    int getA() const {return _a;}
    int getB() const {return _b;}
private:
    int _a;
    int _b;
};

int main() {
    int a = 4, b = 5;
    double c = static_cast<double> (a)/b;
    typedef std::vector<std::shared_ptr<MyClass>> MC;
    MC mycptr;
    auto* mptr1 = new MyClass(3, 5);
    auto* mptr2 = new MyClass(10, 20);
    mycptr.emplace_back(mptr1);
    mycptr.emplace_back(mptr2);
    for (MC::iterator mciter = mycptr.begin(); mciter != mycptr.end(); mciter++){
        std::cout << " A: " << (*mciter)->getA() << " B : " << (*mciter)->getB() << std::endl;
    }
    std::cout << "Item 27: Minimize casting." << std::endl;
    {
        typedef // see Item 13 for info
        std::vector<std::shared_ptr<Window> > VPW; // on std::shared_ptr
        VPW winPtrs;
        auto* ptr = new Window();
        winPtrs.emplace_back(ptr);
        std::cout << "-========================" << std::endl;
        for (VPW::iterator iter = winPtrs.begin(); // undesirable code:
             iter != winPtrs.end(); // uses dynamic_cast
             ++iter) {
            SpecialWindow* spw = dynamic_cast<SpecialWindow*>(iter->get());
            spw->blink("Window");
            if (SpecialWindow* psw = dynamic_cast<SpecialWindow*>(iter->get()))
                psw->blink("Window");
        }
    }
    // Try to do this instead:
    {
        typedef std::vector<std::shared_ptr<SpecialWindow> > VPSW;
        VPSW winPtrs;
        auto* ptr = new SpecialWindow();
        winPtrs.emplace_back(ptr);
        for (VPSW::iterator iter = winPtrs.begin(); // better code: uses
             iter != winPtrs.end(); // no dynamic_cast
             ++iter)
            (*iter)->blink("SpecialWindow");
    }
    return 0;
}