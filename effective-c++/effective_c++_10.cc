/*
 *  派生类复制函数必须调用他们对应的基类函数。
 *  如果两个拷贝函数有很多重复代码，可以先构造一个，在用另一个调用它。可以这样做吗？
 *  不要这样！！！构造函数会初始化新对象，但赋值运算符只适用于已经初始化的对象。
 *  1.拷贝构造函数调用拷贝赋值运算符：对正在构造中的对象执行赋值意味着对尚未出实话的对象执行某些对已经初始化的对象有意义的操作。
 *  2.拷贝赋值运算符调用拷贝构造函数：将试图构造一个已经存在的对象。
 */


#include <iostream>
#include <string>

void logCall(const std::string& funcName){
    std::cout << "已经记录" << std::endl;
}

/**
 * 第二步加入的代码。在Customer的类加入Date类型的对象
 */
class Date {
public:
    void setDay(int d) {day = d;}
    int getDay(){return day;}
private:
    int day;
};

class Customer {
public:
    Customer();
    Customer(const Customer &rhs);
    Customer &operator=(const Customer &rhs);
    void setName(const std::string &str) {name = str;}
    std::string getName() {return name;}
    void print(){ std::cout << "name:" << name << "   lastTransaction:" << lastTransaction.getDay() << std::endl;};
    void setDate(Date d) {lastTransaction = d;} //第二步加入的代码
    Date getDate(){ return lastTransaction;} //第二步加入的代码
private:

    std::string name;
    Date lastTransaction; //第二步加入的代码
};

Customer::Customer() {

}

Customer::Customer(const Customer &rhs) :name(rhs.name), lastTransaction(rhs.lastTransaction){
    logCall("Customer copy constructor");
}

Customer & Customer::operator=(const Customer &rhs) {
    logCall("Customer copy assigment operator");
    lastTransaction = rhs.lastTransaction;
    name = rhs.name;
    return *this;
}
/*
 *  第三步加入的代码, 新加入了派生类，但是在继承的基类中加入了Date的对象，
 */
class PriorityCustormer : public Customer {
public:
    PriorityCustormer();
    PriorityCustormer(const PriorityCustormer &rhs);
    PriorityCustormer operator=(const PriorityCustormer &rhs);
    void setPriorrity(int num) {priority = num;}
    void print_(){
        std::cout << "priority " << priority << " --- " << std::endl;
        Customer::print();
    }
private:
    int priority;

};
PriorityCustormer::PriorityCustormer(): Customer() {

}
/*
 *   第三步加入的代码是解决派生类 PriorityCustormer 获取不到拷贝构造函数中 赋值操作 的值
 */
PriorityCustormer::PriorityCustormer(const PriorityCustormer &rhs)
    :priority(rhs.priority),
    Customer(rhs) { //第三步加入的代码
    logCall("PriorityCustormer copy constructor");
}
PriorityCustormer PriorityCustormer::operator=(const PriorityCustormer &rhs) {
    Customer::operator=(rhs);   //第三步加入的代码
    logCall("PriorityCustormer copy assigment operator");
    priority = rhs.priority;
    return *this;
}

int main(){
    Date d;
    d.setDay(10);
    PriorityCustormer pc1;

//    Customer c1;
    pc1.setName("客户A");
    pc1.setDate(d);
    pc1.setPriorrity(55);
    PriorityCustormer pc2(pc1);
    PriorityCustormer pc3;
    pc3 = pc1;
//    Customer c2(c1);
//    Customer c3;
//    c3 = c1;
    pc1.print();
    pc2.print();
    pc3.print();
}