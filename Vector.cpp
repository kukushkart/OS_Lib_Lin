
#include "Vector.h"
#include "Number.h"  
#include <cmath>

Vector::Vector(const Number& x_val, const Number& y_val) : x(x_val), y(y_val) {}

Number Vector::getPolarRadius() const {
    double radius = std::sqrt(x.getValue() * x.getValue() + y.getValue() * y.getValue());
    return Number(radius);
}

Number Vector::getPolarAngle() const {
    double angle = std::atan2(y.getValue(), x.getValue());
    return Number(angle);
}

Vector Vector::add(const Vector& other) const {
    Number new_x = x + other.x;
    Number new_y = y + other.y;
    return Vector(new_x, new_y);
}

double Vector::getX() const { return x.getValue(); }
double Vector::getY() const { return y.getValue(); }

extern "C" {
    Vector* createVector00() {
        return new Vector(Number(0), Number(0));
    }

    Vector* createVector11() {
        return new Vector(Number(1), Number(1));
    }

    void deleteVector(Vector* vec) {
        delete vec;
    }
}