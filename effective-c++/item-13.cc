/*
 *  item13 ：以对象管理资源
 *
 */
#include <iostream>
#include <memory>
class Investment{
public:
    Investment(){
        std::cout << "构造一个 Investment 对象" << std::endl;
    }
    ~Investment(){
        std::cout << "销毁一个 Investment 对象" <<std::endl;
    }

private:
    //data
};
Investment* createInvestment(){

    return new Investment();
};
//void f(){
//    Investment* pInv = createInvestment();
//    return ;
//    delete pInv;
//}

void f_unique(){
    std::unique_ptr<Investment> pInv(createInvestment());
    std::unique_ptr<Investment> pInv2(std::make_unique<Investment>(*pInv));
    //std::unique_ptr<Investment> pInv2(pInv);
    //pInv = pInv2;
}
void f_shared(){
    std::shared_ptr<Investment> pInv1(createInvestment());
    std::shared_ptr<Investment> pInv2(pInv1);
    Investment *p = pInv2.get();
    //std::cout << "" << *p << std::endl;
}

int main(){
    f_unique();
    f_shared();
}