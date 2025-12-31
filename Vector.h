#ifndef VECTOR_H
#define VECTOR_H
#define VECTOR_API

#include "Number.h"

class VECTOR_API Vector {
private:
    Number x;
    Number y;

public:
    Vector(const Number& x_val, const Number& y_val);
    Number getPolarRadius() const;
    Number getPolarAngle() const;
    Vector add(const Vector& other) const;
    double getX() const;
    double getY() const;
};

extern "C" {
    VECTOR_API Vector* createVector00();
    VECTOR_API Vector* createVector11();
    VECTOR_API void deleteVector(Vector* vec);
}

#endif