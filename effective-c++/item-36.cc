#include<iostream>
class B {
public:
    virtual ~B() { std::cout << "Call B::~B()\n"; };
    virtual void mf() { std::cout << "Call B::mf()\n"; };
};
class D : public B {
public:
    virtual void mf() { std::cout << "Call D::mf()\n"; }
    virtual ~D() { std::cout << "Call D::~D()\n"; };
};


int main() {
    std::cout << "Item 36: Never redefine an inherited non-virtual function.\n";
    {
        D d;
        B* pb = &d;
        pb->mf();

        //B b;
        D* pd = &d;
        pd->mf();
    }

    return 0;
}