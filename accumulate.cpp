#include "accumulate.h"

Accumulate::Accumulate( int a, float b ) :
    _a( a ),
    _b( b ) {}

int Accumulate::getA() const {
    return _a;
}

void Accumulate::setA( int value ) {
    _a = value;
}

float Accumulate::getB() const {
    return _b;
}

void Accumulate::setB( float value ) {
    _b = value;
}
