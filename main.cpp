#include "accumulate.h"

#include <list>
#include <numeric>
#include <iostream>

int main( int /*argc*/, char* /*argv*/[] ) {

    Accumulate* a = new Accumulate( 1, 10 );
    Accumulate* b = new Accumulate( 2, 11 );

    std::list<Accumulate*> accumulates = { a, b };

    int AAccumulated = std::accumulate( accumulates.begin(), accumulates.end(), 0.0,
                                        []( int accumulated, const Accumulate* accumulate ) {
        return accumulated + accumulate->getA();
    } );

    float BAccumulated = std::accumulate( accumulates.begin(), accumulates.end(), 0.0,
                                          []( float accumulated, const Accumulate* accumulate ) {
        return accumulated + accumulate->getB();
    } );

    std::cout << "A: " << AAccumulated << '\n';
    std::cout << "B: " << BAccumulated << '\n';

    return 0;

}
