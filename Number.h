#ifndef NUMBER_H
#define NUMBER_H

class Number
{
private:
    double a;

public:
    Number(double value = 0.0);
    Number operator+(const Number& other) const;
    Number operator-(const Number& other) const;
    Number operator*(const Number& other) const;
    Number operator/(const Number& other) const;
    double getValue() const;
};

extern const Number ZERO;
extern const Number ONE;
Number createNumber(double value);

#endif