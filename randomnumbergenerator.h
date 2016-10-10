#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H


#include <limits.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class RandomNumberGenerator {
    private:
        unsigned int from;
        unsigned int to;
    public:
        RandomNumberGenerator( unsigned int from = 0, unsigned int to = UINT_MAX ); //constructor
        unsigned int next();
        void seed(unsigned int newseed);
//        void reset();
        void seednow();
};
#endif // RANDOMNUMBERGENERATOR_H
