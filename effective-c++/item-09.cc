#include <iostream>
class Transaction { // base class for all
public:             // transactions
    explicit Transaction(const std::string &logInfo);
    virtual void f();
    //virtual void logTransaction() const = 0; // make type-dependent
    void logTransaction(const std::string &logInfo) const; // now a non-virtual function
    // log entry
};

Transaction::Transaction(const std::string &logInfo) // implementation of
{                          // base class ctor
    // logTransaction();    // as final action, log this
    logTransaction(logInfo);
} // transaction
void Transaction::f(){}
void Transaction::logTransaction(const std::string& logInfo) const {
    std::cout << "Transaction:" << logInfo << std::endl;
}

class BuyTransaction : public Transaction { // derived class
public:
    BuyTransaction(const std::string &logInfo)
            : Transaction(logTransaction(logInfo)) {}
    // virtual void logTransaction() const; // how to log transactions of this type
    virtual void t();

private:
    static std::string createLogString(const std::string &logInfo);
    static std::string logTransaction(const std::string &logInfo);
};

std::string BuyTransaction::createLogString(const std::string& logInfo) {
    std::cout << "BuyTransaction LogInfo: " << logInfo << std::endl;
    return logInfo;
}
std::string BuyTransaction::logTransaction(const std::string &logInfo) {
    std::cout << "BuyTransaction::logTransaction :" << logInfo << std::endl;
    return logInfo;
}
//void BuyTransaction::logTransaction() const {
//  std::cout << "Buy" << std::endl;
//}
void BuyTransaction::t() {}

class SellTransaction : public Transaction { // derived class
public:
    virtual void logTransaction() const; // how to log transactions of this type

};
void SellTransaction::logTransaction() const {
    std::cout << "Sell" << std::endl;
}
int main() {
    std::cout << "Item 9: Never call virtual functions during construction or destruction." << std::endl;
    BuyTransaction b("ajsdhfajklsdjkk");
    return 0;
}