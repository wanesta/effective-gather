/*
 *  item-14
 */
#include <mutex>
#include <iostream>
#include <pthread.h>
#include <thread>
class Mutex{
public:
    bool isLocked = false;
};

void lock(Mutex* pm){
    pm->isLocked = true;
    std::cout << "mutex lock" << std::endl;

}
void unlock(Mutex* pm){
    pm->isLocked = false;
    std::cout << "mutex unlock" << std::endl;
}


//class Lock{
//public:
//    explicit Lock(Mutex* pm): mutexPtr(pm, unlock){
//        lock(mutexPtr);
//    }
//    ~Lock(){
//        unlock(mutexPtr);
//    }
//
//private:
//    Mutex* mutexPtr;
//
//};
class Lock{
public:
    explicit Lock(Mutex* pm): mutexPtr(pm, unlock){
        lock(mutexPtr.get());
    }

private:
    std::shared_ptr<Mutex> mutexPtr;
};

Mutex m;
int main(){
    //Lock m1(&m);
    Lock ml1(&m);
    Lock ml2(ml1);
}