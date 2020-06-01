#ifndef ACCUMULATE_H
#define ACCUMULATE_H

class Accumulate {
public:
    Accumulate( int a, float b );

    int getA() const;
    void setA( int value );

    float getB() const;
    void setB( float value );

private:
    int _a = 0;
    float _b = 0.0f;

};

#endif // ACCUMULATE_H
