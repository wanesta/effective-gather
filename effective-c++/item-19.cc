//
// Created by gaosm on 26/9/23.
//
#include <iostream>

class T2{
public:
    T2(){}
    explicit T2(int num): content{num}{}
private:
    int content = 2;
};

class T1{
public:
    operator T2(){
        return T2(content);
    }
private:
    int content = 1;
};
//发
int main() {
    T2 t2_1 = T2(3);
    T1 t1;
    T2 t2;
    t2 = t1;
}
