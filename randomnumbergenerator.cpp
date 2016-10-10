#include "randomnumbergenerator.h"

RandomNumberGenerator::RandomNumberGenerator( unsigned int from, unsigned int to )
    :from(from), to(to)
{
}

unsigned int RandomNumberGenerator::next()
{
    unsigned int randomNumber;
    randomNumber = rand()%to + from;
    return randomNumber;
}

void RandomNumberGenerator:: seed(unsigned int newseed)
{
    srand((unsigned)newseed);
    return;
}

//void RandomNumberGenerator::reset(){}

void RandomNumberGenerator::seednow()
{
    srand((unsigned)time(NULL));
    return;
}
