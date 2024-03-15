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

    如果 const 右结合修饰的类型 或 * ，那这个const就是一个底层 const
    如果 const 右结合修饰的标识符， 那这个const 就是一个顶层 const

    const int * p  指针指向的对象是常量，也称为底层const。指针本身是可变的，可以指向其他地方，但不能通过指针修改指向的整数的值
    int * const p  指针本身是常量，也称为顶层const。 指针不能只想其他地方，但可以通过指针修改指向的整数的值
    int const * p  指针指向的对象是常量，也称为底层const。 指针本身是可变的，可以指向其他地方，但不能通过指针修改指向的整数的值。
    const int const * p 这是错误的声明方式。
    const int * const p 指针指向的对象是常量，指针本身也是常量。指针不能指向其他地方，也不能通过指针修改指向的整数的值。
 *
 */
template<typename T>
void forwarder(T && arg){

}
namespace const_space{
    void const_test(){
        const int a = 10;
        const int& sf = 30;
        int b = a;
        int c = 9;
        int & sss = b;
        //int && ssss = b;
        const int * const p = new int(10);
        //int *p1 = p;
        //int * const p2 = p;
        const int* p3 = p;
        const int* p4 = &c;
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

    }
}
namespace left_right_value{
        int add(){
            return 0;
        }		//返回常量 0

        int fun(int&& f)	//形参为右值引用
        {
            std::cout << f << std::endl;
            return 1;
        }				   //返回常量 1

        template<typename T> 					//函数模板
        void fun(T&& f)							//兼容 左值引用 和右值引用
        {
            std::cout << f << std::endl;
        }

        void left_right_value(){
            /*
             * 左值：能够取地址的表达式，是左值，左值可读可写 所有名字的变量都是左值
             * 右值：不能够取地址表达式，是右值，右值只读，包括： 5, “hello”，临时表达式 或者函数的返回值
             * 左值引用 就是对左值的引用 就是给左值取别名， 内存中有特定地址的量
             * 右值引用 就是对右值的引用 就是给右值取别名， 寄存器中的量
             * 当改变别名时 该值也相应改变
             *
             *
             */
            int a = 10;         //a 是左值
            double b = 1.3;     //b 是右值
            //左值引用
            int& Tmp_a = a;         //左值引用
            std::cout << "Old value a:" << a << " Tmp_a:" << Tmp_a <<std::endl;
            Tmp_a = 6;              //改变别名
            std::cout << "New value a:" << a << "Tmp_a:" << Tmp_a << std::endl;
            /*
                int add(){
                    return 0;
                    该函数返回的值并不会保存在内存中，进出现在临时量中 语句执行完毕后，该临时量被销毁
                }
            */
            //使用右值引用

            char && Char_a = 'a';
            std::cout << "'a':" << Char_a << std::endl;

            int && Int_a = 3;
            std::cout << "3:" << Int_a << std::endl;

            int && Int_b = 1 + 3;
            std::cout << "1+3:" << Int_b << std::endl;

            int &&Int_c = add();
            std::cout << "add()return 0:" << Int_c << std::endl;

            int && Int_d = fun(3);    //输出3
            std::cout << "fun() 3:" << Int_d << std::endl;
            int aa = 10;
            fun(aa);
            fun(30);    //兼容左值引用和右值引用
        }
    }

namespace stdmove{
                /*
                 *
                 *
                 *
                 *
                 *
                 * */
            }
template <typename Container, typename Index>
auto authAndAccess(Container& c, Index i) -> decltype(c[i]){
    return c[i];
}

void otherFunction(int& x){
    std::cout<< "Lvalue reference : " << x << std::endl;
}

void otherFunction(int&& x){
    std::cout << "Rvalue reference : " << x << std::endl;
}

template<typename T>
class TD;


int main(){

    int ff = 10;
    //TD<decltype(ff)> xType;
    forwarder(ff);
    forwarder(40);
    left_right_value::left_right_value();
}