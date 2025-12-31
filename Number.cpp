
#include "Number.h"
#include <stdexcept>

Number::Number(double value) : a(value) {}

Number Number::operator+(const Number& other) const {
    return Number(this->a + other.a);
}

Number Number::operator-(const Number& other) const {
    return Number(this->a - other.a);
}

Number Number::operator*(const Number& other) const {
    return Number(this->a * other.a);
}

Number Number::operator/(const Number& other) const {
    if (other.a == 0.0) {
        throw std::runtime_error("Division by 0");
    }
    return Number(this->a / other.a);
}

double Number::getValue() const {
    return a;
}

const Number ZERO(0.0);
const Number ONE(1.0);

Number createNumber(double value) {
    return Number(value);
}