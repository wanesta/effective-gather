#include <iostream>

class Rational
{
public:
    Rational(int numerator = 0, int denominator = 1);
private:
    int n, d; //分子和分母
    friend const Rational operator*(const Rational& lhs, const Rational& rhs);
};
friend const Rational&
operator*(const Rational& lhs, const Rational& rhs) {
    Rational result(lhs.n*rhs.n, lhs.d*rhs.d);
    return result; //虽然编译器不报错，但是逻辑上是错误的
}