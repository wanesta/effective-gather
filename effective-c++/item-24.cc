#include <iostream>

class Rational
{
public:
    Rational(int numerator = 0, int denominator = 1):n{numerator},d{denominator}{

    }

    int numerator() const {return n;}
    int denominator() const {return d;}

    //const Rational operator*(const Rational& rhs) const{ return Rational(this->n * rhs.n,this->d * rhs.d);}
private:
    int n, d; //分子和分母
};
const Rational operator*(const Rational& lhs, const Rational& rhs) {
    return Rational(lhs.numerator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
}
int main(){

    Rational oneEight(1, 8);
    Rational oneHalf(1, 2);
    Rational result = oneEight * oneHalf;
    result = result * oneEight;
    result = oneHalf * 2;    //result = oneHalf.operator*(2) 正确;
    result = 2 * oneHalf; //报错  result = 2.operator*(oneHalf)
}