
#include <iostream>
#include <memory>
struct Day{
    explicit Day(int d): val(d){}
    int val;
};

//struct Month{
//    explicit Month(int m): val(m){}
//    int val;
//};
class Month{
public:
    static Month Jan() { return Month(1); }
    static Month Feb() { return Month(2); }
    // ...
    static Month Dec() { return Month(12); }
private:
    explicit Month(int m):_month(m){

    };
    int _month=0;
};

struct Year{
    explicit Year(int y): val(y){}
    int val;
};

class Date{
public:
    Date(Month month, Day day, Year year):_month{month}, _day{day}, _year{year}{

    }
private:
    Month _month;
    Day _day;
    Year _year;
};

class Investment{
public:
    Investment(){}
    ~Investment(){}
private:
};
void getRidOfInvestment(Investment* pI){
    delete pI;
}
std::shared_ptr<Investment> createInvestment(){
    std::shared_ptr<Investment> retVal(static_cast <Investment*>(0), getRidOfInvestment);
    retVal = std::shared_ptr<Investment>(new Investment);
    return retVal;
}
int main(){
    std::shared_ptr<Investment> sp = createInvestment();
//    Date date1(3,30,1995);
//    Date date2(30,3,1995);
    Year year(2023);
    //Month month(8);
    Month month(Month::Jan());
    Day day(23);
    Date d1(month, day, year);
}