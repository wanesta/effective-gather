#include <iostream>
#include <unordered_map>
#include <vector>
/*
 * <C++ Primer> P58：当执行对象拷贝操作时，
 * 常量的顶层const不受什么影响、而底层const必须一致
 *      const int * const p = new int(10);
       底层const    顶层const

        const int a =10;
       顶层const

        const int& ra = 10;
       底层const

    1.引用不是对象且不进行拷贝;不满足上面的原则
    2.常量引用如果在左侧，右侧可以接任何东西。  const int & g =
    3.非常两引用=常量, int &r4 = a; 报错
    4.引用如果在等号右侧，请忽略引用
    5.非常量 = 常量引用
 *
 */
template<typename T>
void forwarder(T && arg){

}
void otherFunction(int& x){
    std::cout<< "Lvalue reference : " << x << std::endl;
}

void otherFunction(int&& x){
    std::cout << "Rvalue reference : " << x << std::endl;
}

int main(){
    const int a = 10;
    const int& sf = 30;
    int b = a;
    int c = 9;
    int & sss = b;
    //int && ssss = b;
    const int * const p = new int(10);
    //int *p1 = p;
    //int * const p2 = p;
    const int *p3 = p;
    const int * p4 = &c;
    int aa = 10;
    int bb =20;
    int & ref = aa;
    int && rref = aa + bb;
    ref = std::move(rref);
    std::cout << ref << std::endl;

    //int *p4 = &a;
    //a本身是一个 顶层const，加了取地址符之后是 底层const，因为
    // a是一个常量的取地址，需要一个 const int * 类型的指针来指向它


    const int &r1 = 20;
    //int &r2 = a;
    //int &r3 = r1;

    //int & c = 40;
    int ff = 10;
    forwarder(ff);
    forwarder(40);
}